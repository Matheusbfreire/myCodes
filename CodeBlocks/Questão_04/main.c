#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void ex01();
void ex02();
void ex03();
void menu();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    menu();
    printf("Escolha uma questão:\n(DIGITE 0 PARA PARAR O PROGRAMA)\n");
    scanf("%i",&escolha);
    printf("-------------------------------------------\n");

    do {
        if (escolha!=0) {
            switch (escolha) {
                case 1:
                    ex01();
                    break;
                case 2:
                    ex02();
                    break;
                case 3:
                    ex03();
                    break;
                default:
                    printf("O exercício não existe na lista!\n");
                    printf("-------------------------------------------\n");
            }
            printf("\n\n");
            system("pause");
            system("cls");
            menu();
            printf("Escolha uma questão:\n(DIGITE 0 PARA PARAR O PROGRAMA)\n");
            scanf("%i",&escolha);
            printf("-------------------------------------------\n");
         } else {
            printf("Obrigado por usar meu programa! :)\n");
            printf("-------------------------------------------\n");
        }
    } while (escolha!=0);
    printf("\n");
    return 0;
}

void menu()
{
    printf("-------------------------------------------\n");
    printf("1) Política de desconto de uma loja.\n");
    printf("2) Cadeia de 40 caracteres de letras maiúsculas.\n");
    printf("3) Cadastro de pessoas.\n");
    printf("-------------------------------------------\n\n");
}

void ex01()
{
    char produto[51];
    int venda;
    float preco,valor_venda=0,desconto=0;

    printf("Qual o nome do produto?\n");
    fflush(stdin);
    scanf("%[^\n]",produto);
    printf("Quantas unidades você vendeu desse produto?\n");
    scanf("%i",&venda);
    printf("Qual o preço unitário desse produto?\n");
    scanf("%f",&preco);
    valor_venda=venda*preco;
    printf("-------------------------------------------\n");
    printf("PRODUTO: %s\n",produto);
    if (valor_venda<=200) {
        printf("VALOR A PAGAR: R$%.2f\n",valor_venda);
    } else {
        if (valor_venda<=1000) {
            desconto=valor_venda*0.95;
            printf("VALOR A PAGAR: R$%.2f\n",desconto);
        } else {
            if (valor_venda<=2000) {
                desconto=valor_venda*0.9;
                printf("VALOR A PAGAR: R$%.2f\n",desconto);
            } else {
                desconto=valor_venda*0.85;
                printf("VALOR A PAGAR: R$%.2f\n",desconto);
            }
        }
    }
    printf("-------------------------------------------\n");
}

void ex02()
{
    char cadeia[41];
    int x=0,c;

    printf("Digite uma cadeia de caracteres de no máximo 40:\n(TODAS AS LETRAS DIGITADAS DEVEM SER MAIÚSCULAS)\n");
    fflush(stdin);
    scanf("%[^\n]",cadeia);
    for (c=0;c<=strlen(cadeia)-1;) {
        x=cadeia[c];
        if (!(x<=90 && 65<=x)) {
            printf("ERRO: Sua cadeia deve ter somente letras maiúsculas!\n");
            printf("Tente novamente:\n");
            fflush(stdin);
            scanf("%[^\n]",cadeia);
            c=0;
        } else {
            c++;
        }
    }
    printf("Parabéns, você digitou somente letras maiúsculas!");
}

void ex03()
{
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
}
