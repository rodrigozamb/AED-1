#include<stdio.h>
#include<stdlib.h>
#include"Ex2TAED.h"
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

void imprime_lista(Lista *p){
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

Lista* intercala(Lista *a,Lista*b){
    if((a->FIM+b->FIM)>10)return NULL;
    Lista *c;
    int x=0,y=0;
    c=cria_lista();


    while(x<a->FIM || y<b->FIM){

        if(x==a->FIM && y==b->FIM)break;
        if(x<a->FIM){
            insere_elem(c,a->vet[x++]);

        }
        if(y<b->FIM){
            insere_elem(c,b->vet[y++]);
        }
        if(x==a->FIM && y!=b->FIM)insere_elem(c,b->vet[y++]);
        if(y==b->FIM && x!=a->FIM)insere_elem(c,a->vet[x++]);

    }

    return c;
}




int insere_elem(Lista *p, int x){
    if (p == NULL || lista_cheia(p) == 1)return 0;
    p->vet[p->FIM] = x; // Insere elemento
    p->FIM++; // Avança o Fim
    return 1;
}



int remove_par(Lista *p){
    if (p == NULL || lista_vazia(p) == 1)
    return 0; // Falha

    int i, Aux = 0;
    while(Aux<p->FIM){
        while(Aux < p->FIM && p->vet[Aux]%2!=0)Aux++;
        for (i = Aux+1; i < p->FIM; i++)p->vet[i-1] = p->vet[i];
        p->FIM--;
    }

    if(p->vet[p->FIM]%2!=0)p->FIM++;
    return 1; // Sucesso


}


int maior(Lista *p){
    if(p->FIM==0)return 1000;
    int i,maior = p->vet[0];
    for(i=1;i<p->FIM;i++){
        if(p->vet[i]>maior)maior=p->vet[i];
    }
    return maior;
}

int tamanho(Lista *p){
    return p->FIM;
}


int compara(Lista *a,Lista *b){
    if(a->FIM!=b->FIM)return 1;
    int i,flag=0;
    for(i=0;i<a->FIM;i++){
        if(a->vet[i]!=b->vet[i])flag++;
    }
    if(flag==0)return 0;
    else return 1;



}
