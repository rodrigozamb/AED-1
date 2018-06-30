#include<stdio.h>
#include<stdlib.h>
#include"Ex10T2AED.h"

struct no{
    int info;
    struct no *prox;
    struct no *ant;
};

struct deque{
    struct no *ini;
    struct no *fim;
};

Deque cria_deque(){
    Deque f;
    f= (Deque)malloc(sizeof(struct deque));
    if(f!=NULL){
        f->ini=NULL;
        f->fim=NULL;
    }
return f;
}


int deque_vazia(Deque f){
    if(f->ini==NULL)return 1;
    else return 0;
}


int insere_fim(Deque f, int elem){

    struct no *N;
    N = (struct no*)malloc(sizeof(struct no));
    if(N==NULL)return 0;
    N->info = elem;
    N->prox = NULL;
    if(deque_vazia(f)==1){
        f->ini=N;
        f->fim=N;
        N->ant=NULL;
        return 1;
    }
    f->fim->prox = N;
    N->ant=f->fim;
    f->fim = N;


    return 1;

}


int insere_ini(Deque f, int elem){

    struct no *N;
    N = (struct no*)malloc(sizeof(struct no));
    if(N==NULL)return 0;
    N->info = elem;
    N->prox = NULL;
    if(deque_vazia(f)==1){
        f->ini=N;
        f->fim=N;
        N->ant=NULL;
        return 1;
    }
    N->prox=f->ini;
    f->ini->ant = N;
    f->ini = N;
    N->ant=NULL;
    return 1;

}


int remove_ini(Deque f, int *elem){
    if(deque_vazia(f)==1)return 0;

    struct no *aux = f->ini;

    *elem = aux->info;
    if(f->ini==f->fim)f->fim=NULL;

    f->ini=aux->prox;
    free(aux);
    return 1;
}


int printa_deque(Deque f){

    struct no *aux=f->ini;
    printf("{ ");
    while(aux!=NULL){
        printf("%d ",aux->info);
        aux= aux->prox;
    }
    printf("}\n");

}
