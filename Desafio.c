Titulo: Descodificação de mensagem!

Introdução: 

O objetivo desse desafio é criar um algoritimo que decifre as mensagens interceptadas pelo inimigo na Segunda Guerra Mundial.

DESAFIO: 

//Escreva o codigo embaixo dessa linha de texto:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


double valor_da_funcao(int x, double b) {
    double coeficientes[] = {186752, -148235, 34504.9, -3509.1, 0.183166, -0.00513554, 0.0000735464, -4.22038e-7};
    double resultado = coeficientes[0];
    int i = 1;
    for (i = 1; i < 8; i++) {
        resultado += coeficientes[i] * pow(x, i);
    }
    return round(resultado);
}

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
    