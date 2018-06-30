#include<stdio.h>
#include<stdlib.h>
#include"Ex1T2AED.h"
#define MAX 10

struct pilha{
	char info[MAX];
	int topo;
};

Pilha cria_pilha(){
	Pilha p = (Pilha) malloc(sizeof(struct pilha));
	if(p != NULL){
		p->topo = -1;
	}
	return p;
}

int pilha_vazia(Pilha p){
	if(p==NULL|| p->topo == -1) return 1;
	return 0;
}

int pilha_cheia(Pilha p){
	if(p->topo == MAX-1) return 1;
	return 0;
}

int push(Pilha p, int elem){
	if(p==NULL || pilha_cheia(p)) return 0;
	p->topo++;
	p->info[p->topo] = elem;
	return 1;
}

int pop(Pilha p, int *elem){
	if(pilha_vazia(p) || p==NULL) return 0;
	*elem = p->info[p->topo];
	p->topo--;
	return 1;
}

int printar(Pilha p){
	int i;
	if(pilha_vazia(p) || p==NULL) return 0;
	for (i = p->topo; i >= 0; i--)
	{
		printf("%c\n", p->info[i]);
	}
	return 1;
}



int converte(int elem){
    Pilha p;
    p=cria_pilha();
    int R;
    do{
        R=elem%2;
        elem=elem/2;
        push(p,R);

    }while(elem!=0 || pilha_cheia(p)==1);

    if(pilha_cheia(p)==1){
        printf("Estouro de pilha\n");
    }else{
        while(pilha_vazia(p)==0){
            int x;
            pop(p,&x);
            printf("%d",x);
        }

    }
return 0;
}

int printa_base(Pilha p){

    int i;
	if(pilha_vazia(p) || p==NULL) return 0;
	for (i = p->topo; i >= 0; i--)
	{
		printf("%c\n", p->info[p->topo-i]);
	}
	return 1;
}

int pali(char *p){
    if(p==NULL)return 0;
    int i;
    Pilha pi;
    for(i=0;p[i]!='\0';i++){
        push(pi,p[i]);
    }
    for(i=0;p[i]!='\0';i++){
        if(p[i] != pi->info[pi->topo-i]){
            printf("A frase nao eh um palindromo\n");
            return 0;
        }
    }

    printf("A frase eh um palindromo\n");

return 1;
}
