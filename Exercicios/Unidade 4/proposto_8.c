/*
Com o surgimento dos smartphones, a funcionalidade de agenda eletrônica
passou a fazer parte do cotidiano das pessoas, de modo geral. Pensando em
um protótipo de agenda, faça um programa para efetuar o cadastro de 30
contatos. O cadastro deve conter as seguintes informações: nome, telefone e
e-mail. Apresente todos os cadastros.
*/

#include <stdio.h>
#define maxim 2
#define N 30
typedef struct dados
{
    char nome[N];
    char telefone[N];
    char email[N];
} cadastro;

void resolucaoPropostoOito()
{
    cadastro cadastros[maxim];
    int i;
    for (i = 0; i < maxim; i++)
    {
        printf("\nDigite os dados do %d cadastro\n", i + 1);
        printf("Nome: ");
        scanf("%30[^\n]s", cadastros[i].nome);
        fflush(stdin);
        printf("Telefone: ");
        scanf("%30[^\n]s", cadastros[i].telefone);
        fflush(stdin);
        printf("E - mail: ");
        scanf("%30[^\n]s", cadastros[i].email);
        fflush(stdin);
    }
    printf("\n\n * *Pessoas Cadastradas * *\n");
    for (i = 0; i < maxim; i++)
    {
        printf("Nome: %s\n", cadastros[i].nome);
        printf("Telefone: %s\n", cadastros[i].telefone);
        printf("E - mail: %s\n", cadastros[i].email);
        printf("\n");
    }
    printf("\n");
}