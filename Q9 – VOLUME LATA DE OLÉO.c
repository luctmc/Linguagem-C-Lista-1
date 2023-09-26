/*Enunciado:Q9 – VOLUME LATA DE OLÉO – Crie uma aplicação deva apresentar o volume de uma lata de óleo
baseado em sua altura e raio, a formula para o cálculo é VOLUME = 3.14149 * R2 * ALTURA.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>
#include <math.h>

int main() {
    printf("Calculadora de Volume de Lata de Óleo\n");

    double raio, altura, volume;

    // Solicita ao usuário o valor do raio
    printf("Digite o raio da lata de óleo: ");
    scanf("%lf", &raio);

    // Solicita ao usuário a altura da lata de óleo
    printf("Digite a altura da lata de óleo: ");
    scanf("%lf", &altura);

    // Calcula o volume da lata de óleo
    volume = 3.14149 * pow(raio, 2) * altura;

    // Exibe o resultado do cálculo
    printf("O volume da lata de óleo é: %.2lf unidades cúbicas\n", volume);

    return 0;
}
