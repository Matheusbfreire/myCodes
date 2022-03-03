#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <string.h>

void ex01();
void ex02();
void ex03();
void ex04();
void ex05();
void ex06();
void ex07();
void ex08();
void ex09();
void ex10();

int main()
{
    setlocale(LC_ALL,"portuguese");

    int escolha;

    escolha=0;
    printf("1) Maior e menor palavra digitada.\n");
    printf("2) Contador de letras A.\n");
    printf("3) Posição de letras A.\n");
    printf("4) Ler duas palavras e mostrar as posições e quantas vezes ela aparece na primeira.\n");
    printf("5) Ler uma palavra e um caractere e mostrar as posições e quantas vezes apreceu na primeira.\n");
    printf("6) Ler string e mostrar quantas letras, números e caracteres especiais ela tem.\n");
    printf("7) Ler palavra e mostrar o inverso.\n");
    printf("8) Ler palavra e tirar espaços em branco.(Com string auxiliar)\n");
    printf("9) Ler palavra e tirar espaços em branco.(Sem string auxiliar)\n");
    printf("10) Ler uma palavra e uma string de 3 caracteres e mostrar as posições e quantas vezes apreceu na palavra.\n");
    printf("-------------------------------------------\n");
    printf("Qual exercício você quer executar?\n\n(ESCOLHA UM NÚMERO ENTRE 1 E 10)\n(PARA PARAR O PROGRAMA ESCREVA UM NÚMERO NEGATIVO)\n");
    scanf("%i",&escolha);
    while (escolha>=0) {
        if (escolha>=0) {
            switch (escolha) {
                case 1:
                    ex01();
                    break;
                case 2:
                    ex02();
                    break;
                case 3:
                    ex03();
                    break;
                case 4:
                    ex04();
                    break;
                case 5:
                    ex05();
                    break;
                case 6:
                    ex06();
                    break;
                case 7:
                    ex07();
                    break;
                case 8:
                    ex08();
                    break;
                case 9:
                    ex09();
                    break;
                case 10:
                    ex10();
                    break;
                default:
                    printf("O exercício não existe na lista!\n");
                    printf("-------------------------------------------\n");
            }
            printf("\n\n");
            system("pause");
            system("cls");
            printf("1) Maior e menor palavra digitada.\n");
            printf("2) Contador de letras A.\n");
            printf("3) Posição de letras A.\n");
            printf("4) Ler duas palavras e mostrar as posições e quantas vezes ela aparece na primeira.\n");
            printf("5) Ler uma palavra e um caractere e mostrar as posições e quantas vezes apreceu na primeira.\n");
            printf("6) Ler string e mostrar quantas letras, números e caracteres especiais ela tem.\n");
            printf("7) Ler palavra e mostrar o inverso.\n");
            printf("8) Ler palavra e tirar espaços em branco.(Com string auxiliar)\n");
            printf("9) Ler palavra e tirar espaços em branco.(Sem string auxiliar)\n");
            printf("10) Ler uma palavra e uma string de 3 caracteres e mostrar as posições e quantas vezes apreceu na palavra.\n");
            printf("-------------------------------------------\n");
            printf("Qual exercício você quer executar?\n\n(ESCOLHA UM NÚMERO ENTRE 1 E 10)\n(PARA PARAR O PROGRAMA ESCREVA UM NÚMERO NEGATIVO)\n");
            scanf("%i",&escolha);
         } else {
            printf("Obrigado por usar meu programa! :)\n");
            printf("-------------------------------------------\n");
        }
    }
    return 0;
}

void ex01()
{
    char pal[100],maior_tam[20],menor_tam[20],maior[20],menor[20];
    int c,x,y,z;

    c=x=y=z=1;

    while (x!=999) {
        printf("Digite uma string qualquer:\n(DIGITE 999 PARA PARAR O PROGRAMA)\n");
        fflush(stdin);
        gets(pal);
        x=atoi(pal);
        if (x!=999) {
            if (c==1) {
                strcpy(maior_tam,pal);
                strcpy(menor_tam,pal);
                strcpy(maior,pal);
                strcpy(menor,pal);
            } else {
                if (strlen(pal)>strlen(maior_tam)) {
                    strcpy(maior_tam,pal);
                }
                if (strlen(pal)<strlen(menor_tam)) {
                    strcpy(menor_tam,pal);
                }
                if (strcmp(pal,maior)>0) {
                    strcpy(maior,pal);
                }
                if (strcmp(pal,menor)<0) {
                    strcpy(menor,pal);
                }
            }
        }
        c++;
    }
    printf("Maior Tamanho = %s\nMenor Tamanho = %s\nMaior Lexicograficamente = %s\nMenor Lexicograficamente = %s\n",maior_tam,menor_tam,maior,menor);
    printf("\n-------------------------------------------\n");
}

void ex02()
{
    char palavra[50];
    int c,cont;

    cont=0;

    printf("Escreva uma palavra de no máximo 50 letras:\n");
    fflush(stdin);
    gets(palavra);
    for (c=0;palavra[c]!=NULL;c++) {
        if (palavra[c]=='a' || palavra[c]=='A') {
            cont++;
        }
    }
    printf("A palavra digitada tem um total de %i letras A nela.\n",cont);
    printf("-------------------------------------------\n");
}

void ex03()
{
    char palavra[50];
    int c,pos;

    pos=0;

    printf("Escreva uma palavra de no máximo 50 letras:\n");
    fflush(stdin);
    gets(palavra);
    printf("A letra A está nas posições ");
    for (c=0;palavra[c]!=NULL;c++) {
        if (palavra[c]=='a' || palavra[c]=='A') {
            pos=c+1;
            printf("%i ",pos);
        }
    }
    printf("\n-------------------------------------------\n");
}

void ex04()
{
    char palavra[51],letra;
    int c,pos,cont;

    pos=cont=0;

    printf("Escreva uma palavra de no máximo 50 letras:\n");
    scanf("%s",palavra);
    printf("Escreva uma letra para analizar dentro da palavra digitada acima:\n");
    fflush(stdin);
    scanf("%c",&letra);
    printf("A letra %c está nas posições ",letra);
    for (c=0;palavra[c]!=NULL;c++) {
        if (palavra[c]==letra) {
            pos=c+1;
            printf("%i ",pos);
            cont++;
        }
    }
    printf(", totalizando um total de %i aparições.\n",cont);
    printf("-------------------------------------------\n");
}

void ex05()
{
    char p[51],l,alf[53]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int c,cont,cont2,test;

    test=0;

    printf("Digite uma palavra de no máximo 50 caracteres:\n");
    scanf("%s",p);
    printf("Digite uma letra para análise dessa palavra:\n");
    fflush(stdin);
    scanf("%c",&l);
    for (c=0;alf[c]!=NULL;c++) {
        if (l==alf[c]) {
            test=1;
        }
    }
    if (test==1) {
        printf("A letra %c foi enconrada nas posições ",l);
        for (cont=0;p[cont]!=NULL;cont++) {
            if (p[cont]==l) {
                printf("%i ",cont+1);
                cont2++;
            }
        }
        printf(", totalizando um total de %i aparições.\n",cont2);
    } else {
        printf("O caractere digitado não existe no alfabeto!\n");
    }
    printf("-------------------------------------------\n");
}

void ex06()
{
    char p[51],letras[53]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",num[10]="0123456789";
    int c,cont,l,n,ca,x;

    l=n=ca=0;

    printf("Digite uma palavra de no máximo 50 caracteres:\n(NÃO UTILIZE ACENTOS)\n");
    scanf("%s",p);
    for (c=0;p[c]!=NULL;c++) {
        x=p[c];
        if ((65<=x && x<=90) || (97<=x && x<=122)) {
            l++;
        }
        if (48<=x && x<=57) {
            n++;
        }
        if (!(65<=x && x<=90) && !(97<=x && x<=122) && !(48<=x && x<=57)) {
            ca++;
        }
    }
    printf("Letras = %i\nNúmeros = %i\nOutros caracteres = %i\n",l,n,ca);
    printf("-------------------------------------------\n");
}

void ex07()
{
    char lista[51],listainv[51];
    int c,x,cont;

    cont=0;

    printf("Digite uma palavra de no máximo 50 caracteres:\n");
    scanf("%s",lista);
    printf("Inverti palavra digitada e ela ficou assim: ");
    for (c=strlen(lista)-1;c>=0;c--) {
        listainv[cont]=lista[c];
        printf("%c",listainv[cont]);
        cont++;
    }
    printf("\n-------------------------------------------\n");
}

void ex08()
{
    char p[51],p2[51];
    int c,pos,x;

    x=0;
    pos=-1;

    printf("Forneça uma string de 50 caracteres com espacos em branco:\n(NÃO UTILIZE ACENTOS)\n");
    fflush(stdin);
    scanf("%[^\n]",p);
    printf("A palavra sem espaços em brancos fica: ");
    for (c=0;c<=strlen(p)-1;c++) {
        if (!(p[c]==' ')) {
            pos++;
            p2[pos] = p[c];
            printf("%c",p2[pos]);
        }
    }
    printf("\n-------------------------------------------\n");
}

void ex09()
{
    char p[51];
    int c,pos,x;

    x=0;
    pos=-1;

    printf("Forneça uma string de 50 caracteres com espacos em branco:\n(NÃO UTILIZE ACENTOS)\n");
    fflush(stdin);
    scanf("%[^\n]",p);
    printf("A palavra sem espaços em brancos fica: ");
    for (c=0;c<=strlen(p)-1;c++) {
        if (!(p[c]==' ')) {
            pos++;
            p[pos] = p[c];
            printf("%c",p[pos]);
        }
    }
    printf("\n-------------------------------------------\n");
}

void ex10()
{
    char p1[51],p2[4];
    int c1,c2,c3,cont;

    cont=0;

    printf("Digite uma palavra de no máximo 50 caracteres:\n");
    scanf("%s",p1);
    printf("Digite uma palavra de no máximo 3 caracteres:\n");
    scanf("%s",p2);
    while (strlen(p2)<=0 && strlen(p2)>=4) {
        printf("ERRO: Digite uma palavra de no MÁXIMO 3 caracteres!");
        printf("\n-------------------------------------------\n");
        printf("Digite uma palavra de no máximo 3 caracteres:\n");
        scanf("%s",p2);
    }
    printf("A palavra '%s' se encontra dentro da palavra '%s' nas posições iniciais: ",p2,p1);
    if (strlen(p2)==1) {
        for (c1=0;c1<=strlen(p1)-1;c1++) {
            if (p2[0]==p1[c1]) {
                printf("%i ",c1+1);
                cont++;
            }
        }
    }
    if (strlen(p2)==2) {
        for (c1=0,c2=1;c2<=strlen(p1)-1;c1++,c2++) {
            if (p2[0]==p1[c1] && p2[1]==p1[c2]) {
                printf("%i ",c1+1);
                cont++;
            }
        }
    }
    if (strlen(p2)==3) {
        for (c1=0,c2=1,c3=2;c3<=strlen(p1)-1;c1++,c2++,c3++) {
            if (p2[0]==p1[c1] && p2[1]==p1[c2] && p2[2]==p1[c3]) {
                printf("%i ",c1+1);
                cont++;
            }
        }
    }
    printf("\n\Número de vezes que a palavra '%s' aparece dentro da palavra '%s': %i\n",p2,p1,cont);
    printf("-------------------------------------------\n");
}
