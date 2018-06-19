#ifndef LISTACHARS_H_INCLUDED
#define LISTACHARS_H_INCLUDED
#include"ListaChars.h"

typedef struct lista Lista;
typedef char* palavra;

Lista* cria_lista();
int lista_vazia(Lista *p);
int lista_cheia(Lista *p);
void print_lista(Lista *p);
void libera(Lista **a);
int remove_ord(Lista *p,palavra x);
int insere_ord(Lista *,palavra x);


#endif // LISTACHARS_H_INCLUDED
