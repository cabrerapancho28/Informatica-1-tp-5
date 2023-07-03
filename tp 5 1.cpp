#include <stdio.h>
#include <math.h>

void cuadratica(float a, float b, float c, int op) {
	
	
	float d = b*b-4.0*a*c;
	float raiz1, raiz2;
	if(d < 0){
		printf("Error: no existen raices reales\n");
		return;
	}
	raiz1=(-b+sqrt(d))/(2*a);
	raiz2=(-b-sqrt(d))/(2*a);
	
	
	if(op == 1){
		printf("\nLa raiz seleccionada es: %.2f\n", raiz1);
	}
	else if(op == 2){
		printf("\nLa raiz seleccionada es: %.2f\n", raiz2);
	}
	else{
		printf("\nError: opcion invalida\n");
	}
	
}


int main(){
	
	float a, b, c;
	int opcion;
	
	printf( "\n Introduzca el coeficiente a: " );
	scanf( "%f", &a );
	printf( "\n Introduzca el coeficiente b: " );
	scanf( "%f", &b );
	printf( "\n Introduzca el coeficiente c: " );
	scanf( "%f", &c );
	
	
	
	printf("\nIngrese la raiz que desea obtener (1 para la primera raiz, 2 para la segunda raiz):\n");
	scanf("%d", &opcion);
	cuadratica(a, b, c, opcion);
	
	return (0);
}
