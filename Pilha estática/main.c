#include<stdio.h>
#include<stdlib.h>
#include"lista.h"
#include<string.h>

int main(){

Pilha *pi = cria_pilha();
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
		
			inserir(pi, c);
		
			break;
			
		case 2:
			
			remover(pi);
			
			break;
		
		case 3:
	
			print_pilha(pi);
			
		break;
		
		case 4:
		
			libera_pilha(pi);

			return 0;	
			
		break;
		
		}
		
	}

}
