#ifndef LISTAORD_H_INCLUDED
#define LISTAORD_H_INCLUDED
#include"ListaOrd.h"

typedef struct lista Lista;
Lista* cria_lista();
int lista_vazia(Lista *p);
int lista_cheia(Lista *p);
void print_lista(Lista *p);
int remove_todos(Lista *p,int x);
void libera(Lista *a);
int remove_ord(Lista *p,int x);
int insere_ord(Lista *p,int x);


#endif // LISTAORD_H_INCLUDED
