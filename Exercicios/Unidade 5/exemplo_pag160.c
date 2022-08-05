/*
É realizada a operação de abertura do arquivo, a verificação de erro, leitura de um caractere e
o fechamento de arquivo. A leitura de caractere é realizada até que seja digitado
o caractere ‘f’. Execute o código abaixo e, ao final, abra o arquivo com o nome
“arquivo.txt” e verifique o seu conteúdo.
*/

#include <stdio.h>
int exemplo_pag160()
{
    FILE *arq;
    char letra;
    arq = fopen("arquivo.txt", "w");
    if (arq == NULL)
    {
printf ("O arquivo não foi aberto. Ocorreu um erro!\n");
    }
    else
    {
        printf("Digite um caractere: ");
        scanf("%c", &letra);
        fflush(stdin);
        while ((letra != 'f') && (letra != 'F'))
        {
            fputc(letra, arq);
            if (ferror(arq))
            {
                printf("Erro na gravação !!!\n");
            }
            else
            {
printf ("Gravação efetuada com sucesso!\n");
            }
            printf("Digite outro caractere: ");
            scanf("%c", &letra);
            fflush(stdin);
        }
    }
    fclose(arq);
}