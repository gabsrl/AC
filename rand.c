#include <stdlib.h>
#include <time.h>

#include <stdio.h>

#define INT_MAX 2147483647 // 2^31 -1 

unsigned int rseed = 1; 

unsigned int rand() {
    return rseed = (rseed * 1664525 + 1013904223) & INT_MAX;
}


int main() { 

    int i;
    printf("rand max is %d\n", INT_MAX);

    for(i = 0; i < 10; i++)
        printf("%9.6f\n", (double) rand()/INT_MAX);
    return 0;
}

// n é o número de iterações