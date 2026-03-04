#include <stdio.h>

int main() {
    int numero = 5;
    float div_1;
    float div_2;
    
    div_1 = numero/2.0;
    div_2 = (float)numero/2;
    
   // TempoDeInjeção = (float)MassaDeCombCalc/VazaoInjetor;
    
	printf("Resultado da divisao 1: %.2f\n", div_1);
	printf("Resultado da divisao 2: %.2f", div_2);

    
    return 0;
}