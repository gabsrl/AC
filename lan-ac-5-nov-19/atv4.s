; fatorial. Nessa atividade será utilizado o fatorial de 5.

.data
    numero: .word64 5
    resultado: .word64 0
    aux: .word64 0
    constante: .word64 1
.text
    lw $t4, constante($v0) ; carregando a constante para o registrador t4
    lw $t0, numero($v0) ; carregando o valor de numero para o registrador t0
    lw $t2, resultado($v0) ; carregando o valor de resultado para t2
    movn $t1, $t0, $t0 ; movendo o valor de numero para aux
    dsub $t1, $t0, $t4 ; aux = numero - constante
while: beqz $t1, fim ; enquanto aux != 0
        dmult $t0, $t1 ; LO = n*k
        mflo $t0 ; t0 = LO
        dsub $t1, $t1, $t4 ; aux = numero - constante
        b while
fim: sd $t0, resultado($v0) ; gravando resultado na memoria
    syscall 0
