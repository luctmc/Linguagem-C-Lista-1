/*Enunciado:Q10 – PARCELA EM ATRASO – Crie uma aplicação que é responsável por apresentar o valor total de
uma prestação/parcela/mensalidade que foi paga em atraso (para melhor entendimento considere o
exemplo de pagar uma mensalidade da faculdade em atraso), a formula para realizar o cálculo da
prestação é: VALOR DA PARCELA EM ATRASO = VALOR PARCELA REAL + ((VALOR PARCELA REAL *
PERCENTUAL ACRÉSCIMO/JUROS) / 100).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Calculadora de Valor de Prestação em Atraso\n");

    double valor_parcela_real, percentual_acrescimo, valor_parcela_em_atraso;

    // Solicita ao usuário o valor da parcela real
    printf("Digite o valor da parcela real: R$ ");
    scanf("%lf", &valor_parcela_real);

    // Solicita ao usuário o percentual de acréscimo/juros
    printf("Digite o percentual de acréscimo/juros (em porcentagem): ");
    scanf("%lf", &percentual_acrescimo);

    // Calcula o valor da parcela em atraso
    valor_parcela_em_atraso = valor_parcela_real + ((valor_parcela_real * percentual_acrescimo) / 100.0);

    // Exibe o valor da parcela em atraso
    printf("O valor da parcela em atraso é: R$ %.2lf\n", valor_parcela_em_atraso);

    return 0;
}
