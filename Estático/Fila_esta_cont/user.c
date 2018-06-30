#include<stdio.h>
#include<stdlib.h>
#include"Fila_esta_cont.h"
#define MAX 20
int main(){
    Fila f=cria_fila();
    int x,n,i;
     print_fila(f);
    printf("Qnts numeros deseja inserir?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_fim(f,num);
        tamanho(f);
    }
    print_fila(f);

    printf("\nQnts numeros deseja remover?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        remove_fila(f,&num);
        printf("numero removido =  %d \n",num);
        tamanho(f);
    }

print_fila(f);

return 0;
}

