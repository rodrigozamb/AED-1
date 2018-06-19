#ifndef LIST_DIN_ORD_H_INCLUDED
#define LIST_DIN_ORD_H_INCLUDED
#include "List_din_ord.h"


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


#endif // LIST_DIN_ORD_H_INCLUDED
