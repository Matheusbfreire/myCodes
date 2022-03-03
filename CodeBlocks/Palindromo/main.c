#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include<stdbool.h>

bool testePalindromo(char ent[]);

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char entrada[700];

    fgets(entrada,700,stdin);
    while (!(entrada[0]=='F' && entrada[1]=='I' && entrada[2]=='M')) {
        if(testePalindromo(entrada)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        fgets(entrada,700,stdin);
    }
    return 0;
}


bool testePalindromo(char ent[]) {
    bool sim = true;
    char entInvertido[700];
    int j=0;
    int c=0;

    for (int i=(strlen(ent)-1);i>=0;i--,j++) {
        entInvertido[i]=ent[j-1];
    }
    for (int i=0;i<strlen(ent)-1;i++) {
        if (entInvertido[i]==ent[i]) {
            c++;
        }
    }
    if (c!=strlen(ent)-1) {
        sim = false;
    }
    return sim;
}
