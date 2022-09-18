#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Escreva um programa (utilizando o comando "if-else") que indique o número de dias existentes em um mês (fevereiro = 28 dias)*/

main () {
	
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf ("Digite o nº mês (1-12): ");
	scanf ("%d", &mes);
	
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12  ) {
		
		printf ("O mês %d tem 31 dias", mes);
		
	}
	
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		
	    printf ("O mês %d tem 30 dias", mes);
		
	}
	
	else if (mes == 2) {
		
		printf ("O mês %d tem 28 dias", mes);
		
	}
	

}