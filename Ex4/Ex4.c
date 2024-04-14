#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numero, i;
    
    numero = (int*)malloc(sizeof(int)*10);

    for(i=0;i<10;i++){
        printf("Coloca um numero:");
        scanf("%d", (numero+i));
    }

    for(i=0;i<10;i++){
        printf("O numero %d x2:%d\n", *(numero+i), *(numero+i)*2);
    } 
    return 0;
}