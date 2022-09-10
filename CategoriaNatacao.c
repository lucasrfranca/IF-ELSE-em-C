#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Utilize a estrutura if para fazer um programa na linguagem C que dada a idade de um 
nadador classifica-o em uma das seguintes categorias:
 
Infantil = até 14 anos
Juvenil = 15 a 24 anos
Adulto = maiores de 24 ano */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf ("Digite a idade: ");
	scanf ("%d", &idade);
	
	if (idade <= 14 ) {
		
		printf ("Categoria Infantil");
		
	}
	
	else if (idade >= 15 && idade <= 24) {
		
		printf ("Categoria Juvenil");
		
	}
	
	if (idade > 24) {
		
		printf ("Categoria Adulto");
		
	}
	
}