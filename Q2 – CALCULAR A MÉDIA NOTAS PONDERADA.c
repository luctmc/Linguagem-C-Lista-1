//Enunciado:Q2 – CALCULAR A MÉDIA NOTAS PONDERADA – Crie uma aplicação console que dado o valor de 3notas escolares de 0 a 10 deverá calcular a média levando em consideração os pesos 20%, 30% e 50%respectivamente// 
//Lucas Timponi Mercadante Castro | RA: 2304913//
#include <stdio.h>

int main() {
    printf("Calculadora de Média Ponderada de Notas\n");

    double nota1, nota2, nota3;
    double peso1 = 0.20, peso2 = 0.30, peso3 = 0.50;
    double media_ponderada;

    // Solicita ao usuário que insira as três notas
    printf("Digite a primeira nota (de 0 a 10): ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota (de 0 a 10): ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota (de 0 a 10): ");
    scanf("%lf", &nota3);

    // Verifica se as notas estão dentro do intervalo de 0 a 10
    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Por favor, insira notas válidas (de 0 a 10).\n");
    } else {
        // Calcula a média ponderada
        media_ponderada = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3);

        // Exibe a média ponderada
        printf("A média ponderada das notas é: %.2lf\n", media_ponderada);
    }

    return 0;
}
