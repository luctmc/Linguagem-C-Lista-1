/*Enunciado:Q8 – CONVERSÕES DE TEMPERATURA – Crie uma aplicação que dado um valor de temperatura em
graus Celsius deverá apresentar o resultado convertido em graus Fahrenheit.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Conversão de Temperatura de Celsius para Fahrenheit\n");

    double celsius, fahrenheit;

    // Solicita ao usuário a temperatura em graus Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    // Realiza a conversão de Celsius para Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Exibe o resultado da conversão
    printf("%.2lf graus Celsius equivalem a %.2lf graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
