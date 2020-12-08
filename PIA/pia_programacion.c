/*
PIA Programacion Estructurada
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Datos_Entrada{

	char matricula[10];
	int parcial_1;
	int parcial_2;
	int parcial_3;
	int parcial_4;
	int parcial_5;
	int parcial_6;
	int parcial_7;

};

struct Calificaciones{

	int alum_apro;
	int alum_repro;
	int prom_alumn;
	//Guarda el promemdio de cada parcial
	int parciales;//Promedio Parciales
	int parciales_aprobados;
	int parciales_reprobados;

};

void leer_datos(struct Datos_Entrada punt_datos[]){

	char mat[10];
	int p1, p2, p3 , p4, p5, p6, p7;

	char temporal[100];
	char ***valores = NULL;	//Valores va a contener todos los valores leidos
	int *campos_por_linea = NULL;

	char *pivote = NULL;
	int lineas = 0;
	int campos = 0;
	int longitud = 0;
	int i,j;

	FILE *fp;
	fp = fopen("calificaciones_pia_pe.csv","r");

	if(fp != NULL)	{
	do	{
		memset(temporal,0,100);
		fgets(temporal,100,fp);
		lineas++;
		valores = realloc(valores,lineas*sizeof(char*));
		campos_por_linea = realloc(campos_por_linea,lineas*sizeof(int));
		valores[lineas-1] = NULL;
		pivote = strtok(temporal,",");
		campos = 0;
		while (pivote != NULL)	{
			campos++;
			valores[lineas-1] = realloc(valores[lineas-1],sizeof(char*)*campos);
			longitud = strlen(pivote);
			valores[lineas-1][campos -1] = calloc(longitud+1,sizeof(char));
			strncpy(valores[lineas-1][campos -1],pivote,longitud);
			pivote = strtok(NULL, ",");
		}
		campos_por_linea[lineas-1] = campos;
	}while(feof(fp) == 0);
	fclose(fp);
	i = 0;
	while(i < lineas)	{
		j = 0;
		while(j < campos_por_linea[i])	{	// Aqui es donde se procesarian los campos para transformarlos a valores enteres flotantes etc....
			if(i >= 1){
				switch(j){
					case 0: strcpy(punt_datos[i-1].matricula, valores[i][j]);
							break;
					case 1:	punt_datos[i-1].parcial_1 = atoi(valores[i][j]);
							break;
					case 2: punt_datos[i-1].parcial_2 = atoi(valores[i][j]);
							break;
					case 3:	punt_datos[i-1].parcial_3 = atoi(valores[i][j]);
							break;
					case 4:	punt_datos[i-1].parcial_4 = atoi(valores[i][j]);
							break;
					case 5: punt_datos[i-1].parcial_5 = atoi(valores[i][j]);
							break;
					case 6:	punt_datos[i-1].parcial_6 = atoi(valores[i][j]);
							break;
					case 7:	punt_datos[i-1].parcial_7 = atoi(valores[i][j]);
							break;
					default:printf("Error al asignar los datos a la estructura\n");
							break;
				}
			}
			j++;
		}
		i++;
		}	
	}else	{
		printf("Error leyendo el archivo\n");
	}
}

void calificaciones(struct Datos_Entrada punt_datos[],struct Calificaciones punt_cal[]){

	float prom = 0;
	int reprobados;
	int aprobados;
	int i, j, p, q;
	float prom_exam[] = {0,0,0,0,0,0,0};
	float promedio;

	fflush(stdin);

	for(q = 0; q < 7;q++){
		punt_cal[q].parciales_aprobados = 0;
		punt_cal[q].parciales_reprobados = 0;
		punt_cal[q].parciales = 0;
	}


	for(i = 0;i <= 28;i++){

		fflush(stdin);

		j = 0;

		punt_cal[i].alum_repro = 0;
		punt_cal[i].alum_apro = 0;

		prom = 0;
		//i = Alumno
		prom = prom + punt_datos[i].parcial_1;
		p = 0;//Parcial 1-------------------------------------------------------------
		//Parcial 1 Alumno i
		prom_exam[0] = prom_exam[0] + punt_datos[i].parcial_1; 
		//printf("1 .%f\n",prom_exam[0]); // La suma de las calificaciones por parcial
		if(punt_datos[i].parcial_1 < 7){
			punt_cal[i].alum_repro++;
			punt_cal[p].parciales_reprobados++;
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		prom = prom + punt_datos[i].parcial_2;
		p = 1;//Parcial 2 -----------------------------------------------------------
		prom_exam[1] = prom_exam[1] + punt_datos[i].parcial_2;
		//printf("2. %f\n",prom_exam[1]);
		if(punt_datos[i].parcial_2 < 7){
			punt_cal[i].alum_repro++;
			punt_cal[p].parciales_reprobados++;
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		prom = prom + punt_datos[i].parcial_3;
		p = 2;//Parcial 3-------------------------------------------------------------
		prom_exam[2] = prom_exam[2] + punt_datos[i].parcial_3;
		//printf("3.%f\n",prom_exam[2]);
		if(punt_datos[i].parcial_3 < 7){
			punt_cal[i].alum_repro++;
			punt_cal[p].parciales_reprobados++;
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		prom = prom + punt_datos[i].parcial_4;
		p = 3;//Parcial 4--------------------------------------------------------------
		prom_exam[3] = prom_exam[3] + punt_datos[i].parcial_4;
		//printf("4.%f\n",prom_exam[3]);
		if(punt_datos[i].parcial_4 < 7){
			punt_cal[i].alum_repro ++;
			punt_cal[p].parciales_reprobados++;
			
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		prom = prom + punt_datos[i].parcial_5;
		p = 4;//Parcial 5--------------------------------------------------------------
		prom_exam[4] = prom_exam[4] + punt_datos[i].parcial_5;
		//printf("5.%f\n",prom_exam[4]);
		if(punt_datos[i].parcial_5 < 7){
			punt_cal[i].alum_repro++;
			punt_cal[p].parciales_reprobados++;
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		prom = prom + punt_datos[i].parcial_6;
		p = 5;//Parcial 6--------------------------------------------------------------
		prom_exam[5] = prom_exam[5] + punt_datos[i].parcial_6;
		//printf("6.%f\n",prom_exam[5]);
		if(punt_datos[i].parcial_6 < 7){
			punt_cal[i].alum_repro++;
			punt_cal[p].parciales_reprobados++;
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		prom = prom + punt_datos[i].parcial_7;
		p = 6;//Parcial 7-------------------------------------------------------------
		prom_exam[6] = prom_exam[6] + punt_datos[i].parcial_7;
		//printf("7.%f\n",prom_exam[6]);
		if(punt_datos[i].parcial_7 < 7){
			punt_cal[i].alum_repro++;
			punt_cal[p].parciales_reprobados++;
			
		}else{
			punt_cal[i].alum_apro++;
			punt_cal[p].parciales_aprobados++;
		}
		//----------------------------------------------------------------------------
		//Promedio del alumno	
		prom = prom / 7;

		punt_cal[i].prom_alumn = (int)(prom < 0 ? (prom - 0.5) : (prom + 0.5));



	}

	for(q = 0; q < 7;q++){
		promedio = prom_exam[q];
		promedio = promedio / 29;
		punt_cal[q].parciales =  (int)(promedio < 0 ? (promedio - 0.5) : (promedio + 0.5));
		
	}

}

void imprimir_datos(struct Datos_Entrada punt_d[],struct Calificaciones punt_c[]);

int main(){

	struct Datos_Entrada Datos_Entrada[29];

	struct Calificaciones Calificaciones[29];

	//Guarda los datos en la estructura leer_datos
	leer_datos(Datos_Entrada);
	//Calcula la cantidad de aprobados y reprobados hay
	calificaciones(Datos_Entrada, Calificaciones);
	fflush(stdin);
	imprimir_datos(Datos_Entrada, Calificaciones);

	return 0;
}

void imprimir_datos(struct Datos_Entrada punt_d[],struct Calificaciones punt_c[]){

	FILE *archivo;
	archivo = fopen("Archivo_Pia.csv","a");

	int m = 0;
	int n = 0;

	printf("Matricula\t|Parcial 1\t|Parcial 2\t|Parcial 3\t|Parcial 4\t|Parcial 5\t|Parcial 6\t|Parcial 7\t|Parciales Aprobados\t|Parciales Reprobados\t|Promedio Alumno\t|\n");
	fprintf(archivo,"Matricula,Parcial 1,Parcial 2,Parcial 3,Parcial 4,Parcial 5,Parcial 6,Parcial 7,Parciales Aprobados,Parciales Reprobados,Promedio,\n");


	for(m = 0;m <= 28 ; m++){
		printf("%c%c%c%c\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|%d\t|\n",punt_d[m].matricula[3],punt_d[m].matricula[4],punt_d[m].matricula[5],punt_d[m].matricula[6], punt_d[m].parcial_1, punt_d[m].parcial_2, punt_d[m].parcial_3, punt_d[m].parcial_4, punt_d[m].parcial_5, punt_d[m].parcial_6, punt_d[m].parcial_7, punt_c[m].alum_apro, punt_c[m].alum_repro, punt_c[m].prom_alumn);
		fprintf(archivo,"'%c%c%c%c',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",punt_d[m].matricula[3],punt_d[m].matricula[4],punt_d[m].matricula[5],punt_d[m].matricula[6], punt_d[m].parcial_1, punt_d[m].parcial_2, punt_d[m].parcial_3, punt_d[m].parcial_4, punt_d[m].parcial_5, punt_d[m].parcial_6, punt_d[m].parcial_7, punt_c[m].alum_apro, punt_c[m].alum_repro, punt_c[m].prom_alumn);	
	}

		fprintf(archivo,"Cantidad aprobados,");
		printf("Cantidad aprobados\t|");

	for(n = 0;n < 7;n++){
			
			fprintf(archivo,"%d,",punt_c[n].parciales_aprobados);
			printf("%d\t|",punt_c[n].parciales_aprobados);

	}

	fprintf(archivo,"\nCantidad de reprobados,");
	printf("\nCantidad de reprobados\t|");

	for(n = 0;n < 7;n++){
		fprintf(archivo,"%d,",punt_c[n].parciales_reprobados);
		printf("%d\t|",punt_c[n].parciales_reprobados - 1);
	}

	fprintf(archivo,"\nPromedio Parcial,");
	printf("\nPromedio Parciales\t|");

	for(n = 0;n < 7;n++){
		fprintf(archivo,"%d,",punt_c[n].parciales);
		printf("%d\t|",punt_c[n].parciales);
	}

	fclose(archivo);

}
