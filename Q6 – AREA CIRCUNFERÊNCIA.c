/*Q6 – AREA CIRCUNFERÊNCIA – Crie uma aplicação de será responsável por calcular a área de uma
circunferência (pesquise caso tenha dúvidas de como calcular a área de uma circunferência).
Lucas Timponi Mercadante Castro | Ra: 2304913*/
#include <stdio.h>
#include <math.h> // Usamos a biblioteca math.h para o valor de pi

int main() {
    printf("Calculadora de Área de Circunferência\n");

    double raio, area;

    // Solicita ao usuário o raio da circunferência
    printf("Digite o raio da circunferência: ");
    scanf("%lf", &raio);

    // Verifica se o raio é válido (não pode ser negativo)
    if (raio < 0) {
        printf("O raio não pode ser negativo.\n");
    } else {
        // Calcula a área da circunferência
        area = M_PI * pow(raio, 2); 

        // Exibe a área da circunferência
        printf("A área da circunferência é: %.2lf\n", area);
    }

    return 0;
}
