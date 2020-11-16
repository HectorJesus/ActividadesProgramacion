#include <stdio.h>

struct Valores{
	char caracter;
	int val_ascci;
};

int main(int argc, char const *argv[])
{	
	struct Valores asignacion;
		asignacion.caracter = *argv[1];
		asignacion.val_ascci = (int) asignacion.caracter;

	if(asignacion.val_ascci >= 48 && asignacion.val_ascci <=57){		
		printf("El valor %c es digito\n", asignacion.caracter);
		}if (asignacion.val_ascci >= 97 && asignacion.val_ascci <= 122){
			printf("El valor %c es un caracter en minuscula\n", asignacion.caracter);
			}if (asignacion.val_ascci >= 65 && asignacion.val_ascci <=90){
				printf("El valor %c es una mayuscula\n", asignacion.caracter);
					}if(asignacion.val_ascci >= 32 && asignacion.val_ascci <=47 || asignacion.val_ascci >= 58 && asignacion.val_ascci <= 64 || asignacion.val_ascci >= 91 && asignacion.val_ascci <= 96 || asignacion.val_ascci >= 123){
						printf("El valor %c es caracter especial\n", asignacion.caracter);
					}						
	printf("Tiene un codigo ascci de %d", asignacion.val_ascci);
	
	return 0;
}
