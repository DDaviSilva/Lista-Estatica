#include<stdio.h>
#include<stdlib.h>
#include"fila.h"
#include<string.h>

int main(){

Fila *fi = cria_fila();
char nome[30];
int cpf;
Cliente c;
int n;

	for(;;){
	
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Print\n");
	printf("4 - Sair\n");
	printf("\nOpção: ");
	scanf("%d",&n);
	printf("\n");
	
		switch(n){
	
		case 1:
	
			printf("Digite um nome: ");
			scanf("%s",&nome);
			printf("Digite um cpf: ");
			scanf("%d",&cpf);
			printf("\n");
		
			strcpy(c.nome,nome);
			c.cpf = cpf;
		
			inserir(fi, c);
		
			break;
			
		case 2:
			
			remover(fi);
			
			break;
		
		case 3:
	
			print_fila(fi);
			
		break;
		
		case 4:
		
			libera_fila(fi);

			return 0;	
			
		break;
		
		}
		
	}

}
