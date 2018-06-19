#ifndef EX2TAED_H_INCLUDED
#define EX2TAED_H_INCLUDED
#include"Ex2TAED.h"

typedef struct lista Lista;
Lista* cria_lista();
int lista_vazia(Lista *p);
int lista_cheia(Lista *p);
void imprime_lista(Lista *p);
void libera(Lista *a);
int remove_ord(Lista *p,int x);
int insere_ord(Lista *p,int x);
Lista* intercala(Lista *a,Lista *b);
int insere_elem(Lista *a,int x);
int remove_par(Lista *p);
int maior(Lista *p);
int tamanho(Lista *p);

#endif // EX2TAED_H_INCLUDED
