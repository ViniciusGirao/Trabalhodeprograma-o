#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

//Função Principal:
int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Imprimindo os limites dos tipos inteiros
    
    printf("Tipo                  | Valor Mínimo                | Valor Máximo\n");
    printf("----------------------|-----------------------------|-----------------------------\n");
    printf("char                  | %d                         | %d\n", CHAR_MIN, CHAR_MAX);
    printf("int                   | %d                         | %d\n", INT_MIN, INT_MAX);
    printf("short int             | %d                         | %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned int          | %u                        | %u\n", 0, UINT_MAX);
    printf("long int              | %ld                        | %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int     | %lu                       | %lu\n", 0UL, ULONG_MAX);
    printf("long long int         | %lld                       | %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int | %llu                     | %llu\n", 0ULL, ULLONG_MAX);
    // Overflow: é quando o computador faz uma conta e o resultado não pode ser representado, por ser maior do que o valor máximo permitido
    // Demonstração de como funciona o overflow:
    
    unsigned char overflow_char = 255; // Máximo para char
    printf("\nExemplo de overflow:\n");
    printf("Valor inicial eo overflow_char: %d\n", overflow_char);



    overflow_char += 1; // Tentativa de ultrapassar o limite
    printf("Valor após overflow: %d\n", overflow_char); // O valor retorna ao mínimo possível, ou seja, 0.
    







 // Demonstrando atribuição de valores fora dos limites de variáveis
    
    printf("\nExemplo de valor fora do limite:\n");
    short int numero_fora_do_limite = 32768; // Limite de short int é 32767
    printf("Valor atribuído fora do limite (short int): %d\n", numero_fora_do_limite);
    unsigned int unsigned_fora_limite = UINT_MAX + 1; // Extrapolando limite do unsigned int
    printf("Valor atribuído fora do limite (unsigned int): %u\n", unsigned_fora_limite);
 
    system("pause");
    return 0;
}