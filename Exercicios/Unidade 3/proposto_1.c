/*
Faça um programa que leia números inteiros até que seja informado o valor 0.
Apresente a média dos valores, o maior e o menor valor e a quantidade de números
pares e ímpares.
*/
#include <math.h>

void resolucaoPropostoUm()
{
    int numero, soma, quantidade, maior, menor, pares;
    int impares;
    float media;
    numero = 1;
    quantidade = 0;
    soma = 0;
    maior = 0;
    menor = 0;  // Problema do HUGE_VAL para resolver!!
    pares = 0;
    impares = 0;
    while (numero != 0)
    {
        printf("Digite um número:\n");
        scanf("%d", &numero);
        if (numero != 0)
            quantidade++;
        soma = soma + numero;
        if (numero % 2 == 0 && numero != 0)
            pares++;
        else if (numero % 2 == 1 && numero != 0)
            impares++;
        if (numero > maior && numero != 0)
            maior = numero;
        if (numero < menor && numero != 0)
            menor = numero;
    }
    media = soma / quantidade;
    printf("\nMédia: %.2f \nMaior: %d \nMenor: %d\nPares: %d \nÍmpares: %d\n", media, maior, menor,pares, impares);
}