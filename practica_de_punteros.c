#include <stdio.h>

typedef struct Valores{
	float val1;
	float val2;
	float val3;
}numeros;
// ^ Eso == Esto v 
//typedef struct Valores numeros;

float imprimir(numeros val);

float sum(numeros a);

float may(numeros m);

float men(numeros n);

float arr(numeros ar);

main(){

	int i; 
	float mayor, menor;
	float ar_num[] = {0,8,7};
	float *tup;
	tup = ar_num; 

	numeros val_num = {*tup++, *tup++, *tup++};

	imprimir(val_num);

	float suma  = sum(val_num);
	printf("\nSuma %.2f", suma);

	may(val_num);

	men(val_num);

	float promedio = arr(val_num);
	printf("\nPromedio %.2f", promedio);
	return 0;
}


float imprimir(numeros val){
	printf("%.2f %.2f %.2f", val.val1, val.val2, val.val3);
	return;
}

float sum(numeros a){
	return a.val1 + a.val2 + a.val3;
}


float may(numeros m){
	float mayor;
	if(m.val1 > m.val2 && m.val1 > m.val2){
		mayor = m.val1;
	}if(m.val2 > m.val1 && m.val2 > m.val3){
		mayor = m.val2;
	}if(m.val3 > m.val1 && m.val3 > m.val2){
		mayor = m.val3;
	}

	printf("\nMayor %.2f", mayor);
	return;
}

float men(numeros n){
	float menor;
	if(n.val1 < n.val2 && n.val1 < n.val2){
		menor = n.val1;
	}if(n.val2 < n.val1 && n.val2 < n.val3){
		menor = n.val2;
	}if(n.val3 < n.val1 & n.val3 < n.val2){
		menor = n.val3;
	}

	printf("\nMenor %.2f", menor);

	return;
}

float arr(numeros ar){
	return (ar.val1 + ar.val2 + ar.val3)/3;
}
//---------------------------------------------------------------------Primera version del codigo ---------------------------------------------------------------------
/*
struct valores{
	float valor1;
	float valor2;
	float valor3;
}val_num;

int sum(struct valores val_num){

	return valor1 + valor2 + valor3;
}


int rest(valores, val_num){
	return val_num.valor3 - val_num.valor2 - val_num.valor1;
}

main(){

	int i
	int ar_num[] = {2,4,6}
	int *punt_num;


	punt_num = ar_num;

	val_num();

	int suma = sum(val_num);
	printf("Suma %d", suma);

	return 0;
}

float val_num(){
	float val_num.valor1 = punt_num;
	float val_num.valor2 = punt_num ++;
	float val_num.valor2 = punt_num + 2;
}
*/
