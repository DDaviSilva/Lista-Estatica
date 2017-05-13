#define MAX 100

typedef struct{
	int cpf;
	char nome[30];
}Cliente;

typedef struct{
	Cliente cliente[MAX];
	int qtd;
}Lista;

Lista* cria_lista();
int insere_pos(Lista *li, Cliente c, int pos);
int remove_pos(Lista *li, int pos);
int busca_indice(Lista *li, Cliente c);
void libera_lista(Lista *li);
int print_lista(Lista *li);
