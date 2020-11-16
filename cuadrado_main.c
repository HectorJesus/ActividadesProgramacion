#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]){

	
	int i, j, k, x = 1;
	int largo = atoi(argv[1]);
	int ancho = atoi(argv[2]);


	while(x < 3){

		for(i = 1; i <= ancho; i++){


			if(i == 1 || i == ancho){
				printf("+");
				}else{
				printf("-");
			}

		}

		printf("\n");

		if(x == 1){

			while(k <= largo - 2){

				for(j = 1; j <= ancho; j++){

					if(j == 1 || j == ancho){
						printf("|");
					}else{
						printf(" ");
						//Para poner un texto dentro (No es recomendable)
						
						//if(k == largo/2 && j == (ancho/2){
						//	printf("Holaa");
						//}
					}

				}

				printf("\n");

				k = k + 1;
			}

		}

		x = x + 1;
	}

	return 0;
	
}

/*
main(int argc, char **argc[])
{

	if(argc!=2) {
	printf("Ha olvidado su nombre.\n");
	exit(1);
	}
	
	printf("Hola %s", argv[1]);
	return 0;
}
*/
