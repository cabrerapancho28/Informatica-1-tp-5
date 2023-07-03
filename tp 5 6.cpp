#include <stdio.h>

int factorial(int n){
	int factorial = 1;
	int i;
	for ( i = 1; i <= n ; i++){
		factorial = factorial * i;
	}
	return factorial;
}
	
	int main(){
		int a;
		
		printf("Escribe un numero para calcular su factorial\n");
		scanf("%d", &a);
		
		printf("El factorial de %d! = %d\n",a,factorial(a));
		return (0);
		
	}
