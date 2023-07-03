#include <stdio.h>

int num_dia(int dia,int mes, int anio){
	
	int num_dia = 0;
	int i;
	int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31}; /*dias por mes*/
		
		
		if (((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0))
			arr[1] += 1;
	
	for( i = 0; i < mes -1; i++){
		num_dia += arr[i];
	}
	
	num_dia += dia;
	
	return  num_dia;
}
	
	int main(){
		int d,m,anio,a;
		
		
		printf("Ingrese el dia:");
		scanf("%d",&d);
		
		printf("Ingrese el mes(en numero):");
		scanf("%d",&m);
		
		printf("Ingrese el año:");
		scanf("%d",&anio);
		
		
		a = num_dia(d,m,anio);
		printf( "Los dias transcurridos en el año hasta tal fecha es: %d\n",a);
		
		return(0);
	}
