/*Enunciado: Q11 – COVERSÃO MONETÁRIA – Crie uma aplicação que deve receber do usuário um determinado
valor em REAIS, e também a cotação do Dolar e Euro, baseado nestas informações, o programa deverá
calcular e apresentar qual o valor que o usuário tem em Doláres e Euros convertidos.
Lucas Timponi Mercadante Castro| Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Conversão Monetária\n");

    double valor_reais, cotacao_dolar, cotacao_euro;
    double valor_dolares, valor_euros;

    // Solicita ao usuário o valor em Reais
    printf("Digite o valor em Reais: R$ ");
    scanf("%lf", &valor_reais);

    // Solicita ao usuário a cotação do Dólar
    printf("Digite a cotação do Dólar: ");
    scanf("%lf", &cotacao_dolar);

    // Solicita ao usuário a cotação do Euro
    printf("Digite a cotação do Euro: ");
    scanf("%lf", &cotacao_euro);

    // Calcula o valor em Dólares e Euros
    valor_dolares = valor_reais / cotacao_dolar;
    valor_euros = valor_reais / cotacao_euro;

    // Exibe o resultado
    printf("O valor em Dólares é: $ %.2lf\n", valor_dolares);
    printf("O valor em Euros é: € %.2lf\n", valor_euros);

    return 0;
}
