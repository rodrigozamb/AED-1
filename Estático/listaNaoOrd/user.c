#include"ListanaoOrd.h"
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(){
    int i=0,r,f;
    Lista *p;

    p=cria_lista();

    print_lista(p);

    do{
        int q,v;
        printf("\nDeseja adicionar um elemento na sua lista?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(insere_elem(p,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        }else break;
    }while(1);


    print_lista(p);

    printf("Deseja apagar todas as repeticoes de um numero?\n1-Yes\n2-No\n");
    scanf("%d",&r);
    if(r==1){
        printf("Qual elemento? ");
        scanf("%d",&f);
        remove_todos(p,f);

    }

    print_lista(p);

    do{
    printf("Deseja remover algum item da lista?\n1-Yes\n2-No\n");
    scanf("%d",&r);
    if(r==1){
        printf("Digite o numero a ser removido : ");
        scanf("%d",&f);
        remove_elem(p,f);
    }
    print_lista(p);
    }while(r==1);
    libera(p);

   printf("\n-------------------------------------------------------------------------------------------------------\nEx4 = :\n\n");


    Lista *a,*b,*c;
    a=cria_lista();
    b=cria_lista();
    c=cria_lista();

    do{
        int q,v;
        printf("\nDeseja adicionar um elemento na sua lista A?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(insere_ord(a,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        }else break;
    }while(1);
    print_lista(a);
    int t= tamanho(a);
    printf("Tamanho da lista = %d\n",a);
    do{
        int q,v;
        printf("\nDeseja adicionar um elemento na sua lista B?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(insere_ord(b,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        }else break;
    }while(1);

    print_lista(a);

    printf("Tamanho da 1a lista = %d\n",a);

    print_lista(b);

    printf("Tamanho da 2a lista = %d\n",b);


    c=catord(a,b);
    print_lista(c);

    printf("Tamanho da lista concatenada = %d\n",c);



return 0;
}
