/*Enunciado:Q3 – CALCULAR A MÉDIA SEMESTRAL DA DISCIPLINA – Crie uma aplicação console que dados o valor de 04
 (notas: atividades presenciais, atividade online, prova 1, prova 2) notas escolares de 0 a 10 deverá calcular a média levando em consideração os pesos 10%, 20%, 30% e 40%*/
//Lucas Timponi Mercadante Castro | RA: 2304913//
#include <stdio.h>

int main() {
    printf("Calculadora de Média Semestral da Disciplina\n");

    double nota_presencial, nota_online, nota_prova1, nota_prova2;
    double peso_presencial = 0.10, peso_online = 0.20, peso_prova1 = 0.30, peso_prova2 = 0.40;
    double media_semestral;

    // Solicita ao usuário que insira as quatro notas
    printf("Digite a nota das atividades presenciais (de 0 a 10): ");
    scanf("%lf", &nota_presencial);

    printf("Digite a nota das atividades online (de 0 a 10): ");
    scanf("%lf", &nota_online);

    printf("Digite a nota da prova 1 (de 0 a 10): ");
    scanf("%lf", &nota_prova1);

    printf("Digite a nota da prova 2 (de 0 a 10): ");
    scanf("%lf", &nota_prova2);

    // Verifica se as notas estão dentro do intervalo de 0 a 10
    if (nota_presencial < 0 || nota_presencial > 10 || nota_online < 0 || nota_online > 10 || nota_prova1 < 0 || nota_prova1 > 10 || nota_prova2 < 0 || nota_prova2 > 10) {
        printf("Por favor, insira notas válidas (de 0 a 10).\n");
    } else {
        // Calcula a média semestral ponderada
        media_semestral = (nota_presencial * peso_presencial) + (nota_online * peso_online) + (nota_prova1 * peso_prova1) + (nota_prova2 * peso_prova2);

        // Exibe a média semestral
        printf("A média semestral da disciplina é: %.2lf\n", media_semestral);
    }

    return 0;
}
