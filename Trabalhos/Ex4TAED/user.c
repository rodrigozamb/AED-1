#include"Ex4TAED.h"

#include<stdio.h>
#include<stdlib.h>

int main(){
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
        printf("\n");
        printa_lista(p);
        }else break;
    }while(1);

    printa_lista(p);


    Lista c=concat(&p,&p);
    printf("Lista c:\n");
    printa_lista(c);
    printf("Menor elem da lista  = %d\n",menor(&c));
    printf("Tamanho da lista = %d\n",tamanho(&c));

    if(iguais(&p,&c)==0)printf("As listas são iguais\n");
    else printf("As listas sao diferentes\n");

    remove_imp(&c);
    printa_lista(c);





return 0;
}
