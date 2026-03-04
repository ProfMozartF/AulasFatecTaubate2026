/*
Implemente uma calculadora de operações bitwise que leia 
dois números inteiros e exiba os resultados de AND, OR, XOR e NOT
*/

#include <stdio.h>
#include <stdint.h> // Essencial para tipos de tamanho fixo

int main() {
    uint8_t num_1;
    uint8_t num_2;
    int entrada1; // Auxiliares para o scanf
	int entrada2; 

    printf("--- Calculadora Bitwise (8 bits) ---\n");
    printf("Digite o primeiro numero (0-255): ");
    scanf("%d", &entrada1);
    printf("Digite o segundo numero (0-255): ");
    scanf("%d", &entrada2);

    // Casting para garantir que fiquem em 8 bits
    num_1 = (uint8_t)entrada1;
    num_2 = (uint8_t)entrada2;

    printf("\nResultados (em Decimal):\n");
    printf("%u & %u  = %u => AND\n", num_1, num_2, num_1 & num_2);   // AND
    printf("%u | %u  = %u => OR\n", num_1, num_2, num_1 | num_2);   // OR
    printf("%u ^ %u  = %u => XOR\n", num_1, num_2, num_1 ^ num_2);   // XOR
    
    // NOT em 8 bits
    // Fazemos o cast final para uint8_t para ignorar a promoção automática de int
    printf("~%u = %u => NOT\n", num_1, (uint8_t)~num_1);
    printf("~%u = %u => NOT", num_2, (uint8_t)~num_2);

    return 0;
}