#ifndef EX10T2AED_H_INCLUDED
#define EX10T2AED_H_INCLUDED

typedef struct deque *Deque;
Deque cria_deque();
int deque_vazia(Deque f);
int insere_fim(Deque f, int elem);
int remove_ini(Deque f, int *elem);
int printa_deque(Deque f);


#endif // EX10T2AED_H_INCLUDED
