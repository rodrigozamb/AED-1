#ifndef EX1TAED_H_INCLUDED
#define EX1TAED_H_INCLUDED
#include"Ex1TAED.h"
typedef struct lista Lista;

Lista* cria_lista();
int lista_vazia(Lista *p);
int lista_cheia(Lista *p);
int insere_elem(Lista *p,int x);
int remove_elem(Lista *p,int x);
void print_lista(Lista *p);
int insere1(Lista *p,int x);
int remove_imp(Lista *p);
int menor(Lista *p);
Lista* concat(Lista *a,Lista *b,Lista *c);

#endif // EX1TAED_H_INCLUDED
