#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char x,y,z;

    printf("m) ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois.\n");
    printf("Digite uma letra qualquer:\n");
    fflush(stdin);
    scanf("%c",&x);
    printf("Digite outra letra qualquer:\n");
    fflush(stdin);
    scanf("%c",&y);
    printf("Digite mais uma letra qualquer:\n");
    fflush(stdin);
    scanf("%c",&z);
    if (y<x && x<z || z<x && x<y) {
        printf("A primeira letra está entre as outras duas!\n");
    } else {
        printf("A primeira letra não está entre as outras duas!\n");
    }
    return 0;
}
