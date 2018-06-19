#include<stdio.h>
#include<stdlib.h>
#include "Ex6TAED.h"

struct no {
    int info;
    struct no *prox;
};

Lista cria_lista() {
return NULL;
}

int lista_vazia(Lista p){
    if (p == NULL)
    return 1;
    else
    return 0;
}

int insere_final (Lista *p, int elem) {
// Aloca um novo nó e preenche campo info
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)return 0; // Falha: nó não alocado
    N->info = elem; // Insere o conteúdo (valor do elem)
    // Trata lista vazia
    if (lista_vazia(*p) == 1) {
        N->prox = N; // Faz o novo nó apontar para ele mesmo
        *p = N; // Faz a lista apontar para o novo nó (último nó)
    }
        // Trata lista com elementos (1 ou +)
    else {
    N->prox = (*p)->prox; // Faz o novo nó apontar o 1onó
    (*p)->prox = N; // Faz o último nó apontar para o novo nó
    *p = N; // Faz a lista apontar para o novo nó (último nó)
    }
return 1;
}

int insere_n(Lista *p, int elem,int num) {
// Aloca um novo nó e preenche campo info
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)return 0; // Falha: nó não alocado
    int i,tam=tamanho(&*p);
    if(num>tam)return 0;
    Lista aux = *p;
    N->info = elem;

    for(i=1;i<num;i++){
        aux=aux->prox;
    }
    N->prox = aux->prox;
    aux->prox = N;


return 1;
}




int imprime_lista(Lista *a){
    if(lista_vazia(*a) == 1) {
        printf ("L = {}\n");
        return 1;
    }

    if((*a)->prox == *a){
        printf("L = {%d}\n",(*a)->info);
        return 1;
    }

    printf("Lista = {%d",(*a)->prox->info);
    Lista aux = (*a)->prox->prox;
    while(aux != (*a)->prox){
        printf(", %d",aux->info);
        aux=aux->prox;
    }
    printf("}\n");
}



int tamanho(Lista *a){
    int soma=0;

    if(lista_vazia(*a) == 1)return 0;
    if((*a)->prox == *a)return (*a)->info;
    soma++;
    Lista aux = (*a)->prox;
    while(aux != *a){
        soma++;
        aux=aux->prox;
    }
return soma;
}


int remove_n(Lista *lst, int elem) {
    // Trata lista vazia

    int i,tam=tamanho(&*lst);
    if (lista_vazia(*lst) == 1)return 0;
    if(elem>tam)return 0;

    Lista aux = *lst; // Faz aux apontar para 1o

    for(i=0;i<elem-1;i++){
        aux=aux->prox;

    }

    Lista aux2=aux->prox;
    aux->prox=aux2->prox;
    free(aux2);
    return 1;
}

int remove_inicio (Lista *lst, int *elem) {
    // Trata lista vazia
    *elem=0;
    if (lista_vazia(*lst) == 1)
    return 0;
    Lista aux = (*lst)->prox; // Faz aux apontar para 1o
    *elem = aux->info; // Retorna valor do nó a ser removido
    if (*lst == (*lst)->prox) // Trata lista com 1 único nó
    *lst = NULL;
    else // Trata lista com + de 1 elemento
    (*lst)->prox = aux->prox;
    free(aux);
    return 1;
}


int maior(Lista *a){
    if(lista_vazia(*a)==1)return -99999;
    if((*a)->prox==*a)return (*a)->info;
    int maior;
    Lista aux=*a;
    maior=aux->info;
    aux=aux->prox;
    while(aux != *a){
        if(aux->info>maior)maior=aux->info;
        aux=aux->prox;
    }

return maior;
}
