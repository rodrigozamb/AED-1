#include"Ex1TAED.h"
#include<stdio.h>
#include<stdlib.h>
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

int insere_elem(Lista *p, int x){
    if (p == NULL || lista_cheia(p) == 1)return 0;
    p->vet[p->FIM] = x; // Insere elemento
    p->FIM++; // Avança o Fim
    return 1;
}

int remove_elem(Lista *p,int x){
    if (p == NULL || lista_vazia(p) == 1)
    return 0; // Falha

    int i, Aux = 0;

    while(Aux < p->FIM && p->vet[Aux]!=x)Aux++;
    if(Aux==p->FIM){
        printf("\n------------------------------------------------------\nElemento nao esta na lista\n------------------------------------------------------\n");
        return 0;
    }
    for (i = Aux+1; i < p->FIM; i++)
    p->vet[i-1] = p->vet[i];
    p->FIM--; // Decremento do campo Fim
    return 1; // Sucesso
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

int insere1(Lista *p,int x){
    int i;
    if (p == NULL || lista_cheia(p) == 1)return 0;
    for(i=p->FIM;i>0;i--){
        p->vet[i]=p->vet[i-1];
    }
    p->vet[0]=x;
    p->FIM++;
    return 1;
}

int remove_imp(Lista *p){
    if (p == NULL || lista_vazia(p) == 1)
    return 0; // Falha

    int i, Aux = 0;
    while(Aux<p->FIM){
        while(Aux < p->FIM && p->vet[Aux]%2==0)Aux++;
        for (i = Aux+1; i < p->FIM; i++)p->vet[i-1] = p->vet[i];
        p->FIM--;
    }

    if(p->vet[p->FIM]%2==0)p->FIM++;
    return 1; // Sucesso


}

int menor(Lista *p){
    if(p->FIM==0)return 1000;
    int i,menor = p->vet[0];
    for(i=1;i<p->FIM;i++){
        if(p->vet[i]<menor)menor=p->vet[i];
    }
    return menor;
}


Lista* concat(Lista *a,Lista *b,Lista *c){
    int i=0,x=0;
    if((a->FIM+b->FIM)>10)return NULL;
    c->FIM=a->FIM+b->FIM;
    for(i=0;i<a->FIM;i++){
        c->vet[i]=a->vet[i];
    }
    for(x=0;x<b->FIM;x++){
        c->vet[i+x]=b->vet[x];
    }
return c;
}
