; fatorial. Nessa atividade será utilizado o fatorial de 5.

.data
    numero: .word 5
    resultado: .word 0
    aux: .word 0
    constante: .word 1
.text
    lw $t4, constante($v0) ; carregando a constante para o registrador t4
    lw $t0, numero($v0) ; carregando o valor de numero para o registrador t0
    lw $t2, resultado($v0) ; carregando o valor de resultado para t2
    movn $t1, $t0, $t0 ; movendo o valor de numero para aux
    dsub $t1, $t0, $t4 ; aux = numero - constante
while: beqz $t1, fim ; enquanto aux != 0
        dsub $t1, $t1, $t4 ; aux = numero - constante
        b while
fim: syscall 0

    ; aux = numero - 1
    ; while aux != 1:
    ;   resultado = numero * k
    ;   k = k - 1 