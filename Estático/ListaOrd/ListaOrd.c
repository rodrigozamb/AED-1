#include<stdio.h>
#include<stdlib.h>
#include"ListaOrd.h"
#define MAX 10


struct lista{
    int vet[MAX];
    int FIM;
};

Lista* cria_lista(){
    Lista *a;
    a=(Lista*)malloc(sizeof(Lista));
    if(a!=NULL)a->FIM=0;
    if(a->FIM==0)printf("Lista criada com sucesso.\n\n");
    return a;
}

int lista_vazia(Lista *p){
    if (p->FIM == 0)
    return 1; // Lista vazia
    else
    return 0; // Lista NÃO vazia
}


int lista_cheia(Lista *p){
    if (p->FIM == MAX)
    return 1; // Lista vazia
    else
    return 0; // Lista NÃO vazia
}

void libera(Lista *a){
    free(a);
}

void print_lista(Lista *p){
    int i=0;
    printf("\nLista = {");
    for(i=0;i<p->FIM;i++){
        printf("%d",p->vet[i]);
        if(i<p->FIM-1)printf(" ");
    }
    printf("}\n\n");
}

int insere_ord(Lista *p, int x) {
    if (p == NULL || lista_cheia(p) == 1)
        return 0; // Falha // Trata lista vazia ou elemento ≥ último da lista
    if (lista_vazia(p) == 1 || x >= p->vet[p->FIM-1]) {
        p->vet[p->FIM] = x; // Insere no final
    }else {
        int i, aux = 0;
        while (x >= p->vet[aux]) // Percorrimento
        aux++;
        for (i = p->FIM; i > aux; i--) // Deslocamento
        p->vet[i] = p->vet[i-1];
        p->vet[aux] = x; // Inclui o elemento na lista
    }
    p->FIM++; // Avança o Fim
    return 1; // Sucesso
}

int remove_ord(Lista *p,int x){
    if (p == NULL || lista_vazia(p) == 1 || x < p->vet[0] || x > p->vet[p->FIM-1])
        return 0; // Falha
    int i, Aux = 0;
    // Percorre até achar o elem ou nó maior, ou final de lista
    while (Aux < p->FIM && p->vet[Aux] < x)Aux++;
    if (Aux == p->FIM || p->vet[Aux] > x) // elem
        return 0; // Falha
        // Deslocamento à esq. do sucessor até o final da lista
    for (i = Aux+1; i < p->FIM; i++)p->vet[i-1] = p->vet[i];
    p->FIM--; // Decremento do campo Fim
    return 1; // Sucesso
}

int remove_todos(Lista *p,int x){
    if (p == NULL || lista_vazia(p) == 1)
    return 0; // Falha

    int i, Aux = 0;
    while(Aux<p->FIM){
    while(Aux < p->FIM && p->vet[Aux]!=x)Aux++;
    for (i = Aux+1; i < p->FIM; i++)p->vet[i-1] = p->vet[i];
    p->FIM--;
    }


    return 1; // Sucesso


}
