#define MAX 100

typedef struct{
	int cpf;
	char nome[30];
}Cliente;

typedef struct{
	Cliente cliente[MAX];
	int qtd;
}Fila;

Fila* cria_fila();
int inserir(Fila *fi, Cliente c);
int remover(Fila *fi);
void libera_fila(Fila *fi);
int print_fila(Fila *fi);
