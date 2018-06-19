#include<stdio.h>
#include<stdlib.h>
#include"ListaOrd.h"
#define MAX 10

int main(){
int i=0,r,f;
    Lista *p;

    p=cria_lista();

    print_lista(p);

    do{
        int q,v;
        printf("\nDeseja adicionar ordenadamente um elemento na sua lista?\n1-Yes\n2-No\n\n");
        scanf("%d",&v);
        if(v==1){
        printf("\nDigite o elemento:\n");
        scanf("%d",&q);
        if(insere_ord(p,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        }else break;
    }while(1);

        print_lista(p);

    do{
    printf("Deseja remover ordenadamente algum item da lista?\n1-Yes\n2-No\n");
    scanf("%d",&r);
    if(r==1){
        printf("Digite o numero a ser removido : ");
        scanf("%d",&f);
        remove_ord(p,f);
    }
    print_lista(p);
    }while(r==1);








return 0;
}
