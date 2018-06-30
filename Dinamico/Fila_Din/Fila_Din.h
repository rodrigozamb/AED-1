#ifndef FILA_DIN_H_INCLUDED
#define FILA_DIN_H_INCLUDED

typedef struct fila *Fila;
Fila cria_fila();
int fila_vazia(Fila f);
int insere_fim(Fila f, int elem);
int remove_ini(Fila f, int *elem);
int printa_fila(Fila f);


#endif // FILA_DIN_H_INCLUDED
