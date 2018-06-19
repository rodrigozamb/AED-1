#ifndef EX6TAED_H_INCLUDED
#define EX6TAED_H_INCLUDED
#include"Ex6TAED.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct no * Lista;

Lista cria_lista();
int imprime_lista(Lista *a);
int remove_inicio(Lista *p, int *elem);
int insere_final(Lista *p, int elem);
int lista_vazia(Lista p);
int tamanho(Lista *a);
int remove_n(Lista *lst, int elem);
int maior(Lista *a);



#endif // EX6TAED_H_INCLUDED
