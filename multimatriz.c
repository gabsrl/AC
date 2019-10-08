#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM_MAX 10000 
int a[TAM_MAX][TAM_MAX];
int b[TAM_MAX][TAM_MAX];
int c[TAM_MAX][TAM_MAX];

int main() {
    srand((unsigned)time(NULL));  // pegando uma semente

    // init the matrix. I'm trying to release your mind, Neo.
   for(int i = 0; i < TAM_MAX; i++) {
        for(int j = 0; j < TAM_MAX; j++) {
            a[i][j] = rand();
            b[i][j] = rand();
            c[i][j] = 0;
        }
    }
 
    for(int i = 0; i < TAM_MAX; i++) {
        for(int j = 0; j < TAM_MAX; j++) {
            for(int k = 0; k < TAM_MAX; k++) {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

   /*for(int i = 0; i < TAM_MAX; i++) {
        for(int j = 0; j < TAM_MAX; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }*/
    printf("fim");

    return 0;
}