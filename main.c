#include <stdio.h>
#include <stdlib.h>
#include "Fifo.h"

int main() {
	int testes, t;
	scanf("%d", &testes);

	if(testes <= 0) {
		return 0;
	}

	Fifo* vetores[testes];
	for(t=0; t<testes; t++) {
		int tam, quant;

		scanf("%d %d", &tam, &quant);
		if((tam >= 1 && tam <= 100) && (quant >=1 && quant <= 200)) {
			Fifo filas[tam];
			vetores[t] = filas;
			int i, valor;
			for(i=0; i<tam; i++) {
				inicializaFifo(&vetores[t][i]);
			}
			for(i=0; i<quant; i++) {
				scanf("%d", &valor);
				int index = valor % tam;
				pushF(&vetores[t][index], valor);
			}
		}
	}

	printf("\n\n");
	printF(&vetores[0][0]);
	printf("\n\n");

	/*Fifo* vetores[3];

	Fifo filas[10];
	vetores[0] = filas;

	inicializaFifo(&vetores[0][0]);

	pushF(&vetores[0][0], 3);
	pushF(&vetores[0][0], 2);
	printF(&vetores[0][0]);*/



	/*
	// ISSO FUNCIONA COM 1 TESTE

	int tam, quant;

	scanf("%d %d", &tam, &quant);
	if((tam >= 1 && tam <= 100) && (quant >=1 && quant <= 200)) {
		Fifo* filas[tam];
		int i, j, k, valor;
		for(i=0; i<tam; i++) {
			filas[i] = novaFila();
		}
		for(j=0; j<quant; j++) {
			scanf("%d", &valor);
			int index = valor % tam;
			pushF(filas[index], valor);
		}
		for(k=0; k<tam; k++) {
			printf("%d -> ", k);
			printF(filas[k]);
		}
	}*/

	return 0;

}
