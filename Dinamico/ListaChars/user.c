#include<stdio.h>
#include<stdlib.h>
#include "ListaChars.h"
#define MAX 10
int main(){
      Lista *x;
      char v,q[MAX];


      x=cria_lista();
      print_lista(x);

       do{

        printf("\nDeseja adicionar uma palavra na sua lista?\nY-Yes\nN-No\n\n");
        scanf("%c",&v);
        setbuf(stdin,NULL);
        if(v=='Y'){
        printf("\nDigite o elemento:\n");
        scanf("%s[^\n]",q);
        setbuf(stdin,NULL);
        if(insere_ord(x,q)==0)printf("\n------------------------------------------------------\nErro,Impossivel inserir elemento a lista.\n------------------------------------------------------\n");
        }else break;
    }while(1);


    print_lista(x);

    char r,f[MAX];

    do{
    setbuf(stdin,NULL);
    printf("Deseja apagar alguma letra?\nY-Yes\nN-No\n");
    scanf("%c",&r);
    setbuf(stdin,NULL);
    if(r=='Y'){
        printf("Qual elemento? ");
        scanf("%[^\n]s",&f);
        setbuf(stdin,NULL);
        remove_ord(x,f);
    }
    print_lista(x);
    }while(r=='Y');






}

