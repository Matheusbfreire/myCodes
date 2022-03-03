#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    FILE *seunome;
    FILE *seunome1;

    int n=0,soma=0,vetor[11],c=0,achou=0,aux=0;

    printf("Quantos números você quer gravar?\n");
    scanf("%i",&n);
    if ((seunome = fopen("seunome.txt","w"))==NULL) {
        printf("Arquivo não existe!\n");
    } else {
        srand(time(NULL));
        for (int i=0;i<n;i++) {
            fprintf(seunome,"%i\n",(rand()%10)+85);
        }
    }
    fclose(seunome);
    if ((seunome1 = fopen("seunome.txt","r"))==NULL) {
        printf("Arquivo não existe!\n");
    } else {
        while (!feof(seunome)) {
            fscanf(seunome,"%i",&aux);
            for (int i=0;i<c;i++) {
                if (vetor[i]==aux) {
                    achou=1;
                }
            }
            if (!achou) {
                vetor[c]=aux;
                c++;
            }
            achou=0;
        }
    }
    if ((seunome1 = fopen("seunome1.txt","w"))==NULL) {
        printf("Arquivo não existe!\n");
    } else {
        for (int i=0;i<c;i++) {
            for (int x=0;x<vetor[i];x++) {
                soma+=(x+1);
            }
            fprintf(seunome1,"%i %i\n",vetor[i],soma);
            soma=0;
        }
    }
    fclose(seunome1);
    fclose(seunome);

    return 0;
}
