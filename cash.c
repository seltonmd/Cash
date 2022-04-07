#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Variáveis
    float dinheiro;
    int moeda25 = 0 , moeda10 = 0 , moeda5 = 0 , moeda1 = 0;


    // Loop entrada do valor
    do
    {
        dinheiro = get_float("Insira seu troco aqui: ");
    }
    while(dinheiro <= 0);

    // Conversão float a int
    int centavos = round(dinheiro * 100);

    //Contador de moedas de 25 centavos
    while(centavos > 25 || centavos == 25)
    {
        centavos = centavos - 25;

        moeda25++;
    }
    // Contador de moedas de 10 centavos
    while( centavos > 10 || centavos == 10)
    {
        centavos = centavos - 10;

        moeda10++;
    }
    // Contador de moedas de 5 centavos
    while( centavos > 5 || centavos == 5)
    {
        centavos = centavos - 5;

        moeda5++;
    }
    // Contador de moedas de 1 centavos
    while(centavos > 1 || centavos == 1)
       {
           centavos = centavos - 1;

        moeda1++;

       }

    printf("%i moedas de 25 centavos\n", moeda25);
    printf("%i moedas de 10 centavos\n", moeda10);
    printf("%i moedas de 5 centavos\n", moeda5);
    printf("%i moedas de 1 centavos\n", moeda1);
    printf("Sera necessário %i moedas para troco.\n", moeda25 + moeda10 + moeda5 + moeda1);
return 0;
}