#ifndef LISTANAOORD_H_INCLUDED
#define LISTANAOORD_H_INCLUDED
#include"ListanaoOrd.h"
typedef struct lista Lista;

Lista* cria_lista();
int lista_vazia(Lista *p);
int lista_cheia(Lista *p);
int insere_elem(Lista *p,int x);
int remove_elem(Lista *p,int x);
void print_lista(Lista *p);
int remove_todos(Lista *p,int x);
void libera(Lista *a);
int remove_ord(Lista *p,int x);
int insere_ord(Lista *p,int x);
int tamanho(Lista *p);

#endif // LISTANAOORD_H_INCLUDED

