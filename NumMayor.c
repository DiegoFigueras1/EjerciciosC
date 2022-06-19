#include <stdio.h> 

int main () {
	
	int n1,n2,n3; 
	
	printf("ingresa tres numeros: ");
	scanf("%i", &n1);
	scanf("%i", &n2);
	scanf("%i", &n3);
	
	if (n1>n2, n1>n3) {
		printf("el numero mayor es: %i", n1);
	}
	 else if (n2>n1, n2>n3) {
	 	printf("el numero mayor es: %i", n2);
	 	
	 }  else if (n3>n1, n3>n2) {
	 	printf("el numero mayor es: %i", n3);
	}

	return 0;
}
