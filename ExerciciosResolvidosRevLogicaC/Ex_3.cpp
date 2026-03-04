/*
Escreva um programa que peça dois inteiros e exiba a soma,
 subtração, multiplicação, divisão inteira e o resto da divisão.
*/
#include <stdio.h>

int main() {
    int num1=0, num2=0;
    int soma, sub, mult, div_inteira, resto;
    int flag = 0;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    do{
    	printf("Digite o segundo numero inteiro: ");
    	scanf("%d", &num2);
		if(num2 != 0){
			flag=1;
		}
		else {
			printf("Num = zero. Digite outro num diferente de zero\n");
		}	
	}while(flag==0);
    

    // Processamento das operações
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div_inteira = num1 / num2;
    resto       = num1 % num2;

        // Exibição dos resultados
        printf("\n--- Resultados ---\n");
        printf("Soma:           %d\n", soma);
        printf("Subtracao:      %d\n", sub);
        printf("Multiplicacao:  %d\n", mult);
        printf("Divisao Inteira: %d\n", div_inteira);
        printf("Resto da divisao: %d\n", resto);
   
    return 0;
}