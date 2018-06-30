#ifndef EX9T2AED_H_INCLUDED
#define EX9T2AED_H_INCLUDED

typedef struct fila *Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int insere_fim(Fila f, int elem);
int remove_ini(Fila f, int *elem);
int printa_fila(Fila f);
int insere_ord(Fila f, int elem);

#endif // EX9T2AED_H_INCLUDED
