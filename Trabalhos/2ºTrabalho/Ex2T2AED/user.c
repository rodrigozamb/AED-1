#include"Ex2T2AED.h"
#include<stdio.h>
#include<stdlib.h>

int main(){
    Pilha par=cria_pilha();
    Pilha impar=cria_pilha();
    Pilha a=cria_pilha();

    push(&a,1);
    push(&a,2);
    push(&a,3);
    push(&a,4);
    push(&a,5);
    push(&a,6);
    push(&a,7);
    push(&a,8);
    push(&a,9);
    push(&a,10);


    par_impar(a,&par,&impar);

    printf("pares : \n");
    print_pilha(par);
    printf("impares : \n");
    print_pilha(impar);


return 0;
}
