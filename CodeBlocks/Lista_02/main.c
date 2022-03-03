#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha;

    printf("Qual exerc�cio voc� quer executar?\n");
    printf("(ESCOLHA UM N�MERO ENTRE 1 E 10)\n");
    scanf("%i",&escolha);
    printf("-------------------------------------------\n");
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
        printf("O exerc�cio n�o existe na lista!");
    }
    return 0;
}

int ex01()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num;

    printf("1.Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero � par ou �mpar.\n");
    printf("Digite um n�mero interio qualquer:\n");
    scanf("%i",&num);
    if (num%2==0) {
        printf("O n�mero � Par!\n");
    } else {
        printf("O n�mero � �mpar!\n");
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex02()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char nome[50];
    float n1,n2,n3,media;

    printf("2.Fazer um algoritmo pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da media do aluno, uma mensagem de APROVADO, caso a media seja igual ou superior a 6, ou a mensagem REPROVADO, caso contrario.\n");
    printf("Qual o nome do aluno?\n");
    fflush(stdin);
    gets(nome);
    printf("Primeira nota:\n");
    scanf("%f",&n1);
    printf("Segunda nota:\n");
    scanf("%f",&n2);
    printf("Terceira nota:\n");
    scanf("%f",&n3);
    media=(n1+n2+n3)/3;
    if (media>=6) {
        printf("O aluno %s foi aprovado, pois a m�dia dele foi de %.2f!\n",nome,media);
    } else {
        printf("O aluno %s foi reprovado, pois a m�dia dele foi de %.2f!\n",nome,media);
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex03()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int temp;

    printf("3.Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado solido, l�quido ou gasoso.\n");
    printf("Qual a temperatura da �gua?\n");
    scanf("%i",&temp);
    if (temp<=0) {
        printf("A �gua est� no estado s�lido!\n");
    } else {
        if (temp<100) {
            printf("A �gua est� no estado l�quido!\n");
        } else {
            printf("A �gua est� no estado gasoso!\n");
        }
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex04()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,neg,pos;

    printf("4.Leia um valor X e se ele for menor que 0 avalie Y = x2+ 4. Se ele for maior que 0 avalie x3-3 e se ele for igual a 0 de uma mensagem de erro.\n");
    printf("Digite um n�mero interio diferente de 0:\n");
    scanf("%i",&x);
    neg=pow(x,2)+4;
    pos=pow(x,3)-3;
    if (x<0) {
        printf("O valor de y=x^2+4 � %i\n",neg);
    }else {
        if (x>0) {
            printf("O valor de y=x^3-3 � %i\n",pos);
        } else {
            printf("ERRO: Digite um n�mero diferente de 0 na pr�xima vez!\n");
        }
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex05()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int a,b,c,maior,menor,medio;

    printf("5.Construa um algoritmo que receba como entrada tr�s valores (A,B e C). Ap�s o processamento o menor valor dever� estar em A e o maior valor em C, e o valor intermedi�rio em B. Imprima A,B e C.\n");
    printf("Digite um n�mero inteiro qualquer:\n");
    scanf("%i",&a);
    maior=a;
    menor=a;
    medio=a;
    printf("Digite outro n�mero inteiro qualquer:\n");
    scanf("%i",&b);
    printf("Digite mais um n�mero inteiro qualquer:\n");
    scanf("%i",&c);
    if (b>a && b>c) {
        maior=b;
    } else {
        if (c>a && c>b) {
            maior=c;
        }
    }
    if (b<a && b<c) {
        menor=b;
    } else {
        if (c<a && c<b) {
            menor=c;
        }
    }
    if (b>a && b<c || b>c && b<a) {
        medio=b;
    } else {
        if (c>a && c<b || c>b && c<a) {
            medio=c;
        }
    }
    a=menor;
    b=medio;
    c=maior;
    printf("Os n�meros em sequ�ncia s�o:\na = %i\nb = %i\nc = %i\n",a,b,c);
    printf("-------------------------------------------\n");
    return 0;
}

int ex06()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x,y,z;

    printf("6. Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z e verifique se o n�mero X � divis�vel por Y e por Z. O algoritmo dever� mostrar as poss�veis mensagens:\n");
    printf("- o n�mero � divis�vel por Y e Z.\n- o n�mero � divis�vel por Y mas n�o por Z.\n- o n�mero � divis�vel por Z mas n�o por Y.\n- o n�mero n�o � divis�vel nem Y nem por Z.\n");
    printf("Digite um n�mero intero qualquer (x):\n");
    scanf("%i",&x);
    printf("Digite outro n�mero intero qualquer (y):\n");
    scanf("%i",&y);
    printf("Digite mais um n�mero intero qualquer(z):\n");
    scanf("%i",&z);
    if (x%y==0 && x%z==0) {
        printf("O X � divis�vel por Y e Z!\n");
    } else {
        if (x%y==0 && x%z!=0) {
            printf("O X � divis�vel por Y mas n�o por Z!\n");
        } else {
            if (x%z==0 && x%y!=0) {
                printf("O X � divis�vel por Z mas n�o por Y!\n");
            } else {
                printf("O X n�o � divis�vel nem Y nem por Z!\n");
            }
        }
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex07()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num,parte_1,parte_2,soma;
    float soma2;

    printf("O numero 3025 possui a seguinte caracter�stica:\n30 + 25 = 55\n55^2 = 3025\n\n");
    printf("7. Fazer um algoritmo que dado um numero de 4 d�gitos (verifique se o n�mero pertence a faixa) calcule e escreva se ele possui ou n�o esta caracter�stica.\n");
    printf("Digite um n�mero interio que tenha 4 d�gitos:\n");
    scanf("%i",&num);
    if (1000<num && num<9999){
        parte_1=(floor(num/100));
        parte_2=(num%100);
        soma=parte_1+parte_2;
        soma2=pow(soma,2);
        printf("%i + %i = %i\n",parte_1,parte_2,soma);
        printf("%i ^ 2 = %.0f\n",soma,soma2);
        if (soma2==num) {
            printf("O n�mero digitado possui essa caracter�stica!\n");
        } else {
            printf("O n�mero digitado N�O possui essa caracter�stica!\n");
        }
    } else {
        printf("ERRO: O n�mero digitado n�o tem 4 d�gitos! Tente de novo na pr�xima!\n");
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex08()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int cod;

    printf("8. Ler um c�digo do teclado e mostrar o nome correspondente, de acordo com a lista :\n221 Bernardo\n211 Eust�quio\n311 Luiz\n312 M�rio\n332 Artur\n");
    printf("Digite um dos n�meros na lista acima:\n");
    scanf("%i",&cod);
    switch (cod) {
    case 221:
        printf("Nome corrrespondente: Bernardo\n");
        break;
    case 211:
        printf("Nome corrrespondente: Eust�quio\n");
        break;
    case 311:
        printf("Nome corrrespondente: Luiz\n");
        break;
    case 312:
        printf("Nome corrrespondente: M�rio\n");
        break;
    case 332:
        printf("Nome corrrespondente: Artur\n");
        break;
    default:
        printf("N�o existe nome correspondente a esse c�digo na lista!\n");
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex09()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int num,n0,n1,n2,n3,n4,cont;

    printf("9. N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplo:929, 44, 97379.\nFazer um algoritmo que dado um numero de 5 d�gitos; calcule e escreva se este e ou n�o pal�ndromo.\n");
    printf("Digite um n�mero de 5 d�gitos:\n");
    scanf("%i",&num);
    if (10000<num && num<99999) {
        n0=floor(num/10000);
        cont=n0*10000;
        n1=floor((num-cont)/1000);
        cont+=n1*1000;
        n2=floor((num-cont)/100);
        cont+=n2*100;
        n3=floor((num-cont)/10);
        cont+=n3*10;
        n4=num-cont;
        if (n0==n4 && n1==n3) {
            printf("O n�mero digitado � um Pal�ndromo!\n");
        } else {
            printf("O n�mero digitado N�O � um Pal�ndromo!\n");
        }
    } else {
        printf("ERRO: O n�mero digitado n�o tem 5 d�gitos! Tente de novo na pr�xima!\n");
    }
    printf("-------------------------------------------\n");
    return 0;
}

int ex10()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int tipo;
    float m3;

    printf("10. Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo do tipo do\nconsumidor - residencial, comercial ou industrial. A regra para calcular a conta e:\n");
    printf("- Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;\n- Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;\n- Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;\n");
    printf("O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de �gua em metros cubos.\nComo resultado imprimir o valor a ser pago pelo mesmo.\n");
    printf("Qual se tipo de consumo?\n1- Residencial\n2- Comercial\n3- Industrial\n");
    scanf("%i",&tipo);
    if (tipo==1 || tipo==2 || tipo==3) {
        printf("Quantos metros c�bicos voc� gasta por m�s?\n");
        scanf("%f",&m3);
        if (tipo==1) {
            printf("Voc� ir� pagar um total de R$%.2f\n",75+(3.5*m3));
        }
        if (tipo==2) {
            if (m3<=80) {
                printf("Voc� ir� pagar um total de R$%.2f\n",500.00);
            } else {
                printf("Voc� ir� pagar um total de R$%.2f\n",500+(5.5*(m3-80)));
            }
        }
        if (tipo==3) {
            if (m3<=100) {
                printf("Voc� ir� pagar um total de R$%.2f\n",800.00);
            } else {
                printf("Voc� ir� pagar um total de R$%.2f\n",800+(8*(m3-100)));
            }
        }
    } else {
        printf("ERRO: Tipo de consumo n�o encontrado!\n");
    }
    printf("-------------------------------------------\n");
    return 0;
}
