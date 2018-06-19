#include"Ord_Din_Cabeca.h"
#include<stdio.h>
#include<stdlib.h>


struct no {
    int info;
    struct no * prox;
};

int lista_vazia(Lista lst) {
    if (lst->prox == NULL)
    return 1; // Lista vazia
    else
    return 0; // Lista NÃO vazia
}

Lista cria_lista() {
    // Aloca nó cabeçalho
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));
    // Coloca lista no estado de vazia
    if (cab != NULL) { // Só se alocação NÃO falhar
    cab->prox = NULL;
    cab->info = 0; } // Opcional: guardar qtde
    return cab;
}
int insere_ord (Lista *lst, int elem) {
    Lista N = (Lista) malloc(sizeof(struct no)); // Aloca novo nó
    if (N == NULL) { return 0; } // Falha: nó não alocado
    N->info = elem; // Insere o conteúdo (valor do elem)
    // Percorrimento da lista
    Lista aux = *lst; // Faz aux apontar para nó cabeçalho
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox; // Avança
    N->prox = aux->prox; // Insere o novo nó na lista
    aux->prox = N;
    lst->info++; // Opcional: Incrementa qtde de nós na lista
return 1; }

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(lst) == 1)
    return 0; // Falha
    Lista aux = *lst; // Ponteiro auxiliar
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox; //Percorrimento até final lista, achar elem ou nó maior
    if (aux->prox == NULL || aux->prox->info > elem)
    return 0; // Falha
    Lista aux2 = aux->prox; // Aponta nó a ser removido
    aux->prox = aux2->prox; // Retira nó da lista
    free(aux2); // Libera memória alocada
    (*lst)->info--; // Opcional: Decrementa qtde de nós na lista
return 1;
}

NAO NAO NAO
