#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void writeFile (int x);
void readFile (int x);

int main()
{
    FILE *file;

    int x;

    file = fopen("file.txt", "a+b");
    fclose(file);

    scanf("%i",&x);

    writeFile(x);
    readFile(x);

    return 0;
}

void writeFile (int x)
{
    FILE *file;

    double c;

    if ((file = fopen("file.txt","r+b"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        for(int i=0; i<x; i++) {
            scanf("%lf",&c);
            fprintf(file,"%lf\n",c);
        }
        fclose(file);
    }
}

void readFile (int x)
{
    FILE *file;

    float c[x];
    int z=0;

    if ((file = fopen("file.txt","rb"))==NULL) {
        printf("Erro de abertura!\n");
    } else {
        for(int i=x-1; i>=0; i--) {
            fscanf(file,"%f",&c[i]);
        }
        for (int j=0; j<x; j++) {
            z=c[j];
            if (c[j]-z==0) {
                printf("%i\n",z);
            }else {
                printf("%g\n",c[j]);
            }
        }
        fclose(file);
    }
}
