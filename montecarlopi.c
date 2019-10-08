#include <stdio.h>

#define INT_MAX 2147483647
#define INT_MAX 2147483647


int rseed = 0; 

int rand() {
    return rseed = (rseed * 1664525 + 1013904223) & INT_MAX;
}

int main() {
    int acertos = 0;
    int n = 10;
    int x, y;
    double resultado;
    for(int i = 0; i < n; i++) {
        x = rand(); // mudar funcao para a random normal do c
        y = rand(); // mudar funcao para a random normal do c
        if(x*x + (y*y) < 1)
            acertos++;
    }
    resultado = (double) (4*acertos) / n;
    printf("Montecarlo - Resultado para %d iteracoes: %f\n", n, resultado);
    return 0;
}