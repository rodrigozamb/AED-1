#include<stdio.h>
#include<stdlib.h>
#include"FilaEstat.h"

int main(){
    Fila f=cria_fila();
    int x,n,i;
    print_lista(f);
    printf("Qnts numeros deseja inserir?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        scanf("%d",&num);
        insere_fim(f,num);
    }

    print_lista(f);

    printf("\nQnts numeros deseja remover?\n");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int num;
        remove_ini(f,&num);
        printf("numero resolvido =  %d \n",num);
    }
    print_lista(f);

return 0;
}
