#include<stdio.h>
#include<stdlib.h>
#include"Fila_esta_cont.h"
#define MAX 20



struct fila{
    int vetor[MAX];
    int ini,cont;
};

Fila cria_fila(){
    Fila f;
    f= (Fila)malloc(sizeof(struct fila));
    if(f!=NULL){
        f->ini=0;
        f->cont=0;
    }
return f;
}


int fila_vazia(Fila f){
    if(f->cont==0)return 1;
    else return 0;
}

int fila_cheia(Fila f){
    if(f->cont==MAX)return 1;
    else return 0;
}

int insere_fim(Fila f,int elem){
    if(fila_cheia(f)==1)return 0;
    f->vetor[(f->ini+f->cont)%MAX]=elem;
    f->cont++;
return 1;
}

int remove_fila(Fila f,int *elem){
    if(fila_vazia(f)==1)return 0;
    *elem = f->vetor[f->ini];
    f->ini=(f->ini+1)%MAX;
    f->cont--;
return 1;
}

//DA PRA MELHORAR ISSO AQUI
int print_fila(Fila f){
    int i;
    if(fila_vazia(f)==1){
        printf("{ }\n");
        return 0;
    }
    printf("{ ");
    for(i=0;i<f->cont;i++){
        printf("%d ",f->vetor[f->ini+i]);
    }
    printf("}\n");
return 0 ;
}

int tamanho(Fila f){
    printf("Tamanho = %d\n",f->cont);

}
