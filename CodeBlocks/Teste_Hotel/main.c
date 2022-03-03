#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void menu();
int verificaCodigoCliente(FILE *c,int codigo);
void cadastraCliente(FILE *c);
void mostraCliente (FILE *c);
int verificaCodigoFuncionario(FILE *f,int codigo);
void cadastraFuncionario(FILE *f);
void mostraFuncionario (FILE *f);
int verificaStatus(FILE *q,int num);
void cadastraEstadia(FILE *e, FILE *q);
void baixaEstadia(FILE *e, FILE *q);
void desocupaQuarto (FILE *q, int num);
void mostraQuartos (FILE *q);
void cartaoFidelidade(char nome[50], int qdia);
void infoEstadia(FILE *e);

struct Tendereco{
    char rua[50],bairro[50];
    int numero;
};
typedef struct Tendereco endereco;
struct Tclientes {
    int codigo,telefone;
    char nome[50];
    endereco ende;
};
typedef struct Tclientes cliente;
struct Tfuncionarios {
    int codigo,telefone,salario;
    char nome[50],cargo[50];
};
typedef struct Tfuncionarios funcionarios;
struct Tquartos {
    int numero,qnth,diaria;
    char status[50];
};
typedef struct Tquartos quartos;
struct Testadias {
    int diae,dias,qntdia,qntp,numquarto;
    char nome[50];
};
typedef struct Testadias estadias;
struct Tfidelidad {
    int qtdia;
    char nome[50];
};
typedef struct Tfidelidad fidelidad;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    FILE *c;
    FILE *f;
    FILE *q;
    FILE *e;

    char statusini[50]="desocupado";
    int ex=0;

    if((c = fopen("clientes.dat", "r+b"))==NULL) {
        printf("Arquivo 'clientes' não existia ... criando arquivo!\n");
        if((c = fopen("clientes.dat", "w+b"))==NULL){
            printf("Erro na criação do arquivo 'clientes'!\n");
            exit(1);
        }
        system("pause");
    }
    if((f = fopen("funcionarios.dat", "r+b"))==NULL) {
        printf("Arquivo 'funcionarios' não existia ... criando arquivo!\n");
        if((f = fopen("funcionarios.dat", "w+b"))==NULL){
            printf("Erro na criação do arquivo 'funcionarios'!\n");
            exit(1);
        }
        system("pause");
    }
    if((q = fopen("quartos.dat", "r+b"))==NULL) {
        printf("Arquivo 'quartos' não existia ... criando arquivo!\n");
        if((q = fopen("quartos.dat", "w+b"))==NULL){
            printf("Erro na criação do arquivo 'quartos'!\n");
            exit(1);
        } else {
            for (int i=0;i<20;i++) {
                quartos qu;
                qu.numero=i+1;
                if (i<10) {
                    qu.qnth=1;
                    qu.diaria=80;
                } else {
                    qu.qnth=2;
                    qu.diaria=120;
                }
                strcpy(qu.status,statusini);
                fwrite(&qu, sizeof(qu),1,q);
            }
        }
        system("pause");
    }
    if((e = fopen("estadias.dat", "r+b"))==NULL) {
        printf("Arquivo 'estadias' não existia ... criando arquivo!\n");
        if((e = fopen("estadias.dat", "w+b"))==NULL){
            printf("Erro na criação do arquivo 'estadias'!\n");
            exit(1);
        }
        system("pause");
    }

    printf("------------------------\n");
    printf("Hotel Descanso Garantido\n");
    printf("------------------------\n");
    menu();

    while (ex!=5) {
        scanf("%i",&ex);
        system("cls");
        switch (ex) {
            case 1:
                printf("---------------------\n");
                printf("[1]Cadastrar cliente.\n");
                printf("[2]Informações clientes.\n");
                printf("---------------------\n");
                scanf("%i",&ex);
                switch (ex) {
                    case 1:
                        cadastraCliente(c);
                        break;
                    case 2:
                        mostraCliente(c);
                        break;
                    default:
                        printf("Opção inexistente.\n");
                        break;
                }
                break;
            case 2:
                printf("---------------------\n");
                printf("[1]Cadastrar funcionario.\n");
                printf("[2]Informações funcionarios.\n");
                printf("---------------------\n");
                scanf("%i",&ex);
                switch (ex) {
                    case 1:
                        cadastraFuncionario(f);
                        break;
                    case 2:
                        mostraFuncionario(f);
                        break;
                    default:
                        printf("Opção inexistente.\n");
                        break;
                }
                break;
            case 3:
                printf("---------------------\n");
                printf("[1]Cadastrar estadia.\n");
                printf("[2]Dar baixa.\n");
                printf("[3]Informações estadias.\n");
                printf("---------------------\n");
                scanf("%i",&ex);
                switch (ex) {
                    case 1:
                        cadastraEstadia(e,q);
                        break;
                    case 2:
                        baixaEstadia(e,q);
                        break;
                    case 3:
                        infoEstadia(e);
                        break;
                    default:
                        printf("Opção inexistente.\n");
                        break;
                }
                break;
            case 4:
                printf("---------------------\n");
                printf("[1]Informações.\n");
                printf("---------------------\n");
                scanf("%i",&ex);
                switch (ex) {
                    case 1:
                        mostraQuartos(q);
                        break;
                    default:
                        printf("Opção inexistente.\n");
                        break;
                }
                break;
            case 5:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Exercício inexistente.\n");
                break;
        }

        if (ex!=5) {
            printf("\n\n");
            system("pause");
            system("cls");
            menu();
        }
    }

    fclose(c);
    fclose(f);
    fclose(q);
    fclose(e);

    return 0;
}

void menu()
{
    printf("======\n");
    printf("OPÇÕES\n");
    printf("======\n");
    printf("------------------------\n");
    printf("[1]Clientes.\n");
    printf("[2]Funcionários.\n");
    printf("[3]Estadias.\n");
    printf("[4]Gerencias quartos.\n");
    printf("[5]Sair.\n");
    printf("------------------------\n");
}

int verificaCodigoCliente(FILE *c,int codigo) {

    int pos=0,achou=0;

    cliente cli;

    fseek(c,0,SEEK_SET);
    fread(&cli, sizeof(cli),1, c);
    while(!feof(c) && !achou){
        if(cli.codigo==codigo){
            achou=1;
        }
        fread(&cli, sizeof(cli),1, c);
        pos++;
    }
    if(achou){
        return pos;
    } else {
        return -1;
    }
}

void cadastraCliente(FILE *c) {

    cliente cli;

    int pos;

    printf("Digite o código do cliente: ");
    fflush(stdin);
    scanf("%d",&cli.codigo);
    pos = verificaCodigoCliente(c,cli.codigo);
    if(pos == -1) {
        printf("Digite nome do cliente: ");
        fflush(stdin);
        gets(cli.nome);
        printf("Digite o telefone do cliente: ");
        fflush(stdin);
        scanf("%i",&cli.telefone);
        printf("Digite o endereço do cliente\n");
        printf ("Rua: ");
        fflush(stdin);
        gets(cli.ende.rua);
        printf ("Bairro: ");
        fflush(stdin);
        gets(cli.ende.bairro);
        printf ("Número: ");
        fflush(stdin);
        scanf("%i",&cli.ende.numero);
        fseek(c,0,SEEK_END);
        fwrite(&cli, sizeof(cli),1,c);
        fflush(c);
    } else {
        printf("Código %i já existe no arquivo. Inclusão não realizada!\n",cli.codigo);
    }
}

void mostraCliente (FILE *c) {

    cliente cli;

    int pos=0,achou=0;
    char nome[50];

    printf("Nome do cliente: ");
    fflush(stdin);
    gets(nome);
    fseek(c,0,SEEK_SET);
    fread(&cli, sizeof(cli),1, c);
    while(!feof(c) && !achou){
        if(!(strcmp(cli.nome,nome))){
            achou=1;
        }
        fread(&cli, sizeof(cli),1, c);
        pos++;
    }
    fseek(c,sizeof(cli)*(pos-1),SEEK_SET);
    fread(&cli, sizeof(cli),1, c);
    if(achou){
        printf("======================\n");
        printf("Código: %d\n",cli.codigo);
        printf("Nome: %s\n",cli.nome);
        printf("Telefone: %i\n",cli.ende.numero);
        printf("Rua: %s\n",cli.ende.rua);
        printf("Bairro: %s\n",cli.ende.bairro);
        printf("Número: %i\n",cli.ende.numero);
        printf("======================\n");
    } else {
        printf("Cliente não encontrado!\n");
    }
}

int verificaCodigoFuncionario(FILE *f,int codigo) {

    int pos=0,achou=0;

    funcionarios fun;

    fseek(f,0,SEEK_SET);
    fread(&fun, sizeof(fun),1, f);
    while(!feof(f) && !achou){
        if(fun.codigo==codigo){
            achou=1;
        }
        fread(&fun, sizeof(fun),1, f);
        pos++;
    }
    if(achou){
        return pos;
    } else {
        return -1;
    }
}

void cadastraFuncionario(FILE *f) {

    funcionarios fun;

    int pos;

    printf("Digite o código do funcionario: ");
    fflush(stdin);
    scanf("%d",&fun.codigo);
    pos = verificaCodigoFuncionario(f,fun.codigo);
    if(pos == -1) {
        printf("Digite nome do funcionario: ");
        fflush(stdin);
        gets(fun.nome);
        printf("Digite o telefone do funcionario: ");
        fflush(stdin);
        scanf("%i",&fun.telefone);
        printf("Digite cargo do funcionario: ");
        fflush(stdin);
        gets(fun.cargo);
        printf("Digite o salário do funcionario: ");
        fflush(stdin);
        scanf("%i",&fun.salario);
        fseek(f,0,SEEK_END);
        fwrite(&fun, sizeof(fun),1,f);
        fflush(f);
    } else {
        printf("Código %i já existe no arquivo. Inclusão não realizada!\n",fun.codigo);
    }
}

void mostraFuncionario (FILE *f) {

    funcionarios fun;

    int pos=0,achou=0;
    char nome[50];

    printf("Nome do funcionário: ");
    fflush(stdin);
    gets(nome);
    fseek(f,0,SEEK_SET);
    fread(&fun, sizeof(fun),1, f);
    while(!feof(f) && !achou){
        if(!(strcmp(fun.nome,nome))){
            achou=1;
        }
        fread(&fun, sizeof(fun),1, f);
        pos++;
    }
    fseek(f,sizeof(fun)*(pos-1),SEEK_SET);
    fread(&fun, sizeof(fun),1, f);
    if(achou){
        printf("======================\n");
        printf("Código: %d\n",fun.codigo);
        printf("Nome: %s\n",fun.nome);
        printf("Telefone: %i\n",fun.telefone);
        printf("Cargo: %s\n",fun.cargo);
        printf("Salário: %i\n",fun.salario);
        printf("======================\n");
    } else {
        printf("Funcionário não encontrado!\n");
    }
}

void mostraQuartos (FILE *q) {

    quartos qu;

    fseek(q,0,SEEK_SET);
    fread(&qu, sizeof(qu),1, q);
    while(!feof(q)) {
        printf("======================\n");
        printf("Número: %i\n",qu.numero);
        printf("Máximo de hóspedes: %i\n",qu.qnth);
        printf("Valor diária: %i\n",qu.diaria);
        printf("Status: %s\n",qu.status);
        printf("======================\n");
        fread(&qu, sizeof(qu),1, q);
    }
}

int verificaStatus(FILE *q,int num) {

    int pos=0,achou=0;
    char statusini[50]="desocupado";

    quartos qu;

    fseek(q,0,SEEK_SET);
    fread(&qu, sizeof(qu),1, q);
    while(!feof(q) && !achou){
        if(qu.qnth==num && !(strcmp(qu.status,statusini))){
            achou=1;
        }
        fread(&qu, sizeof(qu),1, q);
        pos++;
    }
    if(achou){
        fseek(q,sizeof(qu)*(pos-1),SEEK_SET);
        strcpy(qu.status,"ocupado");
        qu.numero=pos;
        fwrite(&qu, sizeof(qu),1,q);
        return pos;
    } else {
        return -1;
    }
}

void cadastraEstadia(FILE *e, FILE *q) {

    estadias est;

    int pos;

    printf("Digite nome do cliente: ");
    fflush(stdin);
    gets(est.nome);
    printf("Quantidade de hóspedes: ");
    fflush(stdin);
    scanf("%i",&est.qntp);
    printf("Digite o dia de entrada do cliente: ");
    fflush(stdin);
    scanf("%i",&est.diae);
    printf("Digite o dia de saída do cliente: ");
    fflush(stdin);
    scanf("%i",&est.dias);
    est.qntdia=est.dias-est.diae;
    pos=verificaStatus(q,est.qntp);
    cartaoFidelidade(est.nome,est.qntdia);
    if (pos == -1) {
        printf("Não há quartos disponíveis!\n");
    } else {
        printf("Número do quarto do cliente: %i\n",pos);
    }
    est.numquarto=pos;
    fseek(e,0,SEEK_END);
    fwrite(&est, sizeof(est),1,e);
    fflush(e);
}

void baixaEstadia(FILE *e, FILE *q)
{
    estadias est;
    quartos qu;

    int pos=0,achou=0,valor=0,num=0;
    char nome[50];

    printf("Nome do cliente: ");
    fflush(stdin);
    gets(nome);
    printf("Informe o número do quarto para baixa: ");
    scanf("%i",&num);
    fseek(e,0,SEEK_SET);
    fread(&est, sizeof(est),1, e);
    fseek(q,0,SEEK_SET);
    fread(&qu, sizeof(qu),1, q);
    while(!feof(e) && !achou){
        if(!(strcmp(est.nome,nome))){
            achou=1;
            if (num<=10){
                qu.diaria=80;
                valor=est.qntdia*qu.diaria;
            } else {
                qu.diaria=120;
                valor=est.qntdia*qu.diaria;
            }
        }
        fread(&est, sizeof(est),1, e);
        pos++;
    }
    if(achou){
        printf("Valor a ser pago: %i",valor);
        desocupaQuarto(q,num);
    } else {
        printf("Estadia não encontrada!\n");
    }
}

void desocupaQuarto (FILE *q, int num)
{
    int pos=0,achou=0;

    quartos qu;

    fseek(q,0,SEEK_SET);
    fread(&qu, sizeof(qu),1, q);
    while(!feof(q) && !achou){
        if((pos+1)==num){
            achou=1;
        }
        fread(&qu, sizeof(qu),1, q);
        pos++;
    }
    if(achou){
        fseek(q,sizeof(qu)*(pos-1),SEEK_SET);
        strcpy(qu.status,"desocupado");
        qu.numero=pos;
        fwrite(&qu, sizeof(qu),1,q);
    }
}

void cartaoFidelidade(char nome[50], int qdia)
{
    printf("Entrou!\n");
    FILE *fid;


    if((fid = fopen("fidelidade.dat", "r+b"))==NULL) {
        printf("Arquivo 'fidelidade' não existia ... criando arquivo!\n");
        if((fid = fopen("fidelidade.dat", "w+b"))==NULL){
            printf("Erro na criação do arquivo 'fidelidade'!\n");
            exit(1);
        }
        system("pause");
    }

    fidelidad fi;

    int pos=0,achou=0;

    fseek(fid,0,SEEK_SET);
    fread(&fi, sizeof(fi),1, fid);
    while(!feof(fid) && !achou){
        printf("Entrou!\n");
        if(!(strcmp(fi.nome,nome))){
            achou=1;
        }
        fread(&fi, sizeof(fi),1, fid);
        pos++;
    }
    if(achou){
        fread(&fi, sizeof(fi)*(pos),1, fid);
        fi.qtdia+=qdia*10;
    } else {
        printf("Entrou!\n");
        strcpy(fi.nome,nome);
        fi.qtdia=qdia*10;
        fseek(fid,0,SEEK_END);
        fwrite(&fi, sizeof(fi),1,fid);
    }


    fclose(fid);
}

void infoEstadia(FILE *e)
{
    estadias est;

    char nome[50];

    printf("Nome do cliente: ");
    fflush(stdin);
    gets(nome);
    fseek(e,0,SEEK_SET);
    fread(&est, sizeof(est),1, e);
    while(!feof(e)) {
        if (!strcmp(est.nome,nome)) {
            printf("======================\n");
            printf("Nome: %s\n",est.nome);
            printf("Dia de entrada: %i\n",est.diae);
            printf("Dia de saída: %i\n",est.dias);
            printf("Total de dias: %i\n",est.qntdia);
            printf("Hóspedes: %i\n",est.qntp);
            printf("Número do quarto: %i\n",est.numquarto);
            printf("======================\n");
        }
        fread(&est, sizeof(est),1, e);
    }
}
