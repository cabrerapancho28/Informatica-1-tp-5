#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2){
	float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	return distancia;
}
	
	int main(){
		
		float x1,y1,x2,y2;
		float d;
		
		printf( "\nIntroduzca las coordenadas del primer punto:\n" );
		scanf( "%f %f", &x1,&y1);
		
		printf( "\nIntroduzca las coordenadas del segundo punto:\n" );
		scanf( "%f %f", &x2,&y2);
		
		d = distancia(x1,y1,x2,y2);
		printf("La distancia entre los puntos (%.2f, %.2f) y (%.2f, %.2f) es %.2f", x1, y1, x2, y2, d);
		
		return(0);
	}
