//Enunciado:Q1 – CALCULAR A MÉDIA NOTAS – Crie uma aplicação console que dado o valor de 3 notas escolares de 0 a 10 deverá calcular a média//

#include <stdio.h>

int main() {
    printf("Calculadora de Média de Notas\n");

    double nota1, nota2, nota3;

    printf("Digite a primeira nota (de 0 a 10): ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota (de 0 a 10): ");
    scanf("%lf", &nota2);

    printf("Digite a terceira nota (de 0 a 10): ");
    scanf("%lf", &nota3);

    if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
        printf("Por favor, insira notas válidas (de 0 a 10).\n");
    } else {

        double media = (nota1 + nota2 + nota3) / 3.0;

        printf("A média das notas é: %.2lf\n", media);
    }

    return 0;
}
