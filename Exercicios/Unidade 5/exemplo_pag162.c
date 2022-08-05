/*
temos um exemplo de manipulação de arquivo com a gravação
de cadeias de caracteres até que seja informada a palavra “fim”.
*/

#include <stdio.h>
#include <string.h>
int exemplo_pag162()
{
    FILE *arq;
    char palavra[50];
    arq = fopen("arquivo.txt", "w");
    if (arq == NULL)
    {
        printf("O arquivo não foi aberto. Ocorreu um erro!\n");
    }
    else
    {
        printf("Digite uma palavra: ");
        fgets(palavra, 50, arq);
        fflush(stdin);
        while ((strcmp(palavra, "fim") != 0))
        {
            fputs(palavra, arq);
            if (ferror(arq))
            {
                printf("Erro na gravação!!!\n");
            }
            else
            {
                printf("Gravação efetuada com sucesso!\n");
            }
            printf("Digite uma palavra: ");
            fgets(palavra, 50, arq);
            fflush(stdin);
        }
    }
    fclose(arq);
}