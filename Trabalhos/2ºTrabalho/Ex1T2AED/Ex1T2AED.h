#ifndef EX1T2AED_H_INCLUDED
#define EX1T2AED_H_INCLUDED
#define MAX 10


typedef struct pilha * Pilha;

Pilha cria_pilha();
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int push(Pilha p, int elem);
int pop(Pilha p, int *elem);
int printar(Pilha p);
int converte(int num);
int printa_base(Pilha p);
int pali(char *p);


#endif // EX1T2AED_H_INCLUDED
