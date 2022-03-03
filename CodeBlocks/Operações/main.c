#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y,A,x2,y3,xa,B,C,b2,pot;

    printf("2.Escreva um algoritmo para mostrar na tela o resultado de algumas operações\n");
    printf("(0)False\n(1)True\n");
    printf("\n");
    printf("a)2>3?%i\n",2>3);
    printf("-----------------------------------------------------\n");
    printf("b)4=4?%i\n",4==4);
    printf("-----------------------------------------------------\n");
    printf("c)Escolha dois valores para serem analisados!\n");
    printf("Escolha um valor pra x:\n");
    scanf("%i",&x);
    printf("Escolha um valor pra y:\n");
    scanf("%i",&y);
    printf("x>y?%i\n",x>y);
    printf("y>x?%i\n",y>x);
    printf("x=y?%i\n",x==y);
    printf("-----------------------------------------------------\n");
    printf("d)Escolha três valores para serem analisados!\n");
    printf("Escolha um valor pra x:\n");
    scanf("%i",&x);
    printf("Escolha um valor pra y:\n");
    scanf("%i",&y);
    printf("Escolha um valor pra A:\n");
    scanf("%i",&A);
    x2=pow(x,2);
    y3=pow(y,3);
    xa=pow(x,A+4);
    printf("x^2-y^3>x^(A+4)?%i\n",x2-y3>xa);
    printf("A<5?%i\n",A<5);
    printf("-----------------------------------------------------\n");
    printf("e)Escolha três valores para serem analisados!\n");
    printf("Escolha um valor pra A:\n");
    scanf("%i",&A);
    printf("Escolha um valor pra B:\n");
    scanf("%i",&B);
    printf("Escolha um valor pra C:\n");
    scanf("%i",&C);
    b2=pow(B,2);
    pot=pow(b2-4*A*C,0.5);
    printf("(-B+(B^2-4AC)^0.5)/2A=%i\n",(-B+pot)/2*A);
    printf("A!=0?%i",A!=0);
    return 0;
}
