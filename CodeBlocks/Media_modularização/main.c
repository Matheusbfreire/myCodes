#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float media();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    float med=0;

    med=media();
    printf("A m�dia entre os valores digitados �: %.2f",med);
    return 0;
}

float media()
{
    int n=0;
    float soma=0,c=0,med=0;

    printf("Digite um n�mero qualquer\n");
    scanf("%i",&n);
    while (n>=0) {
        soma+= (float) n;
        c++;
        printf("Digite um n�mero qualquer\n");
        scanf("%i",&n);
    }
    med=soma/c;

    return  med;
}
