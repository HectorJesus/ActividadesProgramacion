#include <stdio.h>
#include <stdbool.h>

void multiplicacion(int num1, int num2);
void division(int num1, int num2);
void suma(int num1, int num2);
void resta(int num1, int num2);

int main(){
	
	int respuesta;
	
	int numero1 = 0;
	int numero2 = 0;
	
	int i = 0;
	do{
		printf("---------------------------------------------------------------------------\n");
		printf("Que quieres hacer hoy?\n1.Sumas\n2.Restas\n3.Multiplicacion\n4.Division\n5.Progresiones\n6.Salir\n");
		printf("---------------------------------------------------------------------------\n");
		scanf("%d", &respuesta);
		
		switch(respuesta){
			case 1:
					suma(numero1, numero2);
					printf("\n\t\tSesion de sumas terminada\n");
					system("pause");
					printf("\n\n\n\n\n\n\n\n");
				break;
			case 2:
					resta(numero1, numero2);
					printf("\n\t\tSesion de restas terminada\n");
					system("pause");
					printf("\n\n\n\n\n\n\n\n");
				break;
			case 3:
					multiplicacion(numero1, numero2);
					printf("\n\t\tSesion de multiplicaciones terminada\n");
					system("pause");
					printf("\n\n\n\n\n\n\n\n");
				break;
			case 4:
					division(numero1, numero2);
					printf("\n\t\tSesion de division terminada\n");
					system("pause");
					printf("\n\n\n\n\n\n\n\n");
				break;
			case 5:
					printf("\n\n\t\tEstamos trabajando en esto...\n\n\t\t");
				break;
			case 6:
					i = 1;
				break;
			default:
					printf("\nSelecciona una respuesta ");
				break;	
		}	
		
	}while(i == 0);
	
	system("pause");
	return 0;
}

void suma(num1, num2){
	int j;
	int count = 0;
	int numeros[9];
	int respuesta;
	int resp;
	//Asignamos los valores de los 10 numeros
	for(j = 0; j <= 10; j++){
		numeros[j] = rand() % 100;
	}
	//Calculamos la suma de los numeros (2 en 2)
	for(j = 0; j <= 10; j++ ){
		if(j % 2 == 0){
			num2 = numeros[j];
			
			respuesta = num1 + num2;
			
			printf("---------------------------------------------------------------------------\n");
			printf("\t%d + %d = ", num1, num2);scanf("%d", &resp);
			
			if(resp == respuesta){
				printf("\tCorrecto!!\n");
			}else{
				printf("\tIncorrecto... La respuesta correcta es %d\n", respuesta);
			}
			printf("---------------------------------------------------------------------------\n");
		}else{
			num1 = numeros[j];
		}
	}
}

void resta(num1, num2){
	int j;
	int count = 0;
	int numeros[9];
	int respuesta;
	int resp;
	//Asignamos los valores de los 10 numeros
	for(j = 0; j <= 10; j++){
		if(j % 2 != 0){
			numeros[j] = rand() % 11 + 90 ;
		}else{
			numeros[j] = rand() % 100 ;	
		}
	}
	//Calculamos la suma de los numeros (2 en 2)
	for(j = 0; j <= 10; j++ ){
		if(j % 2 == 0){
			num2 = numeros[j];
			
			respuesta = num1 - num2;
			
			printf("---------------------------------------------------------------------------\n");
			printf("\t%d - %d = ", num1, num2);scanf("%d", &resp);
			
			if(resp == respuesta){
				printf("\tCorrecto!!\n");
			}else{
				printf("\tIncorrecto... La respuesta correcta es %d\n", respuesta);
			}
			printf("---------------------------------------------------------------------------\n");
		}else{
			num1 = numeros[j];
		}
	}
}

void multiplicacion(num1, num2){
	int j;
	int count = 0;
	int numeros[19];
	int respuesta;
	int resp;
	//Asignamos los valores de los 10 numeros
	for(j = 0; j <= 19; j++){
		numeros[j] = rand() % 11;
	}
	//Calculamos la multiplicacion de los numeros (2 en 2)
	for(j = 0; j <= 19; j++ ){
		if(j % 2 == 0){
			num2 = numeros[j];
			
			respuesta = num1 * num2;
			
			printf("---------------------------------------------------------------------------\n");
			printf("\t%d * %d = ", num1, num2);scanf("%d", &resp);
			
			if(resp == respuesta){
				printf("\tCorrecto!!\n");
			}else{
				printf("\tIncorrecto... La respuesta correcta es %d\n", respuesta);
			}
			printf("---------------------------------------------------------------------------\n");
		}else{
			num1 = numeros[j];
		}
	}
}

void division(num1, num2){
		int j;
	int count = 0;
	int numeros[19];
	float respuesta;
	float resp;
	//Asignamos los valores de los 10 numeros
	for(j = 0; j <= 19; j++){
		numeros[j] = rand() % 11;
	}
	//Calculamos la devision de los numeros (2 en 2)
	for(j = 0; j <= 19; j++ ){
		if(j % 2 == 0){
			num2 = numeros[j];
			
			respuesta = num1 / num2;
			
			printf("---------------------------------------------------------------------------\n");
			printf("\t%d / %d = ", num1, num2);scanf("%f", &resp);
			
			if(resp == respuesta){
				printf("\tCorrecto!!\n");
			}else{
				printf("\tIncorrecto... La respuesta correcta es %f\n", respuesta);
			}
			printf("---------------------------------------------------------------------------\n");
		}else{
			num1 = numeros[j];
		}
	}
}




