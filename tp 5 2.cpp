#include <stdio.h>

float requiv(float r1, float r2,float r3) {
	float requiv = (1.0/((1.0/r1) + (1.0/r2) + (1.0/r3)));
	return requiv;
}



int main(){
	int a,b,c;
	
	printf("Ingrese las resistencias:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("La resisitencia equivalente es %f\n", requiv(a,b,c));
	return 0;
	
}
