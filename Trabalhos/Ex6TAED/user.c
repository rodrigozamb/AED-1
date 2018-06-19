#include<stdio.h>
#include<stdlib.h>
#include "Ex6TAED.h"
struct no {
    int info;
    struct no * prox;
};

int main(){


    Lista a;
    int x=-99999,num;

    a=cria_lista();
    do{
        int nn;
        printf("Deseja adicionar um novo elemento? (1-Yes / 2-No) ");
        scanf("%d",&num);
        if(num==1){
            printf("Qual seria ele? -> ");
            scanf("%d",&nn);
            insere_final(&a,nn);
        }
    }while(num!=2);

    imprime_lista(&a);
    remove_inicio(&a,&x);
    printf("Elemento removido = %d\n",x);
    imprime_lista(&a);


    printf("Tamanho da lista = %d\n",tamanho(&a));
    printf("\n\n\n");
    remove_n(&a,2);
    printf("Removendo 2o elemento\n");
    imprime_lista(&a);


    printf("Maior elemento = %d\n",maior(&a));

    printf("\n\n\n");
    insere_n(&a,99,2);
    printf("Inserindo 2o elemento\n");
    imprime_lista(&a);
    printf("Maior elemento = %d\n",maior(&a));




return 0;
}
