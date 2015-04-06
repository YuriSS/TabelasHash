/* [INI] FIFO */
typedef struct No{
	int num;
	struct No *prox;
}No;
typedef struct Fifo{
	No *inicio, *fim;
}Fifo;

	/* [INI] Inicializacao */
	No* novoNo(int num) {
		No* novo = (No *)malloc(sizeof(No));
		novo->num = num;
		novo->prox = NULL;
		return novo;
	}
	Fifo* novaFila() {
		Fifo* nova = (Fifo *)malloc(sizeof(Fifo));
		nova->inicio = nova->fim = NULL;
		return nova;
	}

	void inicializaFifo(Fifo* f) {
		f->inicio = f->fim = NULL;
	}
	/* [FIM] Inicializacao */
	


	/* [INI] Inserção */
	void pushF(Fifo* f, int num) {
		No* novo = novoNo(num);
		if(f->inicio == NULL) f->inicio = novo;
		else f->fim->prox = novo;
		f->fim = novo;
	}
	/* [FIM] Inserção */
	


	/* [INI] Impressão */
	void printF(Fifo* f) {
		No* aux = f->inicio;
		while(aux != NULL) {
			printf("%d -> ", aux->num);
			aux = aux->prox;
		}
		printf("\\\n");
	}
	/* [FIM] Impressão */
/* [FIM] FIFO */