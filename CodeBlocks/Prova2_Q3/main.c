#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

void gerarMatriz(int m[10][10]);
void mostrarMatriz(int m[10][10]);
float mediaMatriz(int m[10][10]);
void verificaMatriz(int m[10][10], int n);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[10][10], n=0;
    float med=0;

    gerarMatriz(matriz);
    mostrarMatriz(matriz);
    med = mediaMatriz(matriz);
    printf("\n\n");
    printf("Média dos números das linhas 1, 3 e 5: %.2f",med);
    printf("\n\n");
    printf("Digite um número para ser verificado na matriz:\n");
    scanf("%i",&n);
    printf("\nVocê digitou: %i\n",n);
    printf("O triplo desse número é: %i\n\n",n*3);
    printf("Verificando se há o número %i na matriz...\n\n",n*3);
    verificaMatriz(matriz,n*3);

    return 0;
}

void gerarMatriz(int m[10][10])
{
    int i=0, j=0;

    srand(time(NULL));

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            m[i][j]=((rand()%11)+60);
        }
    }
}

void mostrarMatriz(int m[10][10])
{
    int i=0, j=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
                printf("[%i][%i]=%i ",i,j,m[i][j]);
        }
        printf("\n");
    }
}

float mediaMatriz(int m[10][10])
{
    int i=0, j=0;
    float media=0, soma=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (i==1 || i==3 || i==5) {
                soma+=m[i][j];
            }
        }
    }
    media=soma/30;

    return media;
}

void verificaMatriz(int m[10][10], int n)
{
    int i=0, j=0, c=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (m[i][j]==n) {
                printf ("[%i][%i]=%i\n",i,j,n);
                c=1;
            }
        }
    }
    if (c==0) {
        printf("%i não encontrado na matriz!\n",n);
    }
    c=0;
}
