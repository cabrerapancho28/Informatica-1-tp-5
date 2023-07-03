#include <stdio.h>
	/*np = nuevo precio*/
	/* d = descuento , p = precio original*/
	
	float compra( int d, float p){
	float np = (((d/100.0) * p) - p);
	return np;
}
	
	
	int main(){
		
		float precio;
		int descuento;
		
		printf("Introduzca el precio original  del producto(en pesos):\n");
		scanf("%f", &precio);
		
		printf("Introduzca el descuento que se le va a hacer al producto:\n");
		scanf("%d", &descuento);
		
		printf("El precio del producto con descuento es(en pesos): %.2f\n",compra(descuento,precio));
		
		return(0);
	}
