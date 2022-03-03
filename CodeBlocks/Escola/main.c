#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y;
    float res;

    char c='%';

    printf("5.Uma escola tem x professores, dos quais y%c ensinam Cálculo.\nQuantos professores ensinam Matemática nessa escola?\n",c);
    printf("Defina um valor para x:\n");
    scanf("%i",&x);
    printf("Defina um valor para y%c:\n",c);
    scanf("%i",&y);
    res=x*y/100;
    printf("%i %i %i\n",x,y,res);
    printf("Nessa escola tem exatos %.0f%c professores de matemática!",res,c);
    return 0;
}
