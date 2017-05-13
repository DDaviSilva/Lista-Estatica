#include<stdio.h>
#include<stdlib.h>
#include"fila.h"

Fila* cria_fila(){
	Fila *fi = (Fila *)malloc(sizeof(Fila));
	if(fi != NULL)
		fi->qtd = 0;
	return fi;
}

int inserir(Fila *fi, Cliente c){

	if(fi == NULL)
		return 0;
	if(fi->qtd == MAX)
		return 0;
		
	fi->cliente[fi->qtd] = c;
	fi->qtd++;
	return 1;

}

int remover(Fila *fi){

	if(fi == NULL)
		return 0;
	if(fi->qtd == 0)
		return 0;
	
	int i;
	for(i = 0; i < fi->qtd; i++)
		fi->cliente[i] = fi->cliente[i+1];
		
	fi->qtd--;
	
	return 1;

}

void libera_fila(Fila *fi){
	free(fi);
}

int print_fila(Fila *fi){

	if(fi == NULL)
		return 0;
	if(fi->qtd == 0)
		return 0;
		
	int i = 0;
	Cliente c;
	while(i < fi->qtd){
		c = fi->cliente[i];
		printf("*******************************\n");
		printf("Nome: %s.\n",c.nome);
		printf("CPF: %d.\n",c.cpf);
		printf("*******************************\n\n");
		i++;
	}
	
	return 1;

}
