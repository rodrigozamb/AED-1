#include<stdio.h>
#include<stdlib.h>
#include"Ex10T2AED.h"

int main(){
    Deque f=cria_deque();
    int x,n,i;

    printf("Qnts numeros deseja inserir?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_ini(f,num);
    }
    printf("Qnts numeros deseja inserir?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_fim(f,num);
    }
    printa_deque(f);
    printf("\nQnts numeros deseja remover?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        remove_ini(f,&num);
        printf("numero resolvido =  %d \n",num);
    }
    printa_deque(f);
return 0;
}
