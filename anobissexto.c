#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa que verifique se um ano é bissexto ou não*/

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano;
	
	printf ("Digite um ano: ");
	scanf ("%d", &ano);
	
	if (ano%4 == 0 && ano%100 != 0 || ano%400 == 0) {
		
		printf ("O ano é bissexto");
		
	}
	
	else {
		
		printf ("O ano não é bissexto");
		
	}
	
}
