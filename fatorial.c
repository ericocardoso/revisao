#include <stdio.h>

void main ()
{

	int valor = 0, fatorial = 0, i = 0;

	printf ("Vamos calcular o fatorial de um numero. Escolha um valor: ");
	
	scanf ("%d", &valor);
	
	for (i = 0; i <= valor; i++)
	{
		fatorial = valor*(valor-1);
	}
	printf ("\nO fatorial de %d eh = %d\n.", valor, fatorial);
}
