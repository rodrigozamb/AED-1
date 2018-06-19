#include"Ex3TAED.h"
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
        if(insere_elem(&p,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");

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
        if(remove_elem(&p,q)==0)printf("\n------------------------------------------------------\nErro,elemento nao existe na lista.\n------------------------------------------------------\n");
        printa_lista(p);
        }else break;
    }while(1);

    printa_lista(p);
    int w=tamanho(&p);
    printf("Tamanho da lista = %d\n",w);



    insere_fim(&p,10);
    printa_lista(p);

    remove_pares(&p);
    printa_lista(p);

    printf("Maior elemento = %d\n",maior(&p));

    printf("Concatenando :\n");
    Lista c=concat(&p,&p);
    printa_lista(c);


return 0;
}
