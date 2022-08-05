/*
Um programador que se preze necessita dominar vários tipos de estruturas de da-
dos. Uma das estruturas mais importantes, em programas, são as matrizes. Assim,
construa um programa que recebe duas matrizes inteiras de ordem 5 e imprima a
soma e a diferença entre elas.
*/

#include <stdio.h>

void resolucaoPropostoCinco()
{
    int matriz_A[5][5], matriz_B[5][5], i, j, k;
    printf("\nMatriz A\n");
    for (i = 0; i < 5; i++) // matriz A
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &matriz_A[i][j]);
        }
    }
    printf("\nMatriz B\n");
    for (i = 0; i < 5; i++) // matriz B
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &matriz_B[i][j]);
        }
    }
    printf("\nSoma de Matrizes\n");
    for (i = 0; i < 5; i++) // Soma
    {
        printf("|\t");
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", matriz_A[i][j] + matriz_B[i][j]);
        }
        printf(" |\n");
    }
    printf("\nSubtração de Matrizes\n");
    for (i = 0; i < 5; i++) // Subtração
    {
        printf("|\t");
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", matriz_A[i][j] - matriz_B[i][j]);
        }
        printf(" |\n");
    }
}