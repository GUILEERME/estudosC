# include <stdio.h>
# include <math.h>

int main() {

    float valor1;
    float valor2;

    printf(" Digite o primeiro valor: ");
    scanf("%f" , &valor1);

    printf(" Digite o segundo valor: ");
    scanf("%f" , &valor2);

    float soma = valor1 + valor2;

    float subtracao = valor1 - valor2;

    float multiplicacao = valor1 * valor2;

    float divisao = valor1 / valor2;

   float resto = fmod(valor1, valor2);

  printf("Soma = %.2f\n Subtração = %.2f\n Multiplicação = %.2f\n Divisão = %.2f\n Resto = %.2f\n" , soma , subtracao , multiplicacao , divisao , resto );

    return 0;
}
