#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a1,a2,n,an,r,sn;

    printf("j) Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.\n");
    printf("Qual o primeiro termo dessa P.A.?\n");
    scanf("%i",&a1);
    printf("Qual o segundo termo dessa P.A.?\n");
    scanf("%i",&a2);
    printf("Quantos termos tem essa P.A.?\n");
    scanf("%i",&n);
    r=a2-a1;
    an=((n-1)*r)+a1;
    sn=((a1+an)*n)/2;
    printf("A soma da P.A. cujo primeiro termo é %i e o segundo é %i e tem um total de %i termos é %i!",a1,a2,n,sn);
    return 0;
}
