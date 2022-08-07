/*
O problema consiste em elaborar um cadastro para 20 livros, contendo as seguin-
tes informações: código, título, autor, área, ano e editora. Desenvolver um menu

com as seguintes opções:
1. Cadastrar os livros.
2. Imprimir as informações dos livros.
3. Pesquisar livros por código.
4. Ordenar os livros por ano.
5. Sair do programa.

*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 1 // Alterar pra 20

struct livro
{
    int codigo;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};
void exercicio_1()
{
    struct livro ficha[TAM];
    struct livro troca;
    int busca, i, j, acha, op;
    op = 0;
    while (op != 5)
    {
        printf("1 - Cadastrar os livros\n");
        printf("2 - Imprimir os livros cadastrados\n");
        printf("3 - Pesquisar livros por código\n");
        printf("4 - Ordenar os livros por ano\n");
        printf("5 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        fflush(stdin);
        if (op == 1)
        {
            system("clear");
            for (i = 0; i < TAM; i++)
            {
                printf("Digite o cádigo do livro da posição %d:", i + 1);
                scanf("%d", &ficha[i].codigo);
                fflush(stdin);
                printf("Digite o título do livro: ");
                scanf("%50[^\n]s", ficha[i].titulo);  //Entender essa notação 
                fflush(stdin);
                printf("Digite o nome do autor: ");
                scanf("%30[^\n]s", ficha[i].autor);  //Entender essa notação "%30[^\n]s"
                fflush(stdin);
                printf("Digite a área do livro: ");
                scanf("%30[^\n]s", ficha[i].area);  //Entender essa notação
                fflush(stdin);
                printf("Digite o ano: ");
                scanf("%d", &ficha[i].ano);
                fflush(stdin);
                printf("Digite o nome da editora: ");
                scanf("%30[^\n]s", ficha[i].editora);  //Entender essa notação
                fflush(stdin);
            }
        }
        else
        {
            if (op == 2)
            {
                system("cls");
                for (i = 0; i < TAM; i++)
                {
                    printf("\nCÓDIGO: %d\n ", ficha[i].codigo);
                    printf("TÍTULO: %s\n ", ficha[i].titulo);
                    printf("AUTOR: %s\n ", ficha[i].autor);
                    printf("ÁREA: %s\n", ficha[i].area);
                    printf("ANO: %d\n", ficha[i].ano);
                    printf("EDITORA: %s\n\n", ficha[i].editora);
                }
            }
            else
            {
                if (op == 3)
                {
                    system("cls");
                    printf("Digite o código que deseja buscar: ");
                    scanf("%d", &busca);
                    i = 0;
                    acha = 0;
                    while ((i < TAM) && (acha == 0))
                    {
                        if (ficha[i].codigo == busca)
                            acha = 1;
                        else
                            i++;
                    }
                    if (acha == 1)
                    {
                        printf("\nCÓDIGO: %d\n", ficha[i].codigo);
                        printf("TÍTULO: %s\n", ficha[i].titulo);
                        printf("AUTOR: %s\n", ficha[i].autor);
                        printf("ÁREA: %s\n", ficha[i].area);
                        printf("ANO: %d\n", ficha[i].ano);
                        printf("EDITORA: %s\n\n", ficha[i].editora);
                    }
                    else
                        printf("\n Registro não encontrado");
                }
                else
                {
                    if (op == 4)
                    {
                        system("cls");
                        for (i = 0; i < TAM - 1; i++)
                        {
                            for (j = i + 1; j < TAM; j++)
                            {
                                if (ficha[i].ano >
                                    ficha[j].ano)
                                {
                                    troca = ficha[i];
                                    ficha[i] = ficha[j];
                                    ficha[j] = troca;
                                }
                            }
                        }
                        for (i = 0; i < TAM; i++)
                        {
                            printf("\n CÓDIGO: %d, TÍTULO: %s, ANO: %d\n\n", ficha[i].codigo, ficha[i].titulo, ficha[i].ano);
                        }
                    }
                }
            }
        }
    }

}