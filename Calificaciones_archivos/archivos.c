/*
Created by Hector Jesus Solis Lazaro
*/

#include <stdio.h>

typedef struct Evaluaciones{
	int   matricula_str;
	int  primer_parcial_str;
	int  segundo_parcial_str;
	int  pia_str;
	float  final_str;
}eval;



int main(int argc, char *argv[]){

	eval resultados;
	resultados.matricula_str = atoi(argv[1]);
	resultados.primer_parcial_str = atoi(argv[2]);
	resultados.segundo_parcial_str = atoi(argv[3]);
	resultados.pia_str = atoi(argv[4]);
	resultados.final_str = (resultados.primer_parcial_str + resultados.segundo_parcial_str + resultados.pia_str)/3;
	


  FILE *fp;
  fp = fopen("Evaluaciones.csv", "a");
  int i = 1;
   fprintf(fp, "%d, %d, %d, %d, %.2f\n", resultados.matricula_str, resultados.primer_parcial_str, resultados.segundo_parcial_str, resultados.pia_str, resultados.final_str);
       printf("los valores de la linea %d son: %d %d %d %d %.2f\n", i, resultados.matricula_str, resultados.primer_parcial_str, resultados.segundo_parcial_str, resultados.pia_str, resultados.final_str);
  fflush(fp);
  fclose(fp);

  return 0;

}
