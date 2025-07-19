# include <stdio.h>

int main(){

    float valor1;
    float valor2;
    float valor3;

    printf("Entre com a nota do primeiro trimestre:\n");
    scanf("%f", &valor1);

    printf("Entre com a nota do segundo trimestre:\n");
    scanf("%f" , &valor2);

    printf("Entre com a nota do terceiro trimestre:\n");
    scanf("%f", &valor3);

    float soma = valor1 + valor2 + valor3;

    float media = soma / 3;

    printf(" Média final = %.2f\n", media);

    return 0;
}
