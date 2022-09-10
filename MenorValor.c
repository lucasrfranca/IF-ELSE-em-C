#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa na linguagem C que receba 2 valores e retorne o menor entre eles. */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float val1, val2;
	
	printf ("Digite o 1º valor: ");
	scanf ("%f", &val1);
	
	printf ("Digite o 2º valor: ");
	scanf ("%f", &val2);
	
	if (val1 < val2) {
		
		printf ("O menor valor é: %.2f", val1);
		
	}
	
	else {
		
		printf ("O menor valor é: %.2f", val2);
		
	}

}