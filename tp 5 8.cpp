#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float z1, float x2, float y2,float z2){
	float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2) );
	return distancia;
}
	
	int main(){
		
		float x1,y1,x2,y2,z1,z2;
		float d;
		
		printf( "\nIntroduzca las coordenadas del primer punto:\n" );
		scanf( "%f %f %f", &x1,&y1,&z1);
		
		printf( "\nIntroduzca las coordenadas del segundo punto:\n" );
		scanf( "%f %f %f", &x2,&y2,&z2);
		
		d = distancia(x1,y1,z1,x2,y2,z2);
		printf("La distancia entre los puntos es: %f\n", d);
		
		return(0);
	}
