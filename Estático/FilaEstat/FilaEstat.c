#include<stdio.h>
#include<stdlib.h>
#include"FilaEstat.h"
#define MAX 20
struct fila{
    int vetor[MAX];
    int ini,fim;
};


Fila cria_fila(){
    Fila f;
    f = (Fila)malloc(sizeof(struct fila));
    if(f!=NULL){
        f->ini=0;
        f->fim=0;
    }
return f;
}

int fila_vazia(Fila f){
    if(f->ini==f->fim)return 1;
    else return 0;
}

int fila_cheia(Fila f){
    if(f->ini==(f->ini+1)%MAX)return 1;
    else return 0;
}

int insere_fim(Fila f, int elem){
    if(fila_cheia(f)==1)return 0;
    f->vetor[f->fim]=elem;
    f->fim = (f->fim+1)%MAX;
return 1;
}

int remove_ini(Fila f,int *elem){
    if(fila_vazia(f)==1)return 0;

    *elem=f->vetor[f->ini];
    f->ini = (f->ini+1)%MAX;
    return 1;
}

int print_lista(Fila f){
    if(fila_vazia(f)==1){
        printf("{ }\n");
        return 0;
    }
    int i;
    printf("{ ");
    for(i=0;f->ini+i<f->fim;i++){
        if(f->ini==MAX){
            f->ini=0;
            i=0;
        }
        printf("%d ",f->vetor[f->ini+i]);

    }
    printf("}\n");
return 0 ;
}
