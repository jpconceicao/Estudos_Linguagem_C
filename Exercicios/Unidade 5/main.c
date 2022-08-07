#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "exemplo_pag160.c"
#include "exemplo_pag162.c" //Corrigir de gets para fgets, pois não compila!
#include "exemplo_pag163.c"
#include "proposto_7.c"

void exibirMenu()
{
    printf("Selecione a questão desejada: \n");
    printf("1 - Proposto_7\n");
    printf("2 - Exemplo Pag 160\n");
    printf("3 - Exemplo Pag 162\n");
    printf("4 - Exemplo Pag 163\n");
    printf("0 - Sair\n");
    printf("Sua opcao: ");
}

void selecaoDeExercicio(int opcao)
{
    switch(opcao)
    {
        case 1:
            proposto_7();
            break;

        case 2:
            exemplo_pag160();
            break;

        case 3:
            exemplo_pag162();
            break;

        case 4:
            exemplo_pag163();
            break;

        case 0:
            printf("\nPrograma Encerrado!\n");
        default:
            printf("Digite uma opcao valida! \n");
    }
}

int main()
{
    printf("Criar menu de seleção!\n");

    int opcao = 1;
    
    while(opcao != 0)
    {
        exibirMenu();
        scanf("%d", &opcao);
        printf("opcao: %d\n", opcao);
        selecaoDeExercicio(opcao);
    }
    
    return 0;
}

