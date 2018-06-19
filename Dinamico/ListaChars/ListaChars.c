#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#include"ListaChars.h"

struct lista{
    palavra* vet;
    int FIM;
};


Lista* cria_lista(){
    Lista *a;
    int i;
    a=(Lista*)malloc(sizeof(Lista));
    a->vet = (palavra*)malloc(MAX*sizeof(char*));
    for(i = 0; i < MAX; i++) {
		a->vet[i] = (char*) malloc(MAX*sizeof(char));
	}
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
    if (p->FIM == MAX)return 1; // Lista vazia
    else return 0; // Lista NÃO vazia
}


int insere_ord(Lista *p, palavra x) {
    if (p == NULL || lista_cheia(p) == 1)return 0; // Falha // Trata lista vazia ou elemento ≥ último da lista
    int i;
    i = p->FIM;
	strcpy(p->vet[p->FIM++],x);
    if(p->FIM>i) return 1;
    else return 0; // Sucesso
    }


void print_lista(Lista *p){
    int i=0;
    printf("\nLista = {");
    for(i=0;i<p->FIM;i++){
        printf("%s",p->vet[i]);
        if(i<p->FIM-1)printf(" ");
    }
    printf("}\n\n");
}


int remove_ord(Lista *p,palavra x){
    if(p==NULL||lista_vazia(p)==1) return 0;
	int i,j;
	for(i=0;i<p->FIM;i++){
		if(strcmp(p->vet[i],x)==0){
			if(p==p->FIM){
				p->FIM--;
				return 1;
			}
			else{
				for(j=i;j<p->FIM;j++){
					strcpy(p->vet[j],p->vet[j+1]);
				}
				p->FIM--;
				return 1;
			}
		}
	}
	return 0;
}
