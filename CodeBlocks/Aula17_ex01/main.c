#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,a,b,c,d;

    x=1;
    a=3;
    b=5;
    c=8;
    d=7;

    printf("Determine o resultado Lógico das Expressões a seguir, assinalando se são \nVerdadeira ou FalsasConsidere os seguintes valores para as variáveis:\nX = 1, A = 3, B = 5, C = 8 e D = 7\n");
    printf("\nTRUE = 1\nFALSE = 0\n");
    printf("\n1– NÃO (X>3): ");
    printf("%i\n",!(x>3));
    printf("2– (x<1) e NÃO (B>D): ");
    printf("%i e %i = %i\n",x<1,!(b>d),(x<1) && !(b>d));
    printf("3– NÃO (D<7) e (C>5): ");
    printf("%i e %i = %i\n",!(d<7),c>5,!(d<7) && (c>5));
    printf("4– NÃO (X>3) ou (C<7): ");
    printf("%i ou %i = %i\n",!(x>3),c<7,!(x>3) || (c<7));
    printf("5– (A>B) ou (C>B): ");
    printf("%i ou %i = %i\n",a>b,c>b,(a>b) || (c>b));
    printf("6– (X>=2): ");
    printf("%i\n",x>=2);
    printf("7– (X<1) e (B>=D): ");
    printf("%i e %i = %i\n",x<1,b>=d,(x<1) && (b>=d));
    printf("8- (D>0) ou (C>5): ");
    printf("%i ou %i = %i\n",d>0,c>5,(d>0) || (c>5));
    printf("9– NÃO (D>3) ou NÃO (B<7): ");
    printf("%i ou %i = %i\n",!(d>3),!(b<7),!(d>3) || !(b<7));
    printf("10– (A>B) ou NÃO (C>B): ");
    printf("%i ou %i = %i\n",a>b,!(c>b),(a>b) || !(c>b));
    return 0;
}
