; equacao do segundo grau.

.data
    x: .word 2
    a: .double 0.5
    b: .double 1.0
    c: .word 0
    constante2: .word 2
    constante4: .word 4
    resultado: .word 0

.text
    ldc1 f0, a($t0)
    ldc1 f1, b($t0)
    lw $t2, x($t0)
    lw $t1, c($t0)
    lw $t3, constante2($t0)
    lw $t4, constante4($t0)

    mul.d f3, f1, f1 ; b^2
    mul.d f4, f0, f1 ; a*b
    mul.d f4, f4, $t4


    ; calcular delta
    ; encontrar raiz 1
    ; encontrar raiz 2222222
