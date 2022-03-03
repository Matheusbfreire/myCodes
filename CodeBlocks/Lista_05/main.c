#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

char pa[21],carac[2],cad[21];
int v1=0,v2=0;
float vr1=0,vr2=0;

void menu();
void main_01();
void palavra();
void maiusculas();
void main_02();
void caractere();
void transforma_maiu();
void analise();
void main_03();
void cadeia();
void letras();
void main_04();
void digitos();
void main_05();
void nao_dig_e_maiu();
void main_06();
void valores_int();
void valores_flag1();
void main_07();
void valores_flag2();
void main_08();
void valores_real();
void valores_real_flag();
void main_09();
void valores_real2();
void valores_real_flag2();
void main_10();
void alfanumericos();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0;

    menu();
    printf("-------------------------------------------------\n");
    printf("(ESCOLHA UM N�MERO ENTRE 1 E 10)\n(PARA PARAR O PROGRAMA ESCREVA UM N�MERO NEGATIVO)\n");
    printf("-------------------------------------------------\n");
    printf("Qual exerc�cio voc� quer executar?\n");
    scanf("%i",&escolha);
    while (escolha>=0) {
        if (escolha>=0) {
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
                case 6:
                    main_06();
                    break;
                case 7:
                    main_07();
                    break;
                case 8:
                    main_08();
                    break;
                case 9:
                    main_09();
                    break;
                case 10:
                    main_10();
                    break;
                default:
                    printf("O exerc�cio n�o existe na lista!\n");
                    printf("-------------------------------------------\n");
            }
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("-------------------------------------------------\n");
        printf("(ESCOLHA UM N�MERO ENTRE 1 E 10)\n(PARA PARAR O PROGRAMA ESCREVA UM N�MERO NEGATIVO)\n");
        printf("-------------------------------------------------\n");
        printf("Qual exerc�cio voc� quer executar?\n");
        scanf("%i",&escolha);
    }
    return 0;
}

void menu()
{
    printf("1) Identificar letras mai�sculas em uma palavra.\n");
    printf("2) An�lise entre palavra e caractere.\n");
    printf("3) An�lise de letras mai�sculas e min�sculas dentro de cadeia de caracteres.\n");
    printf("4) Contar e mostrar n�meros em cadeia de caracteres do fim at� o in�cio.\n");
    printf("5) Contar e mostrar o que n�o for n�mero nem letra min�scula em cadeia de caracteres.\n");
    printf("6) Leitura e an�lise de valores inteiros, em um intervalo e se s�o m�tiplos de 2 e 3.\n");
    printf("7) Leitura e an�lise de valores inteiros, em um intervalo e se s�o m�tiplos de 3 e n�o de 5.\n");
    printf("8) Leitura e an�lise de valores reais, em um intervalo e se s�o �MPARES.\n");
    printf("9) Contar e mostrar todos os valores lidos que tenham suas partes fracion�rias maiores que o intervalo de precis�o.\n");
    printf("10) Ler cadeia de caractere e mostrar os n�o alfanum�ricos.\n");
}

void main_01()
{
    palavra();
    printf("As letras mai�sculas digitadas s�o: ");
    maiusculas();
}

void palavra()
{
    printf("Digite uma palavra de no m�ximo 20 letras:\n");
    fflush(stdin);
    gets(pa);
}

void maiusculas()
{
    int x=0,c=0;

    for (c=0;c<=strlen(pa)-1;c++) {
        x=pa[c];
        if (65<=x && x<=90) {
            printf("%c ",pa[c]);
        }
    }
}

void main_02()
{
    palavra();
    caractere();
    transforma_maiu();
    analise();
}

void caractere()
{
    int x=0;

    printf("Digite um �nico caractere MAI�SCULO:\n");
    fflush(stdin);
    gets(carac);
    x=carac[0];
    while (strlen(carac)!=1 || !(65<=x && x<=90)) {
        printf("ERRO: Foi digitado mais de um caractere ou o caractere digitado n�o � MAI�SCULO!\n");
        printf("-------------------------------------------\n");
        printf("Digite um �nico caractere MAI�SCULO:\n");
        fflush(stdin);
        gets(carac);
        x=carac[0];
    }
}

void transforma_maiu()
{
    int x=0,c=0;

    for (c=0;c<=strlen(pa)-1;c++) {
        x=pa[c];
        if (97<=x && x<=122) {
            pa[c]=(x-32);
        }
    }
}

void analise()
{
    int x=0,z=0,men=0,mai=0,ig=0,c=0;

    z=carac[0];

    printf("Letras menores que %c de acordo com a tabela ASCII: ",carac[0]);
    for (c=0;c<=strlen(pa)-1;c++) {
        x=pa[c];
        if (x<z) {
            printf("%c ",pa[c]);
            men++;
        }
        if (x>z) {
            mai++;
        }
        if (z==x) {
            ig++;
        }
    }
    printf("// Total: %i.\n",men);
    printf("Total de letras maiores que %c de acordo com a tabela ASCII: %i.\n",carac[0],mai);
    printf("Total de letras iguais a %c: %i.\n",carac[0],ig);
}

void main_03()
{
    cadeia();
    letras();
}

void cadeia()
{
    printf("Digite uma cadeia de no m�ximo 20 caracteres aleat�rios:\n");
    fflush(stdin);
    gets(cad);
}

void letras()
{
    int x=0,mai=0,min=0,c=0;

    printf("Letras digitadas na cadeia: ");
    for (c=0;c<=strlen(cad)-1;c++) {
        x=cad[c];
        if (65<=x && x<=90) {
            mai++;
            printf("%c ",cad[c]);
        }
        if (97<=x && x<=122) {
            min++;
            printf("%c ",cad[c]);
        }
    }
    printf("\nMai�sculas: %i\nMin�sculas: %i",mai,min);
}

void main_04()
{
    cadeia();
    digitos();
}

void digitos()
{
    int x=0,c=0,ca=0;

    printf("N�meros digitados (DO FIM AT� O IN�CIO): ");
    for (c=strlen(cad)-1;c>=0;c--) {
        x=cad[c];
        if (48<=x && x<=57) {
            printf("%c ",cad[c]);
            ca++;
        }
    }
    printf("\nTotal de n�meros: %i",ca);
}

void main_05()
{
    cadeia();
    nao_dig_e_maiu();
}

void nao_dig_e_maiu()
{
    int x=0,c=0,ca=0;

    printf("Caracteres digitados (QUE N�O S�O N�MEROS NEM LETRAS MIN�SCULA): ");
    for (c=0;c<=strlen(cad)-1;c++) {
        x=cad[c];
        if (!(48<=x && x<=57) && !(97<=x && x<=122)) {
            printf("%c ",cad[c]);
            ca++;
        }
    }
    printf("\nTotal de caracteres (QUE N�O S�O N�MEROS NEM LETRAS MIN�SCULA): %i",ca);
}

void main_06()
{
    valores_int();
    valores_flag1();
}

void valores_int()
{
    int troca=0;

    printf("Digite um valor inteiro positivo:\n");
    scanf("%i",&v1);
    printf("Digite outro valor inteiro positivo:\n");
    scanf("%i",&v2);
    if (v2<v1) {
        troca=v2;
        v2=v1;
        v1=troca;
    }
}

void valores_flag1()
{
    int c=0,x=0;

    while (x!=-1) {
        printf("Digite um n�mero inteiro positivo:\n(DIGITE -1 PARA PARAR A LEITURA)\n(DIGITE NO M�XIMO 20 N�MEROS)\n");
        scanf("%i",&x);
        if ((v1<=x && x<=v2) && (x%2==0 && x%3==0)) {
            printf("------------------------------------------------------------------\n");
            printf("O n�mero %i � divis�vel por 2 e 3, e pertence ao intervalo %i<x<%i\n",x,v1,v2);
            printf("------------------------------------------------------------------\n");
            c++;
        }
    }
    printf("Um total de %i n�meros pertencem ao intervalo %i<x<%i e s�o divis�veis por 2 e 3.\n",c,v1,v2);
}

void main_07()
{
    valores_int();
    valores_flag2();
}

void valores_flag2()
{
    int c=0,x=0;

    while (x!=-1) {
        printf("Digite um n�mero inteiro positivo:\n(DIGITE -1 PARA PARAR A LEITURA)\n(DIGITE NO M�XIMO 20 N�MEROS)\n");
        scanf("%i",&x);
        if ((v1<=x && x<=v2) && (x%3==0 && x%5!=0)) {
            printf("------------------------------------------------------------------\n");
            printf("O n�mero %i � divis�vel por 3 e n�o por 5, e pertence ao intervalo %i<x<%i\n",x,v1,v2);
            printf("------------------------------------------------------------------\n");
            c++;
        }
    }
    printf("Um total de %i n�meros pertencem ao intervalo %i<x<%i e s�o divis�veis por 3 e n�o por 5.\n",c,v1,v2);
}

void main_08()
{
    valores_real();
    valores_real_flag();
}

void valores_real()
{
    float trocar=0;

    printf("Digite um valor real positivo:\n");
    scanf("%f",&vr1);
    printf("Digite outro valor real positivo:\n");
    scanf("%f",&vr2);
    if (vr2<vr1) {
        trocar=vr2;
        vr2=vr1;
        vr1=trocar;
    }
}

void valores_real_flag()
{
    int esc=0,c=0,x=0,cont=0;
    float valor=0;

    printf("Quantos n�meros voc� quer analisar?\n");
    scanf("%i",&esc);
    for (c=0;c<=esc-1;c++) {
        printf("Digite um n�mero real qualquer:\n");
        scanf("%f",&valor);
        x=valor;
        if ((vr1<=valor && valor<=vr2) && x%2!=0) {
            printf("----------------------------------------------------------\n");
            printf("O n�mero %.3f pertence ao intervalo %.3f<x<%.3f e � �MPAR.\n",valor,vr1,vr2);
            printf("----------------------------------------------------------\n");
            cont++;
        }
    }
    printf("Um total de %i n�meros pertencem ao intervalo %.3f<x<%.3f e s�o �MPARES.\n",cont,vr1,vr2);
}

void main_09()
{
    valores_real2();
    valores_real_flag2();
}

void valores_real2()
{
    float trocar=0;

    printf("Digite um valor real positivo entre 0 e 1:\n");
    scanf("%f",&vr1);
    while (vr1<0 || vr1>1) {
        printf("----------------------------------------------------\n");
        printf("ERRO: O n�mero digitado n�o est� no intervalo 0<x<1.\n");
        printf("----------------------------------------------------\n");
        printf("Digite um valor real positivo entre 0 e 1:\n");
        scanf("%f",&vr1);
    }
    printf("Digite outro valor real positivo entre 0 e 1:\n");
    scanf("%f",&vr2);
    while (vr2<0 || vr2>1) {
        printf("----------------------------------------------------\n");
        printf("ERRO: O n�mero digitado n�o est� no intervalo 0<x<1.\n");
        printf("----------------------------------------------------\n");
        printf("Digite outro valor real positivo entre 0 e 1:\n");
        scanf("%f",&vr2);
    }
    if (vr2<vr1) {
        trocar=vr2;
        vr2=vr1;
        vr1=trocar;
    }
}

void valores_real_flag2()
{
    int esc=0,c=0,x=0,cont=0;
    float valor=0,valor1=0;

    printf("Quantos n�meros voc� quer analisar?\n");
    scanf("%i",&esc);
    for (c=0;c<=esc-1;c++) {
        printf("Digite um n�mero real qualquer:\n");
        scanf("%f",&valor);
        x=valor;
        valor1=valor-x;
        if (valor1>vr2 && valor1!=vr2) {
            printf("-----------------------------------------------------------------------\n");
            printf("A parte fracion�ria do n�mero %.3f � maior que o intervalo %.3f<x<%.3f.\n",valor,vr1,vr2);
            printf("-----------------------------------------------------------------------\n");
            cont++;
        }
    }
    printf("Um total de %i n�meros tem sua parte facion�ria maior que o intervalo %.3f<x<%.3f.\n",cont,vr1,vr2);
}

void main_10()
{
    cadeia();
    alfanumericos();
}

void alfanumericos()
{
    int c=0,x=0,cont=0,quant=0;
    char alfa[21];

    printf("Os n�meros n�o alfanum�ricos da cadeia digitada s�o: ");
    for (c=0;c<=strlen(cad)-1;c++) {
        x=cad[c];
        if (!(48<=x && x<=57) && !(65<=x && x<=90) && !(97<=x && x<=122)) {
            alfa[cont]=x;
            printf("%c ",alfa[cont]);
            cont++;
            quant++;
        }
    }
    printf("\nTotal: %i",quant);
}
