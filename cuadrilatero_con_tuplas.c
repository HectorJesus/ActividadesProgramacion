#include <stdio.h>

	struct cuadrilatero{
		int base;
		float altura;
	};

int main(){

	struct cuadrilatero cuadrilatero1;
	struct cuadrilatero cuadrilatero2;
	cuadrilatero1.base = 10;
	cuadrilatero1.altura= 15.50;
	cuadrilatero2.base = 20;
	cuadrilatero2.altura = 30.50;
	printf("La base el cuadrilatero es %d\n", cuadrilatero1.base);
	printf("Altura del cuadrilatero %.2f\n", cuadrilatero1.altura);
	printf("La base el cuadrilatero 2 es %d\n", cuadrilatero2.base);
	printf("Altura del cuadrilatero 2 es %.2f", cuadrilatero2.altura);



	return 0;

}
