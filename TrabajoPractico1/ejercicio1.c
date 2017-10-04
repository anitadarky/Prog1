/*Realizar una función que reciba tres valores enteros positivos y devuelva el menor estricto de los tres.
En caso de no existir el menor estricto, devolver -1. No usar operadores lógicos. Realizar un programa que
permita probar la función.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int menorestricto(int x, int y, int z);

int main() 
{
	int a, b, c, resultado;
	printf("Ingrese un número");
	scanf("%d", &a);
	printf("Ingrese un número");
	scanf("%d", &b);
	printf("Ingrese un número");
	scanf("%d", &c);

	resultado = menorestricto(a,b,c);

	printf("El menor estricto es %d\n", resultado);

	return 0;
}

int menorestricto(int x, int y, int z) 
{
	int result;

	if (x == y)
	{
		if (x == z)
		{
			result = -1;
		}
	}
	else 
	{
		if (x < y) 
		{
			if (x < z) 
			{
				result = x;
			}
			else 
			{
				result = z;
			}
		}
		else 
		{
			if (y < z) 
			{
				result = y;
			}
			else 
			{
				result = z;
			}
		}
	}

	

	

	return result;
}