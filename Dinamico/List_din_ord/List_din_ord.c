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
    // Aloca um novo n�
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL)return 0;// Falha: n� n�o alocado
    N->info = elem; // Insere o conte�do (valor do elem)
    if (lista_vazia(*p) || elem <= (*p)->info) {
        N->prox = *p; // Aponta para o 1on� atual da lista
        *p = N; // Faz a lista apontar para o novo n�
        return 1;
    }
    // Percorrimento da lista (elem > 1on� da lista)
    Lista aux = *p; // Faz aux apontar para 1on�
    while (aux->prox != NULL && aux->prox->info < elem)aux = aux->prox; // Avan�a
    // Insere o novo elemento na lista
    N->prox = aux->prox;
    aux->prox = N;
    return 1;
}


int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(*lst) == 1 || elem < (*lst)->info)return 0; // Falha
        Lista aux = *lst; // Ponteiro auxiliar para o 1on�
    if (elem == (*lst)->info) { // Remove elemento 1on� da lista
        *lst = aux->prox; // Lista aponta para o 2on�
        free(aux); // Libera mem�ria alocada
        return 1;
    }
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox;
    if (aux->prox == NULL || aux->prox->info > elem)
    return 0; // Falha
    // Remove elemento (ap�s o 1on� da lista)
    Lista aux2 = aux->prox; // Aponta n� a ser removido
    aux->prox = aux2->prox; // Retira n� da lista
    free(aux2); // Libera mem�ria alocada
    return 1;
}
