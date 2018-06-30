#include<stdio.h>
#include<stdlib.h>
#include"Ex9T2AED.h"

struct no{
    int info;
    struct no *prox;
};

struct fila{
    struct no *ini;
    struct no *fim;
};

Fila cria_fila(){
    Fila f;
    f= (Fila)malloc(sizeof(struct fila));
    if(f!=NULL){
        f->ini=NULL;
        f->fim=NULL;
    }
return f;
}


int fila_vazia(Fila f){
    if(f->ini==NULL)return 1;
    else return 0;
}


int insere_fim(Fila f, int elem){

    struct  no * N;
    N = (struct no *)malloc(sizeof(struct no));
    if(N==NULL)return 0;
    N->info = elem;
    N->prox = NULL;
    struct no * aux = f->fim;
    if(fila_vazia(f)==1)f->ini=N;
    else aux->prox = N;
    f->fim=N;
    return 1;

}




int remove_ini(Fila f, int *elem){
    if(fila_vazia(f)==1)return 0;

    struct no *aux = f->ini;

    *elem = aux->info;
    if(f->ini==f->fim)f->fim=NULL;

    f->ini=aux->prox;
    free(aux);
    return 1;
}


int printa_fila(Fila f){

    struct no *aux=f->ini;
    printf("{ ");
    while(aux!=NULL){
        printf("%d ",aux->info);
        aux= aux->prox;
    }
    printf("}\n");

}


int insere_ord(Fila f, int elem){

    struct no* N;
    N=(struct no *)malloc(sizeof(struct no));
    if(N==NULL)return 0;
    N->info=elem;

    if(fila_vazia(f)==1){
        f->ini = N;
        f->fim = N;
        N->prox = NULL;
        return 1;
    }

    if(elem <= f->ini->info){
        N->prox= f->ini;
        f->ini = N;
        return 1;
    }


    if(elem>=f->fim->info){
        N->prox= NULL;
        f->fim->prox = N;
        f->fim = N;
        return 1;
    }

    struct no * aux =  f->ini;

    while((aux->prox != NULL)  && (aux->prox->info < elem) )aux=aux->prox;

    N->prox = aux->prox;
    aux->prox = N;
return 1;
}
