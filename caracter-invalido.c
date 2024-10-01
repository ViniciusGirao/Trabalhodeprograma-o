#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#ifndef REMOVE_H
#define REMOVE_H

int valor_da_funcao(int x, int b) {
    double resultado = (double)x / b;
    return (int)round(resultado); // Vai arredondar e retornar //
}

#endif /* REMOVE_H */
int main() {
    setlocale(LC_ALL, "Portuguese");
        int casos_de_teste;
	int i = 0;
	int j = 0;
    int b;
    char mensagem[100];
    
    printf("Digite o número de casos de teste: ");
    scanf("%d", &casos_de_teste); 

for (i = 0; i < casos_de_teste; i++) {
       
        printf("Escreva qual é a base (ex: 16 para hexadecimal): ");
        scanf("%d", &b); // Lê a base
        printf("Escreva a mensagem cifrada (ex:68656C6C6F): ");
        scanf("%s", mensagem);
 
        // Nessa parte sera processada a mensagem
        for (j = 0; j < strlen(mensagem); j += 2) {
            // Cria uma string com 2 caracteres
            char dois_chars[3] = { mensagem[j], mensagem[j + 1], '\0' }; 
            int valor_decimal = (int)strtol(dois_chars, NULL, 16); // Converte de hexadecimal para decimal

            if (valor_da_funcao(valor_decimal, b) != 0) {
                putchar(valor_decimal); // Imprime o caractere se func_val não retornar 0
            }
        }
        printf("\n"); // Adiciona uma nova linha após cada caso de teste
    }
    
    system("PAUSE");
    return 0;
}