/*Enunciado:Q7 – INFORMAÇÕES SALARIAIS – Crie uma aplicação que forneça várias informações salariais referente
ao salário de um determinado professor que ganha R$ 25,00 por hora/aula. A aplicação criada deverá
solicitar do usuário a quantidade de aulas semanais que o professor leciona, a partir do número de
horas semanais fornecidas o programa deverá exibir as seguintes informações: a) Salário mensal do
professor (considere que cada mês é composto por 4 semanas); b) Valor do vale alimentação que
corresponde a 10% do salário mensal; Valor do auxílio transporte que corresponde a 6% do salário
mensal; c) Salário total bruto que corresponde ao salário mensal acrescido do vale alimentação e
auxílio transporte; d) Valor de desconto de INSS que corresponde a 3% do salário mensal e desconto
de IR que corresponde a 4% do salário mensal; e) Valor do salário líquido, que corresponde ao salário
bruto mensal deduzido os descontos.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Calculadora de Informações Salariais para Professores\n");

    double valor_hora_aula = 25.0;
    double salario_mensal, vale_alimentacao, auxilio_transporte, salario_bruto, desconto_inss, desconto_ir, salario_liquido;
    int aulas_semanais;

    // Solicita ao usuário a quantidade de aulas semanais
    printf("Digite a quantidade de aulas semanais lecionadas pelo professor: ");
    scanf("%d", &aulas_semanais);

    // Calcula o salário mensal (considerando 4 semanas em um mês)
    salario_mensal = valor_hora_aula * aulas_semanais * 4;

    // Calcula o vale alimentação (10% do salário mensal)
    vale_alimentacao = 0.10 * salario_mensal;

    // Calcula o auxílio transporte (6% do salário mensal)
    auxilio_transporte = 0.06 * salario_mensal;

    // Calcula o salário bruto mensal
    salario_bruto = salario_mensal + vale_alimentacao + auxilio_transporte;

    // Calcula o desconto de INSS (3% do salário mensal)
    desconto_inss = 0.03 * salario_mensal;

    // Calcula o desconto de IR (4% do salário mensal)
    desconto_ir = 0.04 * salario_mensal;

    // Calcula o salário líquido (salário bruto mensal - descontos)
    salario_liquido = salario_bruto - (desconto_inss + desconto_ir);

    // Exibe as informações salariais
    printf("Salário mensal do professor: R$ %.2lf\n", salario_mensal);
    printf("Valor do vale alimentação: R$ %.2lf\n", vale_alimentacao);
    printf("Valor do auxílio transporte: R$ %.2lf\n", auxilio_transporte);
    printf("Salário total bruto: R$ %.2lf\n", salario_bruto);
    printf("Valor de desconto de INSS: R$ %.2lf\n", desconto_inss);
    printf("Valor de desconto de IR: R$ %.2lf\n", desconto_ir);
    printf("Salário líquido: R$ %.2lf\n", salario_liquido);

    return 0;
}
