#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

void menu();
void main_01();
void main_02();
void main_03();
void main_04();
void main_05();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    menu();
    printf("----------------------------------------\n");
    printf("Escolha um exercício para ser executado.\n");
    printf("----------------------------------------\n");
    printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("---------------------------------\n");
    scanf("%i",&escolha);
    while (escolha!=-1) {
        switch (escolha) {
            case 1:
                main_01();
                break;
            case 2:
                main_02();
                break;
            case 3:
                main_03();
                break;
            case 4:
                main_04();
                break;
            case 5:
                main_05();
                break;
            default:
                printf("ERRO: Não existe esse exercício na lista!\n");
                printf("-----------------------------------------\n");
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("----------------------------------------\n");
        printf("Escolha um exercício para ser executado.\n");
        printf("----------------------------------------\n");
        printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("---------------------------------\n");
        scanf("%i",&escolha);
    }

    return 0;
}

void menu()
{
    printf("1. Gravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34 ...\n");
    printf("2. Ler o arquivo letra a e armazenar os dados em uma matriz 8 x 8 imprima essa matriz na tela.\n");
    printf("3. Ler o arquivo letra a e armazenar os dados em uma matriz 8 x 8 armazene essa matriz em um arquivo.\n");
    printf("4. Ler o arquivo letra ae armazenar os valores pares em um arquivo e os impares em outro arquivo.\n");
    printf("5. Ler o arquivo letra a e armazenar em um vetor apenas os primos, imprima esse vetor, e salve os dados desse vetor em um arquivo.\n");
}

void main_01()
{
    FILE * arquivo;
    float t1=0,t2=1,soma=1;

    if ((arquivo = fopen("arquivo.txt","w"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        for (int c=0;c<64;c++) {
            fprintf(arquivo,"%.0f\n",soma);
            soma=t1+t2;
            t1=t2;
            t2=soma;
        }
        fclose(arquivo);
        printf("Arquivo 'arquivo.txt' criado com sucesso!\n");
    }
}

void main_02()
{
    FILE * arquivo;

    int i=0, j=0;
    float m[8][8];

    main_01();

    if ((arquivo = fopen("arquivo.txt","r"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        while (!feof(arquivo)) {
            if (j!=0 && j%8==0) {
                j=0;
                i++;
            }
            fscanf(arquivo,"%f",&m[i][j]);
            j++;
        }
        fclose(arquivo);
    }
    for (i=0; i<8; i++) {
        for (j=0; j<8; j++) {
            printf("%14.0f ",m[i][j]);
        }
        printf("\n");
    }
}

void main_03()
{
    FILE * arquivo;
    FILE * arquivo_matriz;

    int i=0, j=0;
    float m[8][8];

    main_01();

    if ((arquivo = fopen("arquivo.txt","r"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        while (!feof(arquivo)) {
            if (j!=0 && j%8==0) {
                j=0;
                i++;
            }
            fscanf(arquivo,"%f",&m[i][j]);
            j++;
        }
        fclose(arquivo);
    }
    if ((arquivo_matriz = fopen("arquivo_matriz.txt","w"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        for (int i=0;i<8;i++) {
            for (int j=0; j<8; j++) {
                fprintf(arquivo_matriz,"%14.0f ",m[i][j]);
            }
            fprintf(arquivo_matriz,"\n");
        }
        fclose(arquivo_matriz);
        printf("Arquivo 'arquivo_matriz.txt' criado com sucesso!\n");
    }
}

void main_04()
{
    FILE * arquivo;
    FILE * arquivo_pares;
    FILE * arquivo_impares;

    float n[64];
    int c=0, i=0;

    main_01();

    if ((arquivo_pares = fopen("arquivo_pares.txt","w"))==NULL) {
        printf("Erro de abertura!\n");
    }
    if ((arquivo_impares = fopen("arquivo_impares.txt","w"))==NULL) {
        printf("Erro de abertura!\n");
    }
    if ((arquivo = fopen("arquivo.txt","r"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        while (!feof(arquivo)) {
            fscanf(arquivo,"%f",&n[c]);
            i=fmod(n[c],2);
            if (c!=64) {
                if (i==0) {
                    fprintf(arquivo_pares,"%.0f\n",n[c]);
                } else {
                    fprintf(arquivo_impares,"%.0f\n",n[c]);
                }
            }
            c++;
        }
        printf("Arquivo 'arquivo_pares.txt' criado com sucesso!\n");
        printf("Arquivo 'arquivo_impares.txt' criado com sucesso!\n");
        fclose(arquivo);
        fclose(arquivo_pares);
        fclose(arquivo_impares);
    }
}

void main_05()
{
    FILE * arquivo;
    FILE * arquivo_primos;

    float primo[64], n[64];
    int c=0, var=0, cont=0;

    main_01();

    if ((arquivo_primos = fopen("arquivo_primos.txt","w"))==NULL) {
        printf("Erro de abertura!\n");
    }
    if ((arquivo = fopen("arquivo.txt","r"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        while (!feof(arquivo)) {
            fscanf(arquivo,"%f",&n[c]);
            for (int i=2; i<n[c]; i++) {
                var=fmod(n[c],i);
                if (var==0) {
                    n[c]=0;
                }
            }
            c++;
        }
        printf("Vetor com primos: ");
        for (int i=0; i<64; i++) {
            if (n[i]!=0) {
                primo[cont]=n[i];
                printf("%.0f ",primo[cont]);
                fprintf(arquivo_primos,"%.0f\n",primo[cont]);
                cont++;
            }
        }
        printf("\n");
        printf("Arquivo 'arquivo_primos.txt' criado com sucesso!\n");
        fclose(arquivo);
        fclose(arquivo_primos);
    }
}
