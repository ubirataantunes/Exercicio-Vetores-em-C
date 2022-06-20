#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int gado, i, resto, quantidade, contPar = 0, contImpar = 0;
	
	printf("Digite a quantidade de gados que deseja deslocar \n");
	scanf("%d", &quantidade);
	
	int gadosPar[quantidade], gadosImpar[quantidade];
	for (i = 0; i < quantidade; i++) {
		printf("Digite o numero do gado \n");
		scanf("%d", &gado);
		resto = gado % 2;
		if (resto == 0) {
			gadosPar[contPar] = gado;
			contPar++;
		} else {
			gadosImpar[contImpar] = gado;
			contImpar++;
		}
		system("cls");
	}
	printf("Para o pasto 1 irao os gados abaixo: \n");
	for (i = 0; i < contPar; i++) {
		printf("%d\n", gadosPar[i]);
	}
	printf("Para o pasto 2 irao os gados abaixo: \n");
	for (i = 0; i < contImpar; i++) {
		printf("%d\n", gadosImpar[i]);
	}
	getchar ();
	return 0;
}
