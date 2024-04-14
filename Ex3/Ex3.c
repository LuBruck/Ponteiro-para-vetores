#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numero, i, maior;

    numero=(int*)malloc(10*sizeof(int));
    for(i=0;i<10;i++){
        printf("Digite um numero:");
        scanf("%d", (numero+i));
    }

    for  (i = 0, maior = *numero; i < 10; i++){
       maior = *(numero+i)>maior?*(numero+i):maior; 
    }
    printf("O maior numero dado foi: %d\n", maior);
    return 0;
}