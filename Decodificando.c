Titulo: Descodificação de mensagem!

Introdução: 

O objetivo desse desafio é criar um algoritimo que decifre as mensagens interceptadas pelo inimigo na Segunda Guerra Mundial.

DESAFIO: 

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
int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, m = 0;
    int numero_de_mensagens;
    printf("Escreva o número de mensagens (1 a 10000): ");
    scanf("%d", &numero_de_mensagens);
    
    if (numero_de_mensagens < 1 || numero_de_mensagens > 10000) {
        printf("Número de mensagens inválidas.\n");
        return 1;
    }