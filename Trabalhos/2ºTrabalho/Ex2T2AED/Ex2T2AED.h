#ifndef EX2T2AED_H_INCLUDED
#define EX2T2AED_H_INCLUDED

typedef struct no *Pilha;

Pilha cria_pilha();
int push(Pilha *p,int elem);
int pop(Pilha *p,int *elem);
int le_topo(Pilha *p,int *elem);
int pilha_vazia(Pilha p);
int print_pilha(Pilha p);
int valida_escopo(char exp[]);
int par_impar(Pilha a, Pilha *par, Pilha *impar);

#endif // EX2T2AED_H_INCLUDED
