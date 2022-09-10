#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa em C que receba e compare o salário de três funcionários. */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal1, sal2, sal3;
	
	printf ("Digite o 1º salário: $");
	scanf ("%f", &sal1);
	
	printf ("Digite o 2º salário: $");
	scanf ("%f", &sal2);
	
	printf ("Digite o 3º salário: $");
	scanf ("%f", &sal3);
	
	if (sal1 > sal2 && sal3 < sal1) {
		
		printf ("O maior sálario é: $%.2f", sal1);
		
	}
	
    else if (sal2 > sal1 && sal3 < sal2) {
		
		printf ("O maior sálario é: $%.2f", sal2);
		
	}
	
	if (sal3 > sal1 && sal2 < sal3) {
		
		printf ("O maior sálario é: $%.2f", sal3);
		
	}
	
}