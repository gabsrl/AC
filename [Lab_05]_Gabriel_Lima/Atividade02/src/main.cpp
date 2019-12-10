#include <stdio.h>
#include <omp.h>

int main() {
    int i;
    int temp;
    temp=44;
    int sum = 0;

    #pragma omp parallel  for private(temp) reduction(+:sum)
    for(i=0;i<=10;i++) {
        temp=i;
        printf("Thread id: %d | Valor de temp: %d\n", omp_get_thread_num(),temp);
        sum += temp;
    }
    printf("temp: %d\n", temp);
    printf("sum: %d\n", sum);
    return 0;
}
