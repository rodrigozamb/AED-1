#include "Ex1T2AED.h"
#include<stdio.h>
#include<stdlib.h>

int main(){

	Pilha p=cria_pilha();
	push(p,'v');
	push(p,'a');
	push(p,'v');
	push(p,'a');
	int elem;
    char str[50];
    scanf("%[^\n]s",str);
    printf("%s\n",str);
	pali(&str);
	printar(p);
	printa_base(p);


return 0;
}
