#include"Pilha_Din.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
    /*Pilha a;
    int x=1;
    a=cria_pilha();

    do{
        int x,y;
        printf("Deseja inserir elemento na pilha?(1-Yes / 2-No)\n");
        scanf("%d",&x);
        if(x==2)break;
        printf("Qual elemento?\n");
        scanf("%d",&y);
        push(&a,y);
        printf("elemento inserido com sucesso!!\n\n");
    }while(x!=2);
    printf("\n");
    print_pilha(a);
    do{
        int x,z;
        printf("Deseja eliminar o elemento do topo pilha?(1-Yes / 2-No)\n");
        scanf("%d",&x);
        if(x==2)break;
        pop(&a,&z);
        printf("Elemento retirado = %d\n",z);
    }while(x!=2);
    print_pilha(a);
*/
    int n;
    char exp[100];
    scanf("%[^\n]s",exp);
    n=valida_escopo(exp);
    if(n==1)printf("Escopo Valido\n");
    if(n==0)printf("Escopo Invalido\n");




return 0;
}
