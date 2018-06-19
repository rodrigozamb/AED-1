#include"Din_DuplaEnc.h"
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
        if(insere_elemento(&p,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
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
        if(remove_elemento(&p,q)==0)printf("\n------------------------------------------------------\nErro,elemento nao existe na lista.\n------------------------------------------------------\n");
        printa_lista(p);
        }else break;
    }while(1);
    printf("removendo todos\n");
    remove_todos(&p,2);
    printa_lista(p);
    printf("Maior elem = %d\n\n",maior(&p));

    printf("removendo o maior \n");
    remove_maior(&p);
    printa_lista(p);


    printf("\n\n Lista mult 3 \n\n");
    Lista c=mult_3(&p);
    printa_lista(c);
    printf("Tamanho da lista = %d\n",tamanho(&c));
return 0;
}
