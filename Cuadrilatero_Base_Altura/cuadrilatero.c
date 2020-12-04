//Imprime en un archivo las caracteristicas de base y 
//altura que le pases por el cmd
#include <stdio.h>

	struct cuadrilatero{
		int base;
		float altura;
	};

void caracteristicas(struct cuadrilatero a){

	FILE *fp;
	fp = fopen("caracteristicas_cuadrilateros.csv","a");

	fprintf(fp,"La base el cuadrilatero es , %d\n", a.base);
	fprintf(fp,"Altura del cuadrilatero , %.2f\n", a.altura);
	printf("Se imprimio exitosamente");

	fclose(fp);

	return;
}

int main(int argc, char const *argv[]){

	struct cuadrilatero cuadrilatero;

	cuadrilatero.base = atoi(argv[1]);
	cuadrilatero.altura= atoi(argv[2]);

	caracteristicas(cuadrilatero);

	return 0;

}
