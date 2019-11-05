.data 
    numero1: .word64 2
    numero2: .word64 4
    resultado: .word64 0 
.text
    lw $t0, numero1($v0)
    lw $t1, numero2($v0)
    dadd $t2, $t0, $t1
    sd $t2, resultado($v0)
    syscall 0