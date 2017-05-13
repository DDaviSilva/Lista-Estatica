#include<stdio.h>
#include<stdlib.h>
#include"lista.h"

Pilha* cria_pilha(){
	Pilha *pi = (Pilha *)malloc(sizeof(Pilha));
	if(pi != NULL)
		pi->qtd = 0;
	return pi;
}

int inserir(Pilha *pi, Cliente c){

	if(pi == NULL)
		return 0;
	if(pi->qtd == MAX)
		return 0;
		
	pi->cliente[pi->qtd] = c;
	pi->qtd++;
	return 1;

}

int remover(Pilha *pi){

	if(pi == NULL)
		return 0;
	if(pi->qtd == 0)
		return 0;
		
	pi->qtd--;	
	
	return 1;

}

void libera_pilha(Pilha *pi){
	free(pi);
}

int print_pilha(Pilha *pi){

	if(pi == NULL)
		return 0;
	if(pi->qtd == 0)
		return 0;
		
	int i = 0;
	Cliente c;
	while(i < pi->qtd){
		c = pi->cliente[i];
		printf("*******************************\n");
		printf("Nome: %s.\n",c.nome);
		printf("CPF: %d.\n",c.cpf);
		printf("*******************************\n\n");
		i++;
	}
	
	return 1;

}
