#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <time.h>

struct Tnotas
{
    float n1, n2, n3;
};
typedef struct Tnotas n;

struct Talunos
{
    char nome[50];
    int matricula;
    n nota;
};
typedef struct Talunos al;

void menu();
al adicionaAluno();
void mostraAluno(al aluno);
void alteraLista(al *aluno);
void gravaLista(al aluno);

int c=0;

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    int escolha=0, n=50, v=0;
    al aluno[n];

    menu();
    printf("------------------\n");
    printf("Escolha uma opção:\n");
    printf("------------------\n");
    printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
    printf("---------------------------------\n");
    scanf("%i",&escolha);
    printf("-----------------------------------\n");
    while (escolha!=-1) {
        switch (escolha) {
            case 1:
                printf("Quantos alunos têm na sala?\n");
                scanf("%i",&n);
                for (int i=0; i<n; i++) {
                    aluno[i]=adicionaAluno();
                }
                break;
            case 2:
                for (int i=0; i<n; i++) {
                    mostraAluno(aluno[i]);
                }
                break;
            case 3:
                for (int i=0; i<n; i++) {
                    alteraLista(&aluno[i]);
                }
                break;
            case 4:
                for (int i=0; i<n; i++) {
                    printf("--------\n");
                    printf("Aluno %i\n",i+1);
                    printf("--------\n");
                    mostraAluno(aluno[i]);
                }
                printf("Qual aluno você quer alterar?\n");
                scanf("%i",&v);
                while (v>n || v<=0) {
                    printf("ERRO: Aluno não existe!");
                    scanf("%i",&v);
                }
                alteraLista(&aluno[v-1]);
                break;
            case 6:
                for (int i=0; i<n; i++, c++) {
                    gravaLista(aluno[i]);
                }
                printf("Arquivo criado com sucesso!\n");
                c=0;
                break;
            default:
                printf("ERRO: Exercício não encontrado.\n");
                printf("-------------------------------\n");
                break;
        }
        printf("\n\n");
        system("pause");
        system("cls");
        menu();
        printf("------------------\n");
        printf("Escolha uma opção:\n");
        printf("------------------\n");
        printf("(DIGITE -1 PARA PARAR O PROGRAMA)\n");
        printf("---------------------------------\n");
        scanf("%i",&escolha);
        printf("-----------------------------------\n");
    }

    return 0;
}

void menu()
{
    printf("1- Criar lista de alunos.\n");
    printf("2- Mostrar lista de alunos.\n");
    printf("3- Alterar lista de alunos.\n");
    printf("4- Alterar um aluno da lista.\n");
    printf("5- Grava lista em um arquivo.\n");
}

al adicionaAluno()
{
    al aluno;
    printf("Nome: ");
    fflush(stdin);
    gets(aluno.nome);
    printf("Matrícula: ");
    fflush(stdin);
    scanf("%i",&aluno.matricula);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f",&aluno.nota.n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f",&aluno.nota.n2);
    printf("Nota 3: ");
    fflush(stdin);
    scanf("%f",&aluno.nota.n3);
    printf("--------------\n");

    return aluno;
}

void mostraAluno(al aluno)
{
    printf("Nome: %s\n",aluno.nome);
    printf("Matrícula: %i\n",aluno.matricula);
    printf("Nota 1: %.2f\n",aluno.nota.n1);
    printf("Nota 2: %.2f\n",aluno.nota.n2);
    printf("Nota 3: %.2f\n",aluno.nota.n3);
    printf("--------------\n");
}

void alteraLista(al *aluno)
{
    printf("Nome: %s\n",aluno->nome);
    printf("Novo nome: ");
    fflush(stdin);
    gets(aluno->nome);
    printf("Matrícula: %i\n",aluno->matricula);
    printf("Nova matrícula: ");
    fflush(stdin);
    scanf("%i",&aluno->matricula);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f",&aluno->nota.n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f",&aluno->nota.n2);
    printf("Nota 3: ");
    fflush(stdin);
    scanf("%f",&aluno->nota.n3);
    printf("--------------\n");
}

void alteraAluno(al *aluno)
{
    printf("Nome: %s\n",aluno->nome);
    printf("Novo nome: ");
    fflush(stdin);
    gets(aluno->nome);
    printf("Matrícula: %i\n",aluno->matricula);
    printf("Nova matrícula: ");
    fflush(stdin);
    scanf("%i",&aluno->matricula);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f",&aluno->nota.n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f",&aluno->nota.n2);
    printf("Nota 3: ");
    fflush(stdin);
    scanf("%f",&aluno->nota.n3);
    printf("--------------\n");
}

void gravaLista(al aluno)
{
    FILE * salaDeAula;

    if (c==0) {
        if ((salaDeAula = fopen("salaDeAula.txt", "w"))==NULL) {
            printf("Erro de abertura!\n");
        } else {
            fprintf(salaDeAula,"Nome: %s  ",aluno.nome);
            fprintf(salaDeAula,"Matrícula: %i  ",aluno.matricula);
            fprintf(salaDeAula,"Nota 1: %3.2f  ",aluno.nota.n1);
            fprintf(salaDeAula,"Nota 2: %3.2f  ",aluno.nota.n2);
            fprintf(salaDeAula,"Nota 3: %3.2f  ",aluno.nota.n3);
            fprintf(salaDeAula,"\n");
        }
        fclose(salaDeAula);
    } else {
        if ((salaDeAula = fopen("salaDeAula.txt", "a"))==NULL) {
            printf("Erro de abertura!\n");
        } else {
            fprintf(salaDeAula,"Nome: %s  ",aluno.nome);
            fprintf(salaDeAula,"Matrícula: %i  ",aluno.matricula);
            fprintf(salaDeAula,"Nota 1: %3.2f  ",aluno.nota.n1);
            fprintf(salaDeAula,"Nota 2: %3.2f  ",aluno.nota.n2);
            fprintf(salaDeAula,"Nota 3: %3.2f  ",aluno.nota.n3);
            fprintf(salaDeAula,"\n");
        }
        fclose(salaDeAula);
    }
}
