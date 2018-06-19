#include"ListaDinamicEncadeadaSimples.h"
#include<stdio.h>
#include<stdlib.h>


Lista cria_lista(){
    return NULL;
}

int lista_vazia(Lista p){
    if(p==NULL)return 1;
    else return 0;
}

int insere_elem(Lista *p, int elem){
    // Aloca um novo nó
    Lista N = (Lista)malloc(sizeof(struct no));
    if (N == NULL)return 0; // Falha: nó não alocado
    // Preenche os campos do novo nó
    N->info = elem; // Insere o conteúdo (valor do elem)
    N->prox = *p; // Aponta para o 1o nó atual da lista
    *p = N; // Faz a lista apontar para o novo nó
    return 1;
}

int remove_elem(Lista *p, int elem){
    if (lista_vazia(*p) == 1)return 0; // Falha
        Lista aux = *p; // Ponteiro auxiliar para o 1o nó
    // Trata elemento = 1o nó da lista
    if (elem == (*p)->info){
        *p = aux->prox; // Lista aponta para o 2o nó
        free(aux); // Libera memória alocada
        return 1;
    }
    // Percorrimento até achar o elem ou final de lista
    while (aux->prox != NULL && aux->prox->info != elem)aux = aux->prox;

    if (aux->prox == NULL)return 0; // Falha

    // Remove elemento ≠ 1o nó da lista
    Lista aux2 = aux->prox; // Aponta nó a ser removido
    aux->prox = aux2->prox; // Retira nó apontado p/ aux2 da lista
    free(aux2); // Libera memória alocada
    return 1;
}

int tamanho(Lista p){
    int tam;
    Lista aux=p;
    for(tam=0;aux!=NULL;tam++)aux=aux->prox;
return tam;
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

