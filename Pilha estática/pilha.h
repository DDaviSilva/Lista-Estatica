#define MAX 100

typedef struct{
	int cpf;
	char nome[30];
}Cliente;

typedef struct{
	Cliente cliente[MAX];
	int qtd;
}Pilha;

Pilha* cria_pilha();
int inserir(Pilha *pi, Cliente c);
int remover(Pilha *pi);
void libera_pilha(Pilha *pi);
int print_pilha(Pilha *pi);
