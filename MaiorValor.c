#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa na linguagem C que receba 3 valores e retorne o maior entre eles. */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float val1, val2, val3;
	
	printf ("Digite o 1º valor: ");
	scanf ("%f", &val1);
	
	printf ("Digite o 2º valor: ");
	scanf ("%f", &val2);
	
	printf ("Digite o 3º valor: ");
	scanf ("%f", &val3);
	
	if (val1 > val2 && val3 < val1) {
		
		printf ("O maior valor é: %.2f", val1);
		
	}
	
	else if (val2 > val1 && val3 < val2) {
		
		printf ("O maior valor é: %.2f", val2);
		
	}
	
	if (val3 > val1 && val2 < val3) {
		
		printf ("O maior valor é: %.2f", val3);
		
	}
	
}