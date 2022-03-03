#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

void menu();
void main_01(int m[10][10]);
void gerarMatriz(int m[10][10]);
void mostrarMatriz(int m[10][10]);
void main_02(int m[10][10]);
void maiorMatriz(int m[10][10], int *maior);
void maiorPos(int m[10][10], int a);
void menorMatriz(int m[10][10], int *menor);
void menorPos(int m[10][10], int a);
void main_03(int m[10][10]);
int somaDiagonal(int m[10][10]);
void main_04(int m[10][10]);
void main_05(int m[10][10]);
void verificaMatriz(int m[10][10], int n);
void main_06();
int lerNVetor();
float * vetor(int n);
void mostrarVetor(float *v, int n);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int matriz[10][10], escolha=0;

    menu();
    printf("--------------------------------------\n");
    printf("Escolha um programa para ser executado\n(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("--------------------------------------\n");
    scanf("%i",&escolha);
    printf("--------------------------------------\n");
    while (escolha>=0) {
        switch (escolha) {
            case 1:
                main_01(matriz);
                break;
            case 2:
                main_02(matriz);
                break;
            case 3:
                main_03(matriz);
                break;
            case 4:
                main_04(matriz);
                break;
            case 5:
                main_05(matriz);
                break;
            case 6:
                main_06();
                break;
            default:
                printf("ERRO: O exercício escolhido não existe\n");
                printf("--------------------------------------\n");
                break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("--------------------------------------\n");
        printf("Escolha um programa para ser executado\n(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("--------------------------------------\n");
        scanf("%i",&escolha);
        printf("--------------------------------------\n");
    }

    return 0;
}

void menu()
{
    printf("1. Criar e mostrar matriz 10x10.\n");
    printf("2. Maior e menor valor em uma matriz 10x10.\n");
    printf("3. Soma de diagonal principal de uma matriz 10x10.\n");
    printf("4. Elmento de uma posição passada por usuário em uma matriz 10x10.\n");
    printf("5. Verificar elemento em uma matriz 10x10.\n");
    printf("6. Vetor com números reais entre 30 e 50.\n");
}

void main_01(int m[10][10])
{
    printf("---------\n");
    printf("ENUNCIADO\n");
    printf("---------\n");
    printf("Preencher uma matriz  de 10 x 10  posições com valores aleatórios de 15 a 50 (utilize para cada número a função rand–faça uma função que dados os valores inicial e final devolva um número aleatório dentro deste intervalo) Em seguida imprima os índices(i,j) da matriz e o valor correspondente, na forma de matriz.\n");
    printf("\n\n");
    gerarMatriz(m);
    mostrarMatriz(m);
}

void gerarMatriz(int m[10][10])
{
    int i=0, j=0;

    srand(time(NULL));

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            m[i][j]=((rand()%36)+15);
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

void main_02(int m[10][10])
{
    int maior=0, menor=0;

    printf("---------\n");
    printf("ENUNCIADO\n");
    printf("---------\n");
    printf("Escreva um procedimento que receba uma matriz 10x10 (passagem de parâmetro), imprimir o maior e o menor elemento da matriz bem como a posição de cada um.\n");
    printf("\n\n");
    gerarMatriz(m);
    mostrarMatriz(m);
    printf("\n\n");
    maiorMatriz(m,&maior);
    printf("Maior número e suas posições:\n");
    maiorPos(m,maior);
    menorMatriz(m,&menor);
    printf("Menor número e suas posições:\n");
    menorPos(m,menor);
}

void maiorMatriz(int m[10][10], int *maior)
{
    int i=0, j=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (i==0 && j==0) {
                *maior=m[i][j];
            } else if (m[i][j]>*maior) {
                *maior=m[i][j];
            }
        }
    }
}

void maiorPos(int m[10][10], int a)
{
    int i=0, j=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (m[i][j]==a) {
                printf("%i[%i][%i]\n",a,i,j);
            }
        }
    }
    printf("\n");
}

void menorMatriz(int m[10][10], int *menor)
{
    int i=0, j=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (i==0 && j==0) {
                *menor=m[i][j];
            } else if (m[i][j]<*menor) {
                *menor=m[i][j];
            }
        }
    }
}

void menorPos(int m[10][10], int a)
{
    int i=0, j=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (m[i][j]==a) {
                printf("%i[%i][%i]\n",a,i,j);
            }
        }
    }
    printf("\n");
}

void main_03(int m[10][10])
{
    printf("---------\n");
    printf("ENUNCIADO\n");
    printf("---------\n");
    printf("Escreva uma função que receba uma matriz 10x10 e retorne a soma dos elementos da diagonal principal.\n");
    printf("\n\n");
    gerarMatriz(m);
    mostrarMatriz(m);
    printf("\n\n");
    printf("Soma da diagonal principal da matriz:\n");
    printf("Total = %i",somaDiagonal(m));
}

int somaDiagonal(int m[10][10])
{
    int i=0, j=0, soma=0;

    for (i=0;i<10;i++) {
        for (j=0;j<10;j++) {
            if (i==j) {
                printf("[%i][%i]=%i\n",i,j,m[i][j]);
                soma+=m[i][j];
            }
        }
    }

    return soma;
}

void main_04(int m[10][10])
{
    int i=0, j=0, escolha=0;

    printf("---------\n");
    printf("ENUNCIADO\n");
    printf("---------\n");
    printf("Escreva um procedimento que receba uma matriz 10x10, peça ao usuário a posição [i,j] da matriz , e em seguida exiba o valor que esta na matriz nesta posição. FLAG -1.\n");
    printf("\n\n");
    gerarMatriz(m);
    mostrarMatriz(m);
    printf("\n\n");
    while (escolha!=-1) {
        printf("Digite a posição [i]:\n");
        scanf("%i",&i);
        printf("Digite a posição [j]:\n");
        scanf("%i",&j);
        printf("-----------\n");
        printf("[%i][%i]=%i\n",i,j,m[i][j]);
        printf("-----------------\n");
        printf("Deseja continuar?\n");
        printf("-----------------\n");
        printf("(DIGITE 1 PARA CONTINUAR)\n");
        printf("(DIGITE -1 PARA PARAR)\n");
        printf("----------------------\n");
        scanf("%i",&escolha);
        while (escolha!=1 && escolha!=-1) {
            printf("ERRO: Digite 1 ou -1\n");
            printf("---------------------\n");
            scanf("%i",&escolha);
        }
    }
}

void main_05(int m[10][10])
{
    int n=0, escolha=0;

    printf("---------\n");
    printf("ENUNCIADO\n");
    printf("---------\n");
    printf("Escreva um procedimento que receba uma matriz 10x10, e um número. O procedimento deverá verificar se o número está ou não na matriz. Se estiver imprima a(s) posição(ões) desse número e se não estiver imprima a mensagem valor não encontrado.\n");
    printf("\n\n");
    gerarMatriz(m);
    mostrarMatriz(m);
    printf("\n\n");
    while (escolha!=-1) {
        printf("Digite um número para ser verificado na matriz:\n");
        scanf("%i",&n);
        verificaMatriz(m,n);
        printf("-----------------\n");
        printf("Deseja continuar?\n");
        printf("-----------------\n");
        printf("(DIGITE 1 PARA CONTINUAR)\n");
        printf("(DIGITE -1 PARA PARAR)\n");
        printf("----------------------\n");
        scanf("%i",&escolha);
        while (escolha!=1 && escolha!=-1) {
            printf("ERRO: Digite 1 ou -1\n");
            printf("---------------------\n");
            scanf("%i",&escolha);
        }
    }
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
        printf("Número não encontrado na matriz!\n");
    }
    c=0;
}

void main_06()
{
    int n=0;
    float *veto;

    printf("---------\n");
    printf("ENUNCIADO\n");
    printf("---------\n");
    printf("Escrever um programa que leia um valor e chame a função e os procedimentos criados.\nConstrua uma função que retorne um vetor do tipo real, com valores aleatórios entre 30 e 50(intervalo fechado), de tamanho N – passe o tamanho N por valor.\nConstrua um procedimento para imprimir um vetor real de tamanho N – passe o vetor por referência e o tamanho N por valor.\n");
    printf("\n\n");
    n=lerNVetor();
    veto = malloc(n * sizeof(float));
    veto=vetor(n);
    mostrarVetor(veto,n);
}

int lerNVetor()
{
    int num=0;

    printf("Quantos números você quer no vetor:\n");
    scanf("%i",&num);

    return num;
}

float * vetor(int n)
{
    float *vet, x=0, y=0, z=0;

    vet = malloc(n * sizeof(float));
    srand(time(NULL));

    for (int i=0;i<n;i++) {
        x = (rand()%11);
        y = (rand()%11);
        z = ((rand()%21)+30);
        if (z==50) {
            x=y=0;
        }
        vet[i] = ((x/10)+(y/100)+z);
    }

    return vet;
}

void mostrarVetor(float *v, int n)
{
    printf("Vetor:\n");
    for (int i=0;i<n;i++) {
        printf("%i = %.2f\n",i+1,v[i]);
    }
}
