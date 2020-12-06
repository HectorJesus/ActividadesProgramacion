#include <stdio.h>

	typedef struct cuadrado{
		int largo, ancho;
	}valores;

	void esquinas(valores a);

	main(int argv, char *argc[]){

	valores espec;
	espec.largo = atoi(argc[1]);
	espec.ancho = atoi(argc[2]);


	int j, k, x = 1;

	while(x < 3){

		esquinas(espec);

		FILE *fp;
		fp = fopen("Archivo_Cuadrado.txt","a");
		fprintf(fp,"\n");

		if(x == 1){

			while(k <= espec.largo - 2){

				for(j = 1; j <= espec.ancho; j++){

					if(j == 1 || j == espec.ancho){
						fprintf(fp,"|");
					}else{
						fprintf(fp," ");
					}


				}

				fprintf(fp,"\n");

				k = k + 1;
			}

		}


		fclose(fp);
		x = x + 1;
	}



	return 0;
}

void esquinas(valores a){
	FILE *fp;
	fp = fopen("Archivo_Cuadrado.txt","a");
		int i;
		for(i = 1; i <= a.ancho; i++){
			if(i == 1 || i == a.ancho){
				fprintf(fp,"+");
				}else{
				fprintf(fp,"-");
			}
		}
	fclose(fp);
		return;
	}
