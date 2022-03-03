#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

float * vetor(int n);
void ordenaVetor(float *veto, int n);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n=0;
    float *veto;

    printf("Quanto números você quer no vetor?\n");
    scanf("%i",&n);
    printf("\n");
    veto = malloc(n * sizeof(float));
    veto = vetor(n);
    printf("Vetor criado: ");
    for (int i=0;i<n;i++) {
        printf("%.2f ",veto[i]);
    }
    ordenaVetor(veto,n);
    printf("\n\nVetor ordenado: ");
    for (int i=0;i<n;i++) {
        printf("%.2f ",veto[i]);
    }
    printf("\n\n");

    return 0;
}

float * vetor(int n)
{
    float *vet, x=0, y=0, z=0;

    vet = malloc(n * sizeof(float));
    srand(time(NULL));

    for (int i=0;i<n;i++) {
        x = (rand()%11);
        y = (rand()%11);
        z = (rand()%16);
        if (z==15) {
            x=y=0;
        }
        vet[i] = ((x/10)+(y/100)+z);
    }

    return vet;
}

void ordenaVetor(float *veto, int n)
{
    int c=0;
    float menor=0;

    for (int i=0;i<n;i++) {
        menor=veto[i];
        c=i;
        for (;c<n;c++) {
            if (veto[c]<menor) {
                veto[i]=veto[c];
                veto[c]=menor;
                menor=veto[i];
            }
        }
    }
}
