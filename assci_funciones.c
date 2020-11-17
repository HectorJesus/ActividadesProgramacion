#include <stdio.h>

typedef struct Valores{
	char caracter;
	int val_ascci;
}decision;

char resultado(decision a);

int main(int argc, char const *argv[])
{	
	decision asig;
		asig.caracter = *argv[1];
		asig.val_ascci = (int) asig.caracter;

	resultado(asig);

	printf("Tiene un codigo ascci de %d", asig.val_ascci);
	
	return 0;
}

char resultado(decision a){

	if(a.val_ascci >= 48 && a.val_ascci <=57){		
		printf("El valor %c es digito\n", a.caracter);
		}if (a.val_ascci >= 97 && a.val_ascci <= 122){
			printf("El valor %c es un caracter en minuscula\n", a.caracter);
			}if (a.val_ascci >= 65 && a.val_ascci <=90){
				printf("El valor %c es una mayuscula\n", a.caracter);
					}if(a.val_ascci >= 32 && a.val_ascci <=47 || a.val_ascci >= 58 && a.val_ascci <= 64 || a.val_ascci >= 91 && a.val_ascci <= 96 || a.val_ascci >= 123){
						printf("El valor %c es caracter especial\n", a.caracter);
					}
	return;
}
