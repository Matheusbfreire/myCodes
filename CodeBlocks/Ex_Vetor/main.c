#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include "Procedimentos.h"

void menu();
void main_01();
void lerVetorA(int *A, int tam);
void vetorFatorial(int *A, int *B, int tam);
void mostrarVetorA(int *A, int tam);
void mostrarVetorB(int *B, int tam);
void main_02();
void lerVetorB(int *B, int tam);
int vetorC(int *C, int *A, int *B, int tam);
void mostrarVetorC(int *C, int tam);
void main_03();
void inverterVetorA(int *A, int *B, int tam);
void main_04();
void verificarParImpar(int *A, int *ParImpar, int tam);
void main_05();
void ordenaA(int *A, int tam);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    menu();
    printf("----------------------------------------\n");
    printf("Escolha um exercício para ser executado:\n");
    printf("----------------------------------------\n");
    printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("---------------------------------\n");
    scanf("%i",&escolha);
    while (escolha!=-1) {
        switch (escolha){
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
                printf("ERRO: Exercício não existe na lista!\n");
                printf("------------------------------------\n");
                break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("----------------------------------------\n");
        printf("Escolha um exercício para ser executado:\n");
        printf("----------------------------------------\n");
        printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("---------------------------------\n");
        scanf("%i",&escolha);
    }
    return 0;
}

void menu()
{
    printf("1. Fatorial.\n");
}

void main_01()
{
    int A[15],B[15];

    lerVetorA(A, 15);
    vetorFatorial(A, B, 15);
    printf("Vetor A: ");
    mostrarVetorA(A, 15);
    printf("Vetor B: ");
    mostrarVetorB(B, 15);
}

void lerVetorA(int *A, int tam)
{
    for (int i=0;i<tam;i++) {
        printf("Elemento %i: ",i+1);
        scanf("%d",&A[i]);
    }
}

void vetorFatorial(int *A, int *B, int tam)
{
    for (int i=0;i<tam;i++) {
        B[i] = fatorial(A[i]);
    }
}

void mostrarVetorA(int *A, int tam)
{
    for (int i=0;i<tam;i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void mostrarVetorB(int *B, int tam)
{
    for (int i=0;i<tam;i++) {
        printf("%d ",B[i]);
    }
    printf("\n");
}

void main_02()
{
    int A[10],B[10],C[10],tam=0;

    printf("--------\n");
    printf("Vetor A:\n");
    printf("--------\n");
    lerVetorA(A, 10);
    printf("--------\n");
    printf("Vetor B:\n");
    printf("--------\n");
    lerVetorB(B, 10);
    tam = vetorC(C, A, B, 10);
    printf("Vetor C: ");
    printf("----------------------\n");
    mostrarVetorC(C, tam);
}

void lerVetorB(int *B, int tam)
{
    for (int i=0;i<tam;i++) {
        printf("Elemento %i: ",i+1);
        scanf("%d",&B[i]);
    }
}

int vetorC(int *C, int *A, int *B, int tam)
{
    int igual=0,cont=9;

    for (int i=0;i<tam;i++) {
        C[i]=A[i];
    }
    for (int i=0;i<tam;i++) {
        for (int c=0;c<tam;c++) {
            if (B[i]==C[c]) {
                igual=1;
            }
        }
        if (igual==0) {
            cont++;
            C[cont]=B[i];
        } else {
            igual=0;
        }
    }

    return cont+1;
}

void mostrarVetorC(int *C, int tam)
{
    for (int i=0;i<tam;i++) {
        printf("%d ",C[i]);
    }
    printf("\n");
}

void main_03()
{
    int A[20],B[20];

    lerVetorA(A,20);
    inverterVetorA(A,B,20);
    printf("----------------------\n");
    printf("Vetor A: ");
    mostrarVetorA(A,20);
}

void inverterVetorA(int *A, int *B, int tam)
{
    int c=0;

    for (int i=tam-1;i>=0;i--) {
        B[i]=A[c];
        c++;
    }
    for (int i=0;i<tam;i++) {
        A[i]=B[i];
    }
}

void main_04()
{
    int A[10],ParImpar[2];

    lerVetorA(A,10);
    verificarParImpar(A,ParImpar,10);
    printf("Total de números pares digitados: %d\n",ParImpar[0]);
    printf("Total de números ímpares digitados: %d\n",ParImpar[1]);
}

void verificarParImpar(int *A, int *ParImpar, int tam)
{
    int x=0;

    ParImpar[0]=0;
    ParImpar[1]=0;

    for (int i=0;i<tam;i++) {
        x=A[i];
        x=x%2;
        ParImpar[x]+=1;
    }
}

void main_05()
{
    int A[10];

    lerVetorA(A,10);
    ordenaA(A,10);
    printf("----------------------\n");
    printf("Vetor A: ");
    mostrarVetorA(A,10);
}

void ordenaA(int *A, int tam)
{
    int troca=0,c=0;

    for (int i=0;i<tam;i++) {
        c=i;
        for (;c<tam;c++) {
            if (A[c]<A[i]) {
                troca=A[c];
                A[c]=A[i];
                A[i]=troca;
            }
        }
    }
}
