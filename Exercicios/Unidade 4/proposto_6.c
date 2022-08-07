/*
Já pensou em facilitar a vida do seu professor, criando um programa que automatize
os cálculos das notas de seus alunos? Sendo assim, faça um programa que efetue a
leitura dos nomes de cinco alunos e, também, de suas quatro notas bimestrais. Calcule a
média de cada aluno e apresente os nomes classificados em ordem crescente de média.
*/

#include <stdio.h>
#include <string.h>
typedef struct dados
{
    char nome[20];
    float nota[4];
    float media;
} cadastro;

void proposto_6()
{
    cadastro boletim[5];
    cadastro boletimTmp;
    int i, j;
    float soma, notas = 0;
    for (i = 0; i < 5; i++)
    {
        j = 0;
        printf("\n\nDigite o %dº nome: ", i + 1);
        scanf("%20[^\n]s", boletim[i].nome);
        fflush(stdin);
        for (j = 0; j < 4; j++)
        {
            printf("Digite a %dª nota: ", j + 1);
            scanf("% f", &boletim[i].nota[j]);
            fflush(stdin);
            soma = soma + boletim[i].nota[j];
        }
        boletim[i].media = soma / 4;
        soma = 0;
        printf("\n ** %s - %0.1f - %0.1f - %0.1f - %0.1f\n", boletim[i].nome, boletim[i].nota[0], boletim[i].nota[1], boletim[i].nota[2], boletim[i].nota[3]);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (boletim[i].media > boletim[j].media)
            {
                boletimTmp = boletim[i];
                boletim[i] = boletim[j];
                boletim[j] = boletimTmp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n\n %s - %0.1f\n", boletim[i].nome, boletim[i].media);
        printf("%0.1f; %0.1f; %0.1f; %0.1f", boletim[i].nota[0], boletim[i].nota[1], boletim[i].nota[2], boletim[i].nota[3]);
    }
}