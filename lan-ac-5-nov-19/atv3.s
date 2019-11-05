.data
    numero1: .double 2.5
    numero2: .double 10
    resultado1: .double 0.0
    resultado2: .word 0

.text
    ldc1 f0, numero1($t0) ; carrega um douvle na memoria
    ldc1 f1, numero2($t1) ; carrega um double na memoria
    mul.d f2, f0, f1 ; multiplica double
    sdc1 f2, resultado1($v0) ;grava o double de f2 na memoria
    cvt.w.d f3, f2 ;
    dmfc1 $t2, f3
    sd $t2, resultado1($v0)
    syscall 0