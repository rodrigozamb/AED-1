#include"Din_DuplaEnc.h"
#include<stdio.h>
#include<stdlib.h>

struct no {
    int info;
    struct no * prox;
    struct no * ant;
};

Lista cria_lista() {
    return NULL;
}

int lista_vazia (Lista lst) {
    if (lst == NULL)
    return 1;
    else
    return 0;
}

int insere_elemento (Lista *lst, int elem) {
    // Aloca um novo nó e preenche campo info
    Lista N = (Lista) malloc(sizeof(struct no));
    if (N == NULL) { return 0; } // Falha: nó não alocado
    N->info = elem; // Insere o conteúdo (valor do elem)
    N->ant = NULL; // Não tem antecessor do novo nó
    N->prox = *lst; // Sucessor do novo nó recebe mesmo end. da lista
    if (lista_vazia(*lst) == 0) // Se lista NÃO vazia
    (*lst)->ant = N; // Faz o antecessor do 1onó ser o novo nó
    *lst = N; // Faz a lista apontar para o novo nó
return 1;
}


int remove_elemento (Lista *lst, int elem) {
    if (lista_vazia(*lst))return 0;
    Lista aux = *lst; // Faz aux apontar para 1onó
    while (aux->prox != NULL && aux->info != elem)
    aux = aux->prox;
    if (aux->info != elem) return 0; // Elemento não está na lista
    if (aux->prox != NULL) (aux)->prox->ant = aux->ant;
    if (aux->ant != NULL) (aux)->ant->prox = aux->prox;
    if (aux == *lst) *lst = aux->prox;
    free(aux);
return 1;
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


int maior(Lista *p){
    if(lista_vazia(*p)==1)return 0;
    int maior=(*p)->prox->info;
    Lista aux=*p;
    while(aux!=NULL){
        if(aux->info>maior)maior=aux->info;
        aux=aux->prox;
    }

return maior;
}

int remove_todos(Lista *p, int elem){
    if(lista_vazia(*p)==1)return 0;

    Lista aux=*p;
    while(aux!=NULL){
        while (aux->prox != NULL && aux->prox->info!=elem)aux = aux->prox;

        if (aux->prox == NULL)return 0; // Falha

        // Remove elemento ≠ 1o nó da lista
        Lista aux2 = aux->prox; // Aponta nó a ser removido
        aux->prox = aux2->prox; // Retira nó apontado p/ aux2 da lista
        free(aux2); // Libera memória alocada
    }



    return 0;
}

int remove_maior(Lista *p){
    if(lista_vazia(*p)==1)return 0;

    int ma=maior(&*p);
    remove_elemento(&*p,ma);
return 0;
}


Lista mult_3(Lista *p){
    Lista c=cria_lista();
    Lista aux=*p;

    while(aux!=NULL){
        if(aux->info%3==0){
            insere_elemento(&c,aux->info);
        }
        aux=aux->prox;
    }

return c;
}

int tamanho(Lista *p){
    Lista aux=*p;
    int tam=0;
    while(aux!=NULL){
        tam++;
        aux=aux->prox;
    }
    return tam;
}
