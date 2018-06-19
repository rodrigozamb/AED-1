#include "List_din_ord.h"
#include<stdio.h>
#include<stdlib.h>



Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista p){
    if(p==NULL)return 1;
    else return 0;
}

int printa_lista(Lista p){
    Lista aux=p;
    printf("Lista = {");
    while(aux != NULL){
        printf("%d",aux->info);
        if(aux->prox != NULL)printf(" ");
        aux=aux->prox;

    }
    printf("}\n");

}

int insere_ord (Lista *p, int elem) {
    // Aloca um novo nó
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)return 0;// Falha: nó não alocado
    N->info = elem; // Insere o conteúdo (valor do elem)
    if (lista_vazia(*p) || elem <= (*p)->info) {
        N->prox = *p; // Aponta para o 1onó atual da lista
        *p = N; // Faz a lista apontar para o novo nó
        return 1;
    }
    // Percorrimento da lista (elem > 1onó da lista)
    Lista aux = *p; // Faz aux apontar para 1onó
    while (aux->prox != NULL && aux->prox->info < elem)aux = aux->prox; // Avança
    // Insere o novo elemento na lista
    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}


int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1 || elem < (*lst)->info)return 0; // Falha
        Lista aux = *lst; // Ponteiro auxiliar para o 1onó
    if (elem == (*lst)->info) { // Remove elemento 1onó da lista
        *lst = aux->prox; // Lista aponta para o 2onó
        free(aux); // Libera memória alocada
        return 1;
    }
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem)
    return 0; // Falha
    // Remove elemento (após o 1onó da lista)
    Lista aux2 = aux->prox; // Aponta nó a ser removido
    aux->prox = aux2->prox; // Retira nó da lista
    free(aux2); // Libera memória alocada
    return 1;
}
