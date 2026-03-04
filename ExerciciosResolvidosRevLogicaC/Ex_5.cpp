#include <stdio.h>

int main() {
    // Um unsigned char ocupa 1 byte (8 bits)
    // Range: 0 até 255
    unsigned char contador = 255;

    printf("Valor inicial: %u\n", contador);

    // Atribuindo 256 (255 + 1)
    contador = 256;
    printf("Valor apos atribuir 256: %u\n", contador);

    // Atribuindo 300 (255 + 45)
    contador = 300;
    printf("Valor apos atribuir 300: %u\n", contador);

    return 0;
}