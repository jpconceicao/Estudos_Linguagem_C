/*
Faça um programa que leia dois vetores A e B, com 20 números inteiros. Efetue a
soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente.
*/

#include <stdio.h>

void exercicio_3()
{
    int vetorA[30], vetorB[30], vetorC[30];
    int i, j, troca;
    for (i = 0; i < 30; i++)
    {
        printf("Digite o % d elemento do vetor A: ", i);
        scanf("%d", &vetorA[i]);
        printf("Digite o % d elemento do vetor B: ", i);
        scanf("%d", &vetorB[i]);
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    for (i = 0; i < 29; i++)
    {
        for (j = i + 1; j < 30; j++)
        {
            if (vetorC[i] > vetorC[j])
            {
                troca = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = troca;
            }
        }
    }
    for (i = 0; i < 30; i++)
    {
        printf("%d - ", vetorC[i]);
    }
}