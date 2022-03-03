#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char x,y,z;

    printf("n) ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.\n");
    printf("Digite um caracter qualquer:\n");
    fflush(stdin);
    scanf("%c",&x);
    printf("Digite outro caracter qualquer:\n");
    fflush(stdin);
    scanf("%c",&y);
    printf("Digite mais um caracter qualquer:\n");
    fflush(stdin);
    scanf("%c",&z);
    if (x<y && y<z) {
        printf("Os caracteres em ordem crescente lexicograficamente são: %c, %c, %c",x,y,z);
    } else {
        if (z<y && y<x) {
            printf("Os caracteres em ordem crescente lexicograficamente são: %c, %c, %c",z,y,x);
        }
    }
    if (y<x && x<z) {
        printf("Os caracteres em ordem crescente lexicograficamente são: %c, %c, %c",y,x,z);
    } else {
        if (z<x && x<y) {
            printf("Os caracteres em ordem crescente lexicograficamente são: %c, %c, %c",z,x,y);
        }
    }
    if (x<z && z<y) {
        printf("Os caracteres em ordem crescente lexicograficamente são: %c, %c, %c",x,z,y);
    } else {
        if (y<z && z<x) {
            printf("Os caracteres em ordem crescente lexicograficamente são: %c, %c, %c",y,z,x);
        }
    }
    return 0;
}
