#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char sex[2];
    int cod,id,c=0,homem_menor=0;
    float sal,soma=0,media,homem=0,maior,menor;

    while (cod>=0) {
        printf("---CADASTRO DE PESSOA---\n\n");
        printf("Qual a idade dessa pessoa?\n(CADASTRE PESSOAS COM MAIS DE 20 E MENOS DE 75 ANOS)\n");
        scanf("%i",&id);
        while (id<20 || id>75) {
            printf("ERRO: A pessoa cadastrada não está no intervalo de idade permitido!\nTente novamente:\n");
            scanf("%i",&id);
        }
        printf("Qual o sexo dessa pessoa?\n(M/F)\n");
        fflush(stdin);
        gets(sex);
        if (sex[0]=='M') {
            homem++;
            soma+=id;
            media=soma/homem;
            if (id<35) {
                homem_menor++;
            }
        }
        printf("Qual o salário dessa pessoa?\n");
        scanf("%f",&sal);
        if (c==0) {
            maior=sal;
            menor=sal;
        } else {
            if (sal>maior) {
                maior=sal;
            }
            if (sal<menor) {
                menor=sal;
            }
        }
        printf("Digite um código de pessoa:\n(DIGITE UM NÚMERO NEGATIVO PARA PARAR O PROGRAMA)\n");
        scanf("%i",&cod);
        printf("-------------------------------------------\n");
        c++;
    }
    printf("A) A média de idade dos homens do grupo é: %.2f\n",media);
    printf("B) O maior salário do grupo é R$%.2f e o menor é R$%.2f, a diferença entre eles é: R$%.2f\n",maior,menor,maior-menor);
    printf("C) No grupo tem um total de %i homens com menos de 35 anos\n",homem_menor);
    return 0;
}
