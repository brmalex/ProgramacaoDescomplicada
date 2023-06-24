#include <stdio.h>
#include <stdlib.h>

int main(){
    int* a = (int*) malloc(5*sizeof(int));
    for (int i = 0; i <= 4; i++){
        printf("Digite o número %d: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 4; i++){
        printf("%d ", a[i]);
    }
    free(a);
}
