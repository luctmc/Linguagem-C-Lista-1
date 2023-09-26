/*Q4 – CALCULAR A QUANTIDADE DE DIAS VIVIDOS – Crie uma aplicação console que solicite do usuário
o ano de nascimento e o ano atual, baseado nestas duas informações exibida a quantidade de dias
vividos até o momento, considere que cada ano contém 365 dias.
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>

int main() {
    printf("Calculadora de Dias Vividos\n");

    int ano_nascimento, ano_atual;
    int dias_vividos;

    // Solicita ao usuário o ano de nascimento
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // Solicita ao usuário o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // Verifica se os anos são válidos
    if (ano_nascimento > ano_atual) {
        printf("Ano de nascimento deve ser menor ou igual ao ano atual.\n");
    } else {
        // Calcula a quantidade de dias vividos
        dias_vividos = (ano_atual - ano_nascimento) * 365;

        // Exibe a quantidade de dias vividos
        printf("Você viveu aproximadamente %d dias até o momento.\n", dias_vividos);
    }

    return 0;
}
