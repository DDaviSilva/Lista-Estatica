#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

Lista* cria_lista(){
	Lista *li = (Lista *)malloc(sizeof(Lista));
	if(li != NULL)
		li->qtd = 0;
	return li;
}

int insere_pos(Lista *li, Cliente c, int pos){

	if(li == NULL)
		return 0;
	if(li->qtd == MAX)
		return 0;
	if(pos < 1)
		return 0;
	if((pos-li->qtd) > 1)
		return 0;
		
	if(li->qtd == 0){
		li->cliente[0] = c;
		li->qtd++;
		return 1;
	}
	
	if((pos-li->qtd) == 1){
		li->cliente[pos-1] = c;
		li->qtd++;
		return 1;
	}
	
	int i;
	for(i = li->qtd; (i >= pos); i--)
		li->cliente[i] = li->cliente[i-1];
		
	li->cliente[i] = c;
	li->qtd++;
	return 1;

}

int remove_pos(Lista *li, int pos){

	if(li == NULL)
		return 0;
	if(li->qtd == 0)
		return 0;
	if(pos < 1)
		return 0;
	if((pos-li->qtd) > 0)
		return 0;
	
	if(pos == li->qtd){
		li->qtd--;
	}else{
	
	int i;
	for(i = pos; i < li->qtd; i++)
		li->cliente[i-1] = li->cliente[i];
		
	li->qtd--;
	}
	
	return 1;

}
int busca_indice(Lista *li, Cliente c){

	if(li == NULL)
		return 0;
	if(li->qtd == 0)
		return 0;
		
	int i;
	for(i = 0; (i < li->qtd) && (li->cliente[i].cpf != c.cpf); i++){};
	
	return i+1;

}

void libera_lista(Lista *li){
	free(li);
}

int print_lista(Lista *li){

	if(li == NULL)
		return 0;
	if(li->qtd == 0)
		return 0;
		
	int i = 0;
	Cliente c;
	while(i < li->qtd){
		c = li->cliente[i];
		printf("*******************************\n");
		printf("Nome: %s.\n",c.nome);
		printf("CPF: %d.\n",c.cpf);
		printf("*******************************\n\n");
		i++;
	}
	
	return 1;

}
