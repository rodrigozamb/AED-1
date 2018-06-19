#include"Ex1TAED.h"
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
do{
        int q,v;
        printf("\nDeseja adicionar um elemento no inicio da sua lista?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(insere1(p,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        print_lista(p);
        }else break;
    }while(1);

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


    remove_imp(p);
    print_lista(p);

    if(menor(p)==1000)printf("\nErro ao calcular menor elemento da lista !! \n");
    else printf("Menor elemento da lista = %d\n",menor(p));

    Lista *c,*a,*b;
    c=cria_lista();
    b=cria_lista();
    a=cria_lista();

    insere1(a,1);
    insere1(a,2);
    insere1(a,3);
    insere1(a,4);
    insere1(b,5);
    insere1(b,6);
    insere1(b,7);
    insere1(b,8);
    printf("A : ");
    print_lista(a);
    printf("B :");
    print_lista(b);

    c=concat(a,b,c);
    printf("Lista concatenada de A e B :");
    print_lista(c);




return 0;
}
