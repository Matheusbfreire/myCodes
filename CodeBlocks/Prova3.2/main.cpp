#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

using namespace std;

class Conta
{
public:
    char nome[50];
    int codigo=0;
    float saldo=0;
    Conta(char n[50], int c, float s);
    Conta();
    ~Conta();
    void depositar();
    void sacar();
    void imprimeConta();
};

Conta::Conta(char n[50], int c, float s)
{
    cout << "Executando o método construtor com parâmetros\n" << endl;
    strcpy(nome,n);
    codigo=c;
    saldo=s;
}

Conta::Conta()
{
    cout << "Executando o método construtor sem parâmetros\n\n" << endl;
    cout << "Digite seu nome:" << endl;
    fflush(stdin);
    gets(nome);
    cout << "Digite o código de pessoa:" << endl;
    cin >> codigo;
    cout << "Digite o saldo na conta:" << endl;
    cin >> saldo;
}

Conta::~Conta()
{
    cout << "Executando o método destrutor\n" << endl;
    cout << "A conta foi destruida!\n" << endl;
}

void Conta::depositar()
{
    float valor=0;

    cout << "Digite o valor a ser depositado:" << endl;
    cin >> valor;

    saldo+=valor;
}

void Conta::sacar()
{
    float valor=0;

    cout << "Digite o valor a ser sacado:" << endl;
    cin >> valor;

    while (valor>saldo) {
        cout << "ERRO: O valor a ser sacado não pode ser maior que o valor da conta!\n" << endl;
        cout << "Valor conta: " << saldo << endl;
        cout << "Digite o valor a ser sacado:" << endl;
        cin >> valor;
    }

    saldo-=valor;
}

void Conta::imprimeConta()
{
    cout << "Dados da conta:\n" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Código:" << codigo << endl;
    cout << "Saldo:" << saldo << endl;
    system("pause");
}

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    Conta co;

    co.imprimeConta();
    co.depositar();
    co.imprimeConta();
    co.sacar();
    co.imprimeConta();
    system("cls");

    Conta nco("Marcos",12,1100);

    nco.imprimeConta();
    nco.depositar();
    nco.imprimeConta();
    nco.sacar();
    nco.imprimeConta();

    return 0;
}
