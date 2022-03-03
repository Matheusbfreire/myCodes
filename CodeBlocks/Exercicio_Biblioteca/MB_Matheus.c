// Explicação
int multiplicacao(int a, int b)
{
    return a*b;
}

int soma_intervalo(int a, int b)
{
    int c=0,s=0;

    for (c=a; c<=b; c++) {
        s+=c;
    }

    return s;
}

int impares_intervalo(int a, int b)
{
    int c=0,qt_impar=0;

    for (c=a; c<=b; c++) {
        if (c%2!=0) {
            qt_impar++;
        }
    }

    return qt_impar;
}
