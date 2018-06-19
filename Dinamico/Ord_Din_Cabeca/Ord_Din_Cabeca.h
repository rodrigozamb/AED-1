#ifndef ORD_DIN_CABECA_H_INCLUDED
#define ORD_DIN_CABECA_H_INCLUDED
#include"Ord_Din_Cabeca.h"

typedef struct no * Lista;
int remove_ord (Lista *lst, int elem);
Lista cria_lista();
int lista_vazia(Lista lst);
int insere_ord (Lista *lst, int elem);


#endif // ORD_DIN_CABECA_H_INCLUDED
