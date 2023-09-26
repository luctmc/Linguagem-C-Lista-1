/*Q5 – CALCULAR O GASTO TOTAL DA FACULDADE – Crie uma aplicação consome que deverá calcular o
valor mensal/anual total gasto com a faculdade, esse cálculo deverá ser composto por: a) Valor da
mensalidade; b) Custo com transporte (van, ônibus, uber, taxi, carona, etc. cada aluno deverá adicionar
o custo de transporte de acordo com seu uso); c) Custo de alimentação (lanches, refrigerantes, etc.).
No final o sistema deverá exibir o custo total mensal e anual.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Calculadora de Gasto Total com a Faculdade\n");

    double mensalidade, custo_transport, custo_alimentacao;
    double custo_total_mensal, custo_total_anual;

    // Solicita ao usuário o valor da mensalidade
    printf("Digite o valor da mensalidade: ");
    scanf("%lf", &mensalidade);

    // Solicita ao usuário o custo de transporte mensal
    printf("Digite o custo de transporte mensal: ");
    scanf("%lf", &custo_transport);

    // Solicita ao usuário o custo de alimentação mensal
    printf("Digite o custo de alimentação mensal: ");
    scanf("%lf", &custo_alimentacao);

    // Calcula o custo total mensal
    custo_total_mensal = mensalidade + custo_transport + custo_alimentacao;

    // Calcula o custo total anual multiplicando por 12 (meses)
    custo_total_anual = custo_total_mensal * 12;

    // Exibe o custo total mensal e anual
    printf("O custo total mensal com a faculdade é: R$ %.2lf\n", custo_total_mensal);
    printf("O custo total anual com a faculdade é: R$ %.2lf\n", custo_total_anual);

    return 0;
}
