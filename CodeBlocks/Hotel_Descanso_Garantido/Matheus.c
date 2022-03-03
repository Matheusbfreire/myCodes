#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

void escolha();
void infoQuartos(int num);
void criarArquivo();
void infoGeral();
void modificaStatus();

void escolha()
{
    int esc=0,codQuartos=0,escQuarto=0;

    system("cls");
    printf("-----------------------------\n");
    printf("[1]Iniciar/Reiniciar Backlog.\n");
    printf("[2]Informações.\n");
    printf("[3]Modificar status de um quarto.\n");
    printf("-----------------------------\n");
    scanf("%i",&esc);
    switch (esc) {
        case 1:
            criarArquivo();
            break;
        case 2:
            system("cls");
            printf("===========\n");
            printf("INFORMAÇÕES\n");
            printf("===========\n");
            printf("[1] Todos os quartos.\n");
            printf("[2] Quarto específico.\n");
            scanf("%i",&escQuarto);
            if (escQuarto==2) {
                printf("Digite o número do quarto:\n");
                printf("(Possuímos quartos de 1 a 20)\n");
                scanf("%i",&codQuartos);
                infoQuartos(codQuartos);
            }
            if (escQuarto==1) {
                infoGeral();
            }
            break;
        case 3:
            modificaStatus();
            break;
        default:
            printf("Opção inexistente!");
            break;
    }
}

void criarArquivo()
{
    FILE *gerenciaQuartos;

    char status[11]="desocupado";

    for (int i=0; i<2; i++) {
        if (i==0) {
            if ((gerenciaQuartos = fopen("gerenciaQuartos.txt","w")) == NULL) {
                printf("Arquivo criado com sucesso!\n");
            }
        } else {
            if ((gerenciaQuartos = fopen("gerenciaQuartos.txt","w")) != NULL) {
                printf("20 quartos cadastrados com sucesso!\n");
                for (int x=0; x<20; x++) {
                    if (x<10) {
                        fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,1,80);
                    } else {
                        fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,2,120);
                    }
                }
            }
        }
        fclose(gerenciaQuartos);
    }
}

void infoQuartos(int num)
{
    FILE *gerenciaQuartos;

    char status[12];
    int cod=0,hosp=0,dia=0;

    if ((gerenciaQuartos = fopen("gerenciaQuartos.txt","r")) == NULL) {
        printf("Arquivo não encontrado!\n");
    } else {
        while (cod!=num) {
            fscanf(gerenciaQuartos,"%i",&cod);
            fgets(status,11,gerenciaQuartos);
            fscanf(gerenciaQuartos,"%i",&hosp);
            fscanf(gerenciaQuartos,"%i",&dia);
        }
        printf("Número: %i\nStatus:%s\nMáximo de hóspedes: %i\nValor diária: %i\n",cod,status,hosp,dia);
    }
    fclose(gerenciaQuartos);
}

void infoGeral()
{
    FILE *gerenciaQuartos;

    char status[12];
    int cod=0,hosp=0,dia=0,c=0;

    if ((gerenciaQuartos = fopen("gerenciaQuartos.txt","r")) == NULL) {
        printf("Arquivo não encontrado!\n");
    } else {
        while (!feof(gerenciaQuartos)) {
            fscanf(gerenciaQuartos,"%i",&cod);
            fgets(status,11,gerenciaQuartos);
            fscanf(gerenciaQuartos,"%i",&hosp);
            fscanf(gerenciaQuartos,"%i",&dia);
            if (c<20) {
                printf("====================\n");
                printf("Número: %i\nStatus:%s\nMáximo de hóspedes: %i\nValor diária: %i\n",cod,status,hosp,dia);
                printf("====================\n");
            }
            c++;
        }
    }
    fclose(gerenciaQuartos);
}

void modificaStatus()
{
    FILE *gerenciaQuartos;

    char str1[11]="desocupado",str2[11]="ocupado",status[11];
    int esc=0,esc1=0;

    system("cls");
    printf("Qual quarto deseja modificar?\n");
    scanf("%i",&esc);
    system("cls");
    printf("Escolha:\n");
    printf("[1]Desocupado.\n");
    printf("[2]Ocupado.\n");
    scanf("%i",&esc1);
    if ((gerenciaQuartos = fopen("gerenciaQuartos.txt","w"))==NULL) {
        printf("ERRO na abertura do arquivo!\n");
    } else {
        for (int x=0; x<20; x++) {
            if (x+1!=esc) {
                strcpy(status,str1);
                if (x<10) {
                    fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,1,80);
                } else {
                    fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,2,120);
                }
            } else {
                if (esc1==1) {
                    strcpy(status,str1);
                    if (x<10) {
                        fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,1,80);
                    } else {
                        fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,2,120);
                    }
                } else {
                    strcpy(status,str2);
                    if (x<10) {
                        fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,1,80);
                    } else {
                        fprintf(gerenciaQuartos,"%i%10s %i %i\n",x+1,status,2,120);
                    }
                }
            }
        }
    }
    fclose(gerenciaQuartos);
}
