#include <stdio.h>

//enero 1994 empieza en sabado 1
//entre 1994 y 1999 hay 6 años

void meses(int mes);

int main(){
	int i;
	int mes;
	int dias;
	int dias_semana;
	int anios[] = {1994,1995,1996,1997,1998,1999}; 
	int dias_mes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int dias_mes_viciesto[] = {31,29,31,30,31,30,31,31,30,31,30,31};
		
	for(i = 0;i < 6;i++){
		printf("\n-----------------------------------------------------------------------\n");
		printf("\t\t\t\tAnio: %d", anios[i]);
		for(mes = 1;mes <= 12;mes++){
			printf("\n-----------------------------------------------------------------------\n");
			meses(mes);
			printf("\n-----------------------------------------------------------------------\n");
			printf("|Domingo  |Lunes    |Martes   |Miercoles|Jueves   |Viernes  |Sabado   |");
			printf("\n-----------------------------------------------------------------------\n");
			dias_semana = 0;
			if(anios[i]%4 == 0){
				for(dias = 1;dias <= dias_mes_viciesto[mes-1];dias++){
					dias_semana++;
					if(dias < 10){
						printf("|    %d    ", dias);
						if(dias_semana % 7 == 0){
							printf("\n");
						}
					}else{
						printf("|    %d   ", dias);
						if(dias_semana % 7 == 0){
							printf("\n");
						}
					}
				}
			}else{
				for(dias = 1;dias <= dias_mes[mes-1];dias++){
					dias_semana++;
					if(dias < 10){
						printf("|    %d    ", dias);
						if(dias_semana % 7 == 0){
							printf("\n");
						}
					}else{
						printf("|    %d   ", dias);
						if(dias_semana % 7 == 0){
							printf("\n");
						}
					}
				}
			}
		}
	}
	
	system("pause");
	return 0;
}

void meses(int mes){
	switch(mes){
		case 1:	printf("|\t\t\t\tEnero\t\t\t\t      |");
				break;
		case 2:	printf("|\t\t\t\tFebrero\t\t\t\t      |");
				break;	
		case 3:	printf("|\t\t\t\tMarzo\t\t\t\t      |");
				break;
		case 4:	printf("|\t\t\t\tAbril\t\t\t\t      |");
				break;			
		case 5:	printf("|\t\t\t\tMayo\t\t\t\t      |");
				break;
		case 6:	printf("|\t\t\t\tJunio\t\t\t\t      |");
				break;
		case 7:	printf("|\t\t\t\tJulio\t\t\t\t      |");
				break;
		case 8:	printf("|\t\t\t\tAgosto\t\t\t\t      |");
				break;	
		case 9:	printf("|\t\t\t\tSeptiembre\t\t\t      |");
				break;
		case 10: printf("|\t\t\t\tOctubre\t\t\t\t      |");
				break;			
		case 11: printf("|\t\t\t\tNoviembre\t\t\t      |");
				break;
		case 12:printf("|\t\t\t\tDiciembre\t\t\t      |");
				break;
		default:	printf("No debe de entrar aqui;");
				break;					
	}
}
