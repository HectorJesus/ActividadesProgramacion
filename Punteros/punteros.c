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

int main(int argc, char const *argv[]){

	int i; 
	float mayor, menor;
	float num1 = atoi(argv[1]);
	float num2 = atoi(argv[2]);
	float num3 = atoi(argv[3]);
	float ar_num[] = {num1,num2,num3};
	float *tup;
	tup = ar_num; 

	FILE *fp;
	fp = fopen("Archivo_Punteros.csv","a");

	rewind(fp);

	numeros val_num = {*tup++, *tup++, *tup++};

	imprimir(val_num);

	float suma  = sum(val_num);

	may(val_num);

	men(val_num);

	float promedio = arr(val_num);

	fprintf(fp, "%.2f, %.2f, %.2f\n", num1, num2, num3);
	fprintf(fp,"Mayor:, %.2f\n", may(val_num));
	fprintf(fp,"Menor:, %.2f\n", men(val_num));
	fprintf(fp,"Suma:, %.2f\n", suma);
	fprintf(fp,"Promedio:, %.2f\n", promedio);

	fclose(fp);

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

	return mayor;
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

	return menor;
}

float arr(numeros ar){
	return (ar.val1 + ar.val2 + ar.val3)/3;
}