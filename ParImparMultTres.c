#include <stdio.h>

int main () {
	
	int num,par,impar,mult, ultnum;
			printf("introduzca un numero: ");
		scanf("%i", &num);
		
	do {
		if (num%3==0) {
			mult+=1;
		}
	int	par = 0;
	int	impar = 0;
	
	do {
			ultnum=num%10;
		
			if (ultnum%2==0) {
				par+=1;
			} else {
				impar+=1;
			} 
			num/=10;
	} while (num!=0);
	
	printf("Digitos pares: %i \n", par);
	printf("Digitos impares: %i \n", impar);
	
	printf("introduzca un numero: ");
		scanf("%i", &num);
	} while (num!=-1);
	
	printf("Numeros multiplos de 3: %i \n", mult);
	
	return 0;
}
