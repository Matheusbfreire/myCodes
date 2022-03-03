#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

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
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    escolha=0;
    printf("1) Leitor de números pares e ímpares.\n");
    printf("2) Maior,menor e média de um conjunto.\n");
    printf("3) Fatorial.\n");
    printf("4) Calcular valor da série.\n");
    printf("5) Série de Fibonnaci.\n");
    printf("6) Calcular resultado da equação de S.\n");
    printf("7) Palíndromos\n");
    printf("8) Números especiais.\n");
    printf("9) Cara ou Coroa.\n");
    printf("10) Adivinhar número.\n");
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
            printf("1) Leitor de números pares e ímpares.\n");
            printf("2) Maior,menor e média de um conjunto.\n");
            printf("3) Fatorial.\n");
            printf("4) Calcular valor da série.\n");
            printf("5) Série de Fibonnaci.\n");
            printf("6) Calcular resultado da equação de S.\n");
            printf("7) Palíndromos\n");
            printf("8) Números especiais.\n");
            printf("9) Cara ou Coroa.\n");
            printf("10) Adivinhar número.\n");
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
    int n,par,impar,c;

    n=par=impar=c=0;

    printf("1- Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números  pares (Q Pares e a quantidade de números impares (Q Impares) lidos.\nAdmita que o valor 9999 é utilizado como sentinela (FLAG) para fim de leitura.\nEx.: 1,2,3,4,5,9999 => Pares = 2 Impares = 3\n");
    while (n!=9999) {
        printf("Digite um número inteiro qualquer:\n");
        scanf("%i",&n);
        fflush(stdin);
        if (n!=9999) {
            if (n%2==0) {
                par++;
            } else {
                impar++;
            }
        }
        c++;
    }
    printf("Foi digitado um total de %i Pares e %i Ímpares!\n",par,impar);
    printf("\n-------------------------------------------\n");
}

void ex02()
{
    int n,maior,menor,media,soma,c;

    n=maior=menor=media=soma=0;
    c=1;

    printf("2- Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o menor e a média aritmética desse conjunto de dados. (Flag-1).\nExecute este programa para os seguintes valores:\n1. 1,2,3,-1\n2. 3,2,1,-1\n3. 1,3,2,-1\n");
    while (n>=0) {
        printf("Digite um número inteiro qualquer:\n");
        scanf("%i",&n);
        if (n>=0) {
            if (c==1) {
                maior=n;
                menor=n;
            }
            if (n>maior) {
                maior=n;
            }
            if (n<menor) {
                menor=n;
            }
            soma+=n;
            media=soma/c;
            c++;
        }
    }
    printf("O maior número digitado foi %i!\nO menor número digitado foi %i!\nA média de todos os números é %i!\n",maior,menor,media);
    printf("-------------------------------------------\n");
}

void ex03()
{
    int n,c,fat;

    fat=1;

    printf("3- Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado.\nEx.: Fatorial de 5!=5x4x3x2x1=120\n");
    printf("Digite um número inteiro positivo qualquer:\n");
    scanf("%i",&n);
    while (n<0) {
        printf("-------------------------------------------\n");
        printf("ERRO: Digite um número inteiro e positivo!");
        printf("-------------------------------------------\n");
        printf("Digite um número inteiro positivo qualquer:\n");
        scanf("%i",&n);
    }
    for (c=1;1<=c && c<=n;c++) {
        fat*=c;
    }
    printf("O fatorial de %i é %i.\n",n,fat);
    printf("-------------------------------------------\n");
}

void ex04()
{
    int n,c,cont,cont2;
    float s,c3;

    c3=cont=1;
    s=0;

    printf("4– Calcule o valor da seguinte série lido a quantidade de termos:\nS = 1 - 1/3^3 + 1/5^3 - 1/7^3 + 1/9^3 - ...");
    printf("Quantos termos você quer ver dessa série?\n(ESCREVA UM NÙMERO MAIOR QUE 0)\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("-------------------------------------------\n");
        printf("ERRO: ESCREVA UM NÙMERO MAIOR QUE 0!");
        printf("-------------------------------------------\n");
        printf("Quantos termos você quer ver dessa série?\n(ESCREVA UM NÙMERO MAIOR QUE 0)\n");
        scanf("%i",&n);
    }
    cont2=n+(n-1);
    printf("Segue o valor de S:\nS = ");
    for (c=1;1<=c && c<=cont2;c++) {
        if (c%2!=0) {
            if (cont%2==0) {
                c3=-(c*c*c);
                printf("1/%i^3 ",c);
                if (c!=cont2) {
                    printf("+ ");
                }
            } else {
                c3=c*c*c;
                printf("1/%i^3 ",c);
                if (c!=cont2) {
                    printf("- ");
                }
            }
            s+=1/c3;
            cont++;
        }
    }
    printf("= %.3f\n",s);
    printf("-------------------------------------------\n");
}

void ex05()
{
    int n,c,t1,t2,soma;

    t1=0;
    t2=soma=1;

    printf("5- A série de fibonacci é formada pela seqüência:\n1,1,2,3,5,8,13,21,34,...\nEscreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo termo.\n");
    printf("Quantos termos você quer ver dessa série?\n(ESCREVA UM NÙMERO MAIOR QUE 0)\n");
    scanf("%i",&n);
    while (n<=0) {
        printf("-------------------------------------------\n");
        printf("ERRO: ESCREVA UM NÙMERO MAIOR QUE 0!");
        printf("-------------------------------------------\n");
        printf("Quantos termos você quer ver dessa série?\n(ESCREVA UM NÙMERO MAIOR QUE 0)\n");
        scanf("%i",&n);
    }
    for (c=1;1<=c && c<=n;c++) {
        printf("%i",soma);
        if (c!=n) {
            printf(", ");
        } else {
            printf(", ...\n");
        }
        soma=t1+t2;
        t1=t2;
        t2=soma;
    }
    printf("-------------------------------------------\n");
}

void ex06()
{
    int cont,cont2;
    float c,n,s;

    cont=s=0;
    cont2=1;

    printf("6- Fazer um algoritmo para calcular o valor de s, dado por:\nS = 1/N - 2/N-1 + 3/N-2 - 4/N-3 + ... N/1\nSendo o valor de N  deverá se lido do teclado");
    printf("Digite um número inteiro positivo e maior que 0:\n");
    scanf("%f",&n);
    while (n<=0) {
        printf("------------------------------------------------------\n");
        printf("ERRO: Digite um número inteiro, positivo, maior que 0!\n");
        printf("------------------------------------------------------\n");
        printf("Digite um número inteiro positivo e maior que 0:\n");
        scanf("%f",&n);
    }
    printf("Segue o valor de S:\nS = ");
    for (c=1;1<=c && c<=n;c++) {
        if (cont2%2==0) {
            s+=-(c/(n-cont));
            if (c!=n) {
                printf("%.0f/%.0f-%i ",c,n,cont);
                printf("+ ");
            } else {
                printf("%.0f/1",n);
            }
        } else {
            s+=c/(n-cont);
            if (c!=n) {
                printf("%.0f/%.0f-%i ",c,n,cont);
                printf("- ");
            } else {
                printf("%.0f/1",n);
            }
        }
        cont++;
        cont2++;
    }
    printf(" = %.3f\n",s);
    printf("-------------------------------------------\n");
}

void ex07()
{
    int c,c1,c2,c3,c4,c5,cont,cont2;

    c1=c2=c3=c4=c5=cont=cont2=0;

    printf("7- Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplo: 929, 44, 97379.\nFazer um algoritmo que imprima todos os números palíndromos de 10000 a 99999.\n");
    printf("-------------------------------------------\n");
    printf("São eles:\n");
    printf("-------------------------------------------\n");
    for (c=10000;10000<=c && c<=99999;c++) {
        c1=c2=c3=c4=c5=cont=0;
        c1=floor(c/10000);
        cont+=c1*10000;
        c2=floor((c-cont)/1000);
        cont+=c2*1000;
        c3=floor((c-cont)/100);
        cont+=c3*100;
        c4=floor((c-cont)/10);
        cont+=c4*10;
        c5=(c-cont);
        if (c1==c5 && c2==c4) {
            cont2++;
            printf("%i- %i\n",cont2,c);
        }
    }
    printf("-------------------------------------------\n");
}

void ex08()
{
    int c,p1,p2,soma,soma2,cont;

    p1=p2=soma=soma2=cont=0;

    printf("8- O numero 3025 possui a seguinte  característica:\n30 + 25 = 55\n55^2 = 3025\nQuantos e quais são os números de 4 dígitos possuem essa característica?\n");
    printf("-------------------------------------------\n");
    printf("São eles:\n");
    printf("-------------------------------------------\n");
    for (c=1000;1000<=c && c<=9999;c++) {
        p1=floor(c/100);
        p2=c%100;
        soma=p1+p2;
        soma2=soma*soma;
        if (soma2==c) {
            cont++;
            printf("%i- %i\n",cont,c);
        }
    }
    printf("-------------------------------------------\n");
}

void ex09()
{
    int c,ac,er,num,x;

    ac=er=0;

    printf("9.Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa\n(0– para cara e 1– para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas.\n(Utilize o comando para que o computador escolha o resultado).\n");
    printf("-------------------------------------------\n");
    printf("\n0- CARA;\n1- COROA;\n");
    printf("-------------------------------------------\n");
    printf("Você terá 10 tentativas, ao final irei colocar quantas você acertou!\n");
    for (c=1;1<=c && c<=10;c++) {
        printf("Tetativa %i- ",c);
        scanf("%i",&num);
        srand(time(NULL));
        x=rand()%2;
        printf("Você escolheu %i, eu escolhi %i\n",num,x);
        if (num==x) {
            ac++;
        } else {
            er++;
        }
    }
    printf("Acertos = %i\nErros = %i\n",ac,er);
    printf("-------------------------------------------\n");
}

void ex10()
{
    int menor,maior,medio,c,esc,esc2;

    maior=menor=medio=esc2=c=0;
    esc=2;

    printf("10.Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo usuário em no máximo 10 tentativas!\n");
    printf("-------------------------------------------\n");
    printf("Pense em um número entre 1 e 1023!\n");
    printf("-------------------------------------------\n");
    maior=1023;
    menor=1;
    medio=512;
    while (esc==2) {
        printf("Seu número é o %i?\nESCREVA:\n  -SIM = 1;\n  -NÃO = 2;\n",medio);
        printf("DIGITE 1 OU 2!!!\n");
        scanf("%i",&esc);
        printf("-------------------------------------------\n");
        if (esc==2) {
            printf("Seu número é maior ou menor que %i?\nESCREVA:\n  -Maior = 1;\n  -Menor = 2;\n",medio);
            printf("DIGITE 1 OU 2!!!\n");
            scanf("%i",&esc2);
            printf("-------------------------------------------\n");
            if (esc2==1) {
                menor=medio;
            } else {
                maior=medio;
            }
            medio=((maior-menor)/2)+menor;
        }
    c++;
    }
    printf("Tentativas para acerto: %i\n",c);
    printf("-------------------------------------------\n");
}
