#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

bool isVogal (char msg[]);
bool isConsoante (char msg[]);
bool isInteiro (char msg[]);
bool isReal (char msg[]);

bool isVogal (char msg[]) {
    bool sim = true;

    for (int i=0;i<strlen(msg)-1;i++) {
        if ((msg[i]>=65 && msg[i]<=90) || (msg[i]>=97 && msg[i]<=122)) {
            if (!(msg[i]==65 || msg[i]==69 || msg[i]==73 || msg[i]==79 || msg[i]==85) && !(msg[i]==97 || msg[i]==101 || msg[i]==105 || msg[i]==111 || msg[i]==117)) {
                sim = false;
            }
        } else {
            sim = false;
        }
    }

    return sim;
}

bool isConsoante (char msg[]) {
    bool sim = true;

    for (int i=0;i<strlen(msg)-1;i++) {
        if ((msg[i]>=65 && msg[i]<=90) || (msg[i]>=97 && msg[i]<=122)) {
            if ((msg[i]==65 || msg[i]==69 || msg[i]==73 || msg[i]==79 || msg[i]==85) || (msg[i]==97 || msg[i]==101 || msg[i]==105 || msg[i]==111 || msg[i]==117)) {
                sim = false;
            }
        } else {
            sim = false;
        }
    }

    return sim;
}

bool isInteiro (char msg[]) {
    bool sim = true;

    for (int i=0;i<strlen(msg)-1;i++) {
        if (!(msg[i]>=48 && msg[i]<=57)) {
            sim = false;
        }
    }

    return sim;
}

bool isReal (char msg[]) {
    bool sim = true;
    int pont=0;

    for (int j=0;j<strlen(msg)-1;j++) {
        if (msg[j]==44 || msg[j]==46) {
            pont++;
        }
    }
    for (int i=0;i<strlen(msg)-1;i++) {
        if ((msg[i]<48 || msg[i]>57)) {
            if (msg[i]!=44 && msg[i]!=46) {
                sim = false;
            }
        }
        if (pont>1) {
            sim = false;
        }
    }

    return sim;
}

int main() {

    setlocale(LC_ALL,"Portuguese_Brazil");

    char msg[700];

    fflush(stdin);
    fgets(&msg[0],700,stdin);
    while (!(msg[0]=='F' && msg[1]=='I' && msg[2]=='M')) {
        if (isVogal(msg)) {
            printf("SIM ");
        } else {
            printf("NAO ");
        }
        if (isConsoante(msg)) {
            printf("SIM ");
        } else {
            printf("NAO ");
        }
        if (isInteiro(msg)) {
            printf("SIM ");
        } else {
            printf("NAO ");
        }
        if (isReal(msg)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        fflush(stdin);
        fgets(&msg[0],700,stdin);
    }
    return 0;
}
