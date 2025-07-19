# include <stdio.h>

int main() {

    int valor1;
    int valor2;

    printf(" Entre com um número inteiro:\n");
    scanf("%i", &valor1);

    printf("Entre com outro valor inteiro:\n");
    scanf("%i", &valor2);

    int soma = valor1 + valor2;

    printf("Soma = %i\n", soma);

    return 0;
}
