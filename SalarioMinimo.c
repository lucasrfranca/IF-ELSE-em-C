#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fazer um programa que leia o valor do salário mínimo e o valor do salário de uma 
pessoa. Calcular e imprimir quantos salários mínimos ela ganha. Se o valor exceder 3 
salários mínimos mostre a mensagem “Somente 21% da população brasileira recebe 
mais de três salários mínimos por mês”, senão mostre a mensagem “Mais de 79% da 
população brasileira recebe até três salários mínimos por mês” */

main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal_min = 1212, sal, sal_total;
	
	printf ("Digite seu salário: R$");
	scanf ("%f", &sal);
	
	sal_total = sal/sal_min;
	
	if (sal_total > 3) {
		
		printf ("Você recebe %.2f salários mínimos\n", sal_total);
		printf ("Somente 21%% da população brasileira recebe mais de três salários mínimos por mês");
		
	}
	
	else if (sal_total <= 3) {
		
		printf ("Você recebe %.2f salários mínimos\n", sal_total);
		printf ("Mais de 79%% da população brasileira recebe até três salários mínimos por mês");
		
	}
	
}