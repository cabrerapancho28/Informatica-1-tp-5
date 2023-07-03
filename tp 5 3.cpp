#include <stdio.h>


int minimo(int a, int b, int c){
	int min = a;
	
	if(b < min){
		min = b;
	}
	
	if( c < min ){
		min = c;
	}
	
	return min;
}
	
	int main(){
		
		int numero1,numero2,numero3;
		
		
		printf("Introduzca los tres enteros:\n");
		scanf("%d%d%d", &numero1,&numero2,&numero3);
		
		printf("El minimo es: %d\n",minimo(numero1,numero2,numero3));
		
		
		return (0);
	}
