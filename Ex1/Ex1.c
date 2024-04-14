#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numero, i;

    numero=(int*)malloc(10*sizeof(int));
    for(i=0;i<10;i++){
        printf("Digite um numero:");
        scanf("%d", (numero+i));
    }

    for  (i = 0; i < 10; i++){
        printf("%d\n", *(numero+i));
    }

    return 0;
}