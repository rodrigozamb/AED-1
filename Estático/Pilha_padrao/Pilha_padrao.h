#ifndef PILHA_PADRAO_H_INCLUDED
#define PILHA_PADRAO_H_INCLUDED
#define MAX 10


typedef struct pilha * Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int push(Pilha p, int elem);
int pop(Pilha p, int *elem);
int printar(Pilha p);
int converte(int num);


#endif // PILHA_PADRAO_H_INCLUDED
