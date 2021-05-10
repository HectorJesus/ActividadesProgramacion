#include <stdio.h>

void piramide_uno(int i);
void piramide_dos(int i);
void piramide_tres(int i);
void piramide_cuatro(int i);

int main(){
	
	int i = 0;
	
	piramide_uno(i);
	printf("\n");
	piramide_dos(i);
	printf("\n");
	piramide_tres(i);
	printf("\n");
	piramide_cuatro(i);
	
	system("pause");
	return 0;
}

void piramide_uno(int i){
	int j;
	for(i = 0;i < 10;i++){
		for(j = 0;j < 10;j++){
			 if(j <= i){
			 	printf("*");
			 }else{
			 	printf(" ");
			 }
		}
		printf("\n");
	}
}

void piramide_dos(int i){
	int j;
	int pos;
	pos = 10; 
	for(i = 0;i < 10;i++){
		for(j = 0;j < 10;j++){
			 if(pos > j){
			 	printf("*");
			 }else{
			 	printf(" ");
			 }
		}
		printf("\n");
		pos--;
	}
}

void piramide_tres(int i){
	int j;
	for(i = 0;i < 10;i++){
		for(j = 0;j < 10;j++){
			 if(j >= i){
			 	printf("*");
			 }else{
			 	printf(" ");
			 }
		}
		printf("\n");
	}
}

void piramide_cuatro(int i){
	int j;
	int pos;
	pos = 10; 
	for(i = 0;i < 10;i++){
		for(j = 0;j < 10;j++){
			 if(pos < j){
			 	printf("*");
			 }else{
			 	printf(" ");
			 }
		}
		printf("\n");
		pos--;
	}
}

