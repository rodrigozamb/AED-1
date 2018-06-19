#ifndef LISTADINAMICENCADEADASIMPLES_H_INCLUDED
#define LISTADINAMICENCADEADASIMPLES_H_INCLUDED
#include"ListaDinamicEncadeadaSimples.h"
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
int tamanho(Lista p);
#endif // LISTADINAMICENCADEADASIMPLES_H_INCLUDED
