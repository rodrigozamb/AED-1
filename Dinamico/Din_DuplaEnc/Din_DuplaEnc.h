#ifndef DIN_DUPLAENC_H_INCLUDED
#define DIN_DUPLAENC_H_INCLUDED
#include"Din_DuplaEnc.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct no * Lista;
int printa_lista(Lista p);
int remove_elemento (Lista *lst, int elem);
int insere_elemento (Lista *lst, int elem);
int lista_vazia (Lista lst);
Lista cria_lista();
int maior(Lista *p);
int remove_maior(Lista *p);
int remove_todos(Lista *lst, int elem);
Lista mult_3(Lista *p);
int tamanho(Lista *p);


#endif // DIN_DUPLAENC_H_INCLUDED
