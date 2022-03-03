#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

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
    return 0;
}
