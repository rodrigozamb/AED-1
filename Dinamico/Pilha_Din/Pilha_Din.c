#include"Pilha_Din.h"
#include<stdio.h>
#include<stdlib.h>

struct no{
    int info;
    char infoc;
    struct no *prox;
};

Pilha cria_pilha(){
    return NULL;
}

int pilha_vazia(Pilha a){
    if(a==NULL)return 0;
    else return 1;
}

int push(Pilha *p, int elem){
    Pilha N = (Pilha)malloc(sizeof(struct no));
    if(N==NULL)return 0;
    N->info=elem;
    N->prox=*p;
    *p= N;
}
int push_char(Pilha *p, char elem){
    Pilha N = (Pilha)malloc(sizeof(struct no));
    if(N==NULL)return 0;
    N->infoc=elem;
    N->prox=*p;
    *p= N;
}

int pop(Pilha *p,int *elem){
    if(pilha_vazia(*p)==0)return 1;
    Pilha aux= *p;
    *p=aux->prox;
    *elem=aux->info;
    free(aux);
return 0;
}

int pop_char(Pilha *p,char *elem){
    if(pilha_vazia(*p)==0)return 1;
    Pilha aux= *p;
    *p=aux->prox;
    *elem=aux->infoc;
    free(aux);
return 0;
}

int le_topo(Pilha *p,int *elem){
    if(pilha_vazia(*p)==0)return 1;
    *elem=(*p)->info;
return 0;
}


int print_pilha(Pilha p){
    Pilha aux = p;
    while(aux!=NULL){
        printf("%d\n",aux->info);
        aux=aux->prox;
    }
return 0;
}

int print_pilha_char(Pilha p){
    Pilha aux = p;
    while(aux!=NULL){
        printf("%c\n",aux->infoc);
        aux=aux->prox;
    }
return 0;
}


int respectivo(char A, char F){
    if((A=='('&& F==')')||(A=='['&& F==']')||(A=='{'&& F=='}'))return 1;
    else return 0;
}


int valida_escopo(char exp[]){
    Pilha p=cria_pilha();
    int i=0;
    for(i=0;exp[i]!='\0';i++){

        if(exp[i]=='('||exp[i]=='{'||exp[i]=='['){
            push_char(&p,exp[i]);
        }
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
               char c;
               if(pop_char(&p,&c)==1){
                    return 0;
               }else{
                    if(respectivo(c,exp[i])==0){
                        return 0;
                    }
               }
        }
    }

    if(pilha_vazia(p)==0)return 1;
    else return 0;
}
