#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char x;

    printf("o) ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.\n");
    printf("Digite uma letra qualquer:\n");
    fflush(stdin);
    scanf("%c",&x);
    if ('A'<=x && x<='Z') {
        printf("A letra digitada é maiúscula!");
    } else {
        printf("A letra digitada não é maiúscula!");
    }
    return 0;
}
