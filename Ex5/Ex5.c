#include <stdio.h>
#include <stdlib.h>

float pedir_nota(){
    float nota;
    printf("Qual foi a nota dessa prova:");
    scanf("%f", &nota);
    return nota;
}


int main(){
    float *notas, media=0;
    int qnt_notas, i;

    printf("Sao quantas notas:");
    scanf("%d", &qnt_notas);

    notas = (float*)malloc(sizeof(float)*qnt_notas);

    for(i=0;i<qnt_notas;i++){
        *(notas+i) = pedir_nota();
    }

    for(i=0;i<qnt_notas;i++){
        media+= *(notas+i);
    }
    media/=qnt_notas;

    printf("Media das notas:%.2f\n", media);
    return 0;
}