#include <stdio.h>
#define PI  3.14159265359

void circunferencia( float r, int op){
	
	float volumen = 4.0/3.0 * PI * r * r * r;
	float area = PI * r * r;
	
	if(op == 1){
		printf("\nEl volumen es: %.2f\n", volumen);
	}
	else if(op == 2){
		printf("\nEl area es: %.2f\n", area);
	}
	else{
		printf("\nError: opcion invalida\n");
	}
}
	
	int main(){
		
		int opcion;
		float R;
		
		printf("\nIngrese el radio:");
		scanf( "%f", &R);
		
		printf("\nIngrese lo que quiere calcular (1 para el volumen, 2 el area):\n");
		scanf("%d", &opcion);
		circunferencia(R,opcion);
		
		return (0);
	}
