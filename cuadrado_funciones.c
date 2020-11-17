#include <stdio.h>

	typedef struct cuadrado{
		int largo, ancho;
	}valores;

	int esquinas(valores a);

	main(int argv, char *argc[]){

	valores espec;
	espec.largo = atoi(argc[1]);
	espec.ancho = atoi(argc[2]);

	int j, k, x = 1;

	while(x < 3){

		esquinas(espec);

		printf("\n");

		if(x == 1){

			while(k <= espec.largo - 2){

				for(j = 1; j <= espec.ancho; j++){

					if(j == 1 || j == espec.ancho){
						printf("|");
					}else{
						printf(" ");
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

	int esquinas(valores a){
		int i;
		for(i = 1; i <= a.ancho; i++){
			if(i == 1 || i == a.ancho){
				printf("+");
				}else{
				printf("-");
			}
		}
		return;
	}
