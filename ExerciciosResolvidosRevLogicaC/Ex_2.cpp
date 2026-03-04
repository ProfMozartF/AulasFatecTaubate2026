#include <stdio.h>
#include <string.h>

#define Pi 3.14159 //Pre compile usado para definir por exemplo constantes

float raio = 0.00;
float area = 0.00;

int main() {
 
    
    // Solicita ao usuário que digite o raio do circulo
    printf("Digite o raio de un circulo: ");
    scanf("%f", &raio);
		area = Pi*(raio*raio);
		printf("A area do circulo de raio '%.2f' vale: %.2f", raio,area);
  
    return 0;
}