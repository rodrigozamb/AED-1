#include"Ord_Din_Cabeca.h"
#include<stdio.h>
#include<stdlib.h>

int main(){

    Lista a=cria_lista();
     do{
        int nn;
        printf("Deseja adicionar um novo elemento? (1-Yes / 2-No) ");
        scanf("%d",&num);
        if(num==1){
            printf("Qual seria ele? -> ");
            scanf("%d",&nn);
            insere_ord(&a,nn);
        }
    }while(num!=2);






return 0;
}
