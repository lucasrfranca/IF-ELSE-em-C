#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva uma programa (utilizando o comando "if-else"), que leia um número e indique se esse inteiro é ou não igual a 0*/

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf ("Digite um número: ");
	scanf ("%d", &n);
	
	if (n == 0) {
		
		printf ("O número é igual a 0");
		
	}
	
	else {
		
		printf ("O número não é igual a 0");
		
	}
	
}