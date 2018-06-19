#ifndef EX4TAED_H_INCLUDED
#define EX4TAED_H_INCLUDED
#include"Ex4TAED.h"

struct no{
    int info;
    struct no *prox;
};

typedef struct no *Lista;


    Lista cria_lista();
    int lista_vazia(Lista p);
    int printa_lista(Lista p);
    int insere_ord (Lista *p, int elem);
    int remove_ord (Lista *lst, int elem);
    int remove_imp(Lista *p);
    Lista concat(Lista *a,Lista *b);
    int menor(Lista *p);




#endif // EX4TAED_H_INCLUDED
