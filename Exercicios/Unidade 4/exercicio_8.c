/*
Construa um programa que leia informações (matrícula, nome, setor e salário)
de 20 funcionários. Deve ser permitido executar quantas consultas o operador
desejar, em que ele digita a matrícula e são apresentados o setor e o salário. Se a
matrícula digitada não existir, informar o usuário.
*/

#include <stdio.h>
#define tam 2 // Alterar para 20

struct funcionario
{
    int matricula;
    char nome[50];
    char setor[30];
    float salario;
};

void exercicio_8()
{
    struct funcionario ficha[tam];
    int busca, i, acha;
    char op;
    for (i = 0; i < tam; i++)
    {
        printf("Digite a matrícula do funcionário: ");
        scanf("%d", &ficha[i].matricula);
        fflush(stdin);
        printf("Digite o nome: ");
        scanf("%50[^\n]s", ficha[i].nome); //Entender essa notação a fundo e corrigir erro de entrada
        fflush(stdin);
        printf("Digite o setor: ");
        scanf("%30[^\n]s", ficha[i].setor);
        fflush(stdin);
        printf("Digite o salário: ");
        scanf("%f", &ficha[i].salario);
        fflush(stdin);
    }
    do
    {
        printf("Deseja realizar busca(S / N): ");
        scanf("%c", &op);
        fflush(stdin);
    } while ((op != 'S') && (op !='s') && (op !='n') && (op !='N'));

    while ((op =='S') || (op =='s'))
    {
        printf("Informe a matrícula que deseja buscar:");
        scanf("%d", &busca);
        fflush(stdin);
        i = 0;
        acha = 0;
        while ((i < tam) && (acha == 0))
        {
            if (ficha[i].matricula == busca)
                acha = 1;
            else
                i++;
        }
        if (acha == 1)
        {
            printf("O setor é: %s\n", ficha[i].setor);
            printf("O salário é: %.2f\n", ficha[i].salario);
        }
        else
        {
            printf("Matrícula não cadastrada\n");
        }
        do
        {
            printf("Deseja realizar busca(S / N):");
            scanf("%c", &op);
            fflush(stdin);
        } while ((op != 'S') && (op !='s') && (op !='n') && (op !='N'));
    }
}