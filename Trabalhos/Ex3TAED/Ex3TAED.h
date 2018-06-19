#ifndef EX3TAED_H_INCLUDED
#define EX3TAED_H_INCLUDED
#include "Ex3TAED.h"
#include<stdio.h>

struct no{
    int info;
    struct no *prox;
};


typedef struct no *Lista;

Lista cria_lista();
int lista_vazia(Lista p);
int insere_elem(Lista *p,int elem);
int remove_elem(Lista *p,int elem);
int printa_lista(Lista p);
int tamanho(Lista *p);
Lista concat(Lista *a,Lista *b);


#endif // EX3TAED_H_INCLUDED
