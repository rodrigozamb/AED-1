#include"nord_est_cabeca.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
    int i=0,r,f;
    Lista p;

    p=cria_lista();
    printa_lista(p);

    do{
        int q,v;
        printf("\nDeseja adicionar um elemento na sua lista?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(insere_ord(&p,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        }else break;
    }while(1);
    printa_lista(p);

    do{
        int q,v;
        printf("\nDeseja deletar um elemento na sua lista?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(remove_ord(&p,q)==0)printf("\n------------------------------------------------------\nErro,elemento nao existe na lista.\n------------------------------------------------------\n");
        printa_lista(p);
        }else break;
    }while(1);

    printa_lista(p);
    printf("Menor elemento da lista = %d\n",menor(&p));

    printf("Removendo impares : \n");
    remove_imp(&p);
    printa_lista(p);
    printf("Menor elemento da lista = %d\n",menor(&p));
    printf("Conferindo se p e p sao iguais:\n");
    if(iguais(&p,&p)==0)printf("Lista iguais...\n");
    else printf("listas diferentes..\n");

    printf("Concatenando p e p:\n");

    Lista c=concat(&p,&p);
    printa_lista(c);


return 0;
}


