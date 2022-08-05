/*
É possível criar sistemas para organização e controle de estoque nas mais
diversas áreas. Assim sendo, elabore um programa para efetuar o cadastro de
20 livros e imprimi-los. O cadastro deve conter as seguintes informações: título,
autor, editora, edição e ano.
*/

#include <stdio.h>
#define maxi 20
#define N 40
typedef struct dados
{
    char titulo[N];
    char autor[N];
    char editora[N];
    int edicao;
    int ano;
} livro;

void resolucaoPropostoSete()
{
    livro livros[maxi];
    int i;
    for (i = 0; i < maxi; i++)
    {
        printf("\nDigite os dados do %d livro\n", i + 1);
        printf("Título: ");
        scanf("%40[^\n]s", livros[i].titulo);
        fflush(stdin);
        printf("Autor: ");
        scanf("%40[^\n]s", livros[i].autor);
        fflush(stdin);
        printf("Editora: ");
        scanf("%40[^\n]s", livros[i].editora);
        fflush(stdin);
        printf("Edição: ");
        scanf("%d", &livros[i].edicao);
        fflush(stdin);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        fflush(stdin);
        printf("\n");
    }
    printf("\n\n * *Livros Cadastrados * *\n");
    for (i = 0; i < maxi; i++)
    {
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Editora: %s\n", livros[i].editora);
        printf("Edição: %d\n", livros[i].edicao);
        printf("Ano: %d\n", livros[i].ano);
        printf("\n");
    }
    printf("\n");
}