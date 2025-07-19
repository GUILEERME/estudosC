# include <stdio.h>

int main(){

    float temperaturaCelsius;

    printf("Entre com a temperatura em Celsius:\n");
    scanf("%f" , &temperaturaCelsius);

    float fahrenheit = temperaturaCelsius * 9/5 + 32;

    printf(" Temperatura em fahrenheit = %.2f " , fahrenheit);



    return 0;
}
