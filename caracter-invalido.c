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




carolina





victor