#include <stdio.h>
//#include <string.h>

int main() {
    char letra = 'M';
	int numero_inteiro = 10;
	float numero_decimal = 2.38;
	double numero_double = 0.00000000000000000095;


    
    printf("Tipos de Dados");
    printf("\nDado tipo char = %c", letra);
  	printf("\nDado tipo interiro = %d", numero_inteiro);
  	printf("\nDado tipo float = %.2f", numero_decimal);
  	printf("\nDado tipo double = %.20f", numero_double);
  	printf("\nDado tipo double = %e", numero_double);
    
    return 0;
}