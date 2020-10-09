#include <stdio.h>

main(){
	
	char caracter = '9';
	int ascii = (int) caracter;

	if(ascii >= 48 && ascii <=57){		
		printf("El valor %c es digito\n", caracter);
		}if (ascii >= 97 && ascii <= 122){
			printf("El valor %c es un caracter en minuscula\n", caracter);
			}if (ascii >= 65 && ascii <=90){
				printf("El valor %c es una mayuscula\n", caracter);
					}if(ascii >= 32 && ascii <=47 || ascii >= 58 && ascii <= 64 || ascii >= 91 && ascii <= 96 || ascii >= 123){
						printf("El valor %c es caracter especial\n", caracter);
					}						
	printf("Tiene un codigo ascii de %d", ascii);

	return 0;
}
