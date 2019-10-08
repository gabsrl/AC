#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INT_MAX 2147483647


int rseed = 1; 

double randLCG() {
    return rseed = (rseed * 1664525 + 1013904223) & INT_MAX;
}

int main() {
    srand((unsigned)time(NULL));  // pegando uma semente
    int acertos = 0;
    int n = 5000000;
    double x, y;
    double resultado;
    for(int i = 0; i < n; i++) {
        x = (rand() % 101)/100; // mudar funcao para a random normal do c
        y = (rand() % 101)/100; // mudar funcao para a random normal do c
        if((x*x) + (y*y) < 1)
            acertos++;
    }
    resultado = ((double)  4 * acertos/n);
//    resultado = 4 * resultado;
    printf("Montecarlo - Resultado para %d iteracoes: %f\n", n, resultado);
    return 0;
}