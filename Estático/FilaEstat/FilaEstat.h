#ifndef FILAESTAT_H_INCLUDED
#define FILAESTAT_H_INCLUDED

typedef struct fila *Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_fim(Fila f, int elem);
int remove_ini(Fila f,int *elem);



#endif // FILAESTAT_H_INCLUDED
