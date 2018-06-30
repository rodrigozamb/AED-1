#ifndef FILA_ESTA_CONT_H_INCLUDED
#define FILA_ESTA_CONT_H_INCLUDED
#include "Fila_esta_cont.h"


typedef struct fila *Fila;
Fila cria_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_fim(Fila f,int elem);
int remove_fila(Fila f,int *elem);
int print_fila(Fila f);
int tamanho(Fila f);



#endif // endif // FILA_ESTA_CONT_H_INCLUDED

