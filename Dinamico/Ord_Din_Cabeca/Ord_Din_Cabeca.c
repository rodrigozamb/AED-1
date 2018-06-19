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
    return 0; // Lista N�O vazia
}

Lista cria_lista() {
    // Aloca n� cabe�alho
    Lista cab;
    cab = (Lista) malloc(sizeof(struct no));
    // Coloca lista no estado de vazia
    if (cab != NULL) { // S� se aloca��o N�O falhar
    cab->prox = NULL;
    cab->info = 0; } // Opcional: guardar qtde
    return cab;
}
int insere_ord (Lista *lst, int elem) {
    Lista N = (Lista) malloc(sizeof(struct no)); // Aloca novo n�
    if (N == NULL) { return 0; } // Falha: n� n�o alocado
    N->info = elem; // Insere o conte�do (valor do elem)
    // Percorrimento da lista
    Lista aux = *lst; // Faz aux apontar para n� cabe�alho
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox; // Avan�a
    N->prox = aux->prox; // Insere o novo n� na lista
    aux->prox = N;
    lst->info++; // Opcional: Incrementa qtde de n�s na lista
return 1; }

int remove_ord (Lista *lst, int elem) {
    if (lista_vazia(lst) == 1)
    return 0; // Falha
    Lista aux = *lst; // Ponteiro auxiliar
    while (aux->prox != NULL && aux->prox->info < elem)
    aux = aux->prox; //Percorrimento at� final lista, achar elem ou n� maior
    if (aux->prox == NULL || aux->prox->info > elem)
    return 0; // Falha
    Lista aux2 = aux->prox; // Aponta n� a ser removido
    aux->prox = aux2->prox; // Retira n� da lista
    free(aux2); // Libera mem�ria alocada
    (*lst)->info--; // Opcional: Decrementa qtde de n�s na lista
return 1;
}

NAO NAO NAO
