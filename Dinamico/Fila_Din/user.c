#include<stdio.h>
#include<stdlib.h>
#include"Fila_Din.h"

int main(){
    Fila f=cria_fila();
    int x,n,i;

    printf("Qnts numeros deseja inserir?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_fim(f,num);
    }
    printa_fila(f);
    printf("\nQnts numeros deseja remover?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        remove_ini(f,&num);
        printf("numero resolvido =  %d \n",num);
    }
    printa_fila(f);
return 0;
}
