#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char x;

    printf("o) ler um valor literal (caractere) do teclado e dizer se � uma letra mai�scula.\n");
    printf("Digite uma letra qualquer:\n");
    fflush(stdin);
    scanf("%c",&x);
    if ('A'<=x && x<='Z') {
        printf("A letra digitada � mai�scula!");
    } else {
        printf("A letra digitada n�o � mai�scula!");
    }
    return 0;
}
