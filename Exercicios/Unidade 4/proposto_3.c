/*
O processamento de dados textuais, atualmente, é bastante avançado, e já existem
bibliotecas capazes de auxiliar neste tipo de situação. Elabore um programa que leia
uma palavra e, se ela tiver número ímpar de caracteres, imprima todas as suas vogais.
*/

#include <stdio.h>
#include <string.h>
#define maximo 10

void resolucaoPropostoTres()
{
    char palavra[maximo];
    int i;
    char letra;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    strlwr(palavra);
    if (strlen(palavra) % 2 == 1)
    {
        for (i = 0; i < maximo; i++)
        {
            letra = palavra[i];
            switch (letra)
            {
            case 'a':
                printf("%c ", letra);
                break;
            case 'e':
                printf("%c ", letra);
                break;
            case 'i':
                printf("%c ", letra);
                break;
            case 'o':
                printf("%c ", letra);
                break;
            case 'u':
                printf("%c ", letra);
                break;
            }
        }
    }
}