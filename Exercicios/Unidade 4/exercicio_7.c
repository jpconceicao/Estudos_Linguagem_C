/*
Construa um programa que efetue a leitura de quatro notas de 20 alunos, calcule
a média de cada aluno e a média da turma.
*/

#include <stdio.h>
#define TAMANHO 20
void exercicio_7()
{
    float media[TAMANHO];
    float notas[TAMANHO][4];
    float somat, mediat, soma;
    int i, j;
    somat = 0;
    mediat = 0;
    for (i = 0; i < TAMANHO; i++)
    {
        soma = 0;
        for (j = 0; j < 4; j++)
        {
            printf("Informe a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
            soma = soma + notas[i][j];
        }
        media[i] = soma / 4;
        somat = somat + media[i];
    }
    mediat = somat / TAMANHO;
    for (i = 0; i < TAMANHO; i++)
    {
        printf("A média do aluno %d é: %.2f\n", i, media[i]);
    }
    printf("A média da turma é: %.2f\n", mediat);

}