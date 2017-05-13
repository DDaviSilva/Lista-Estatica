#include<stdio.h>
#include<stdlib.h>
#include"lista.h"
#include<string.h>

int main(){

Lista *li = cria_lista();
char nome[30];
int cpf;
Cliente c;
int pos;
int n;

	for(;;){
	
	printf("1 - Inserir\n");
	printf("2 - Remover\n");
	printf("3 - Print\n");
	printf("4 - Busca Posição\n");
	printf("5 - Sair\n");
	printf("\nOpção: ");
	scanf("%d",&n);
	printf("\n");
	
		switch(n){
	
		case 1:
	
			printf("Digite um nome: ");
			scanf("%s",&nome);
			printf("Digite um cpf: ");
			scanf("%d",&cpf);
			printf("Digite uma posição: ");
			scanf("%d",&pos);
			printf("\n");
		
			strcpy(c.nome,nome);
			c.cpf = cpf;
		
			insere_pos(li, c, pos);
		
			break;
			
		case 2:
		
			printf("Digite uma posição: ");
			scanf("%d",&pos);
			printf("\n");
			
			remove_pos(li, pos);
			
			break;
		
		case 3:
	
			print_lista(li);
			
		break;
		
		case 4:
		
			printf("Digite um cpf: ");
			scanf("%d",&cpf);
			printf("\n");
			
			c.cpf = cpf;
			
			printf("O índice é: %d.\n\n",busca_indice(li, c));
		
		break;
		
		case 5:
		
			libera_lista(li);

			return 0;	
			
		break;
		
		}
		
	}

}
