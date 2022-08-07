#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "exercicio_6.c"
#include "exercicio_8.c"
#include "proposto_1.c"
#include "proposto_7.c"
#include "proposto_8.c"


void exibirMenu()
{
    printf("Selecione a questão desejada: \n");
    printf("1 - Exercicio 6\n");
    printf("2 - Exercicio 8\n");
    printf("3 - Proposto 1\n");
    printf("4 - Proposto 7\n");
    printf("5 - Proposto 8\n");
    printf("0 - Sair\n");
    printf("Sua opcao: ");
}

void selecaoDeExercicio(int opcao)
{
    switch(opcao)
    {
        case 1:
            exercicio_6();
            break;

        case 2:
            exercicio_8();
            break;

        case 3:
            proposto_1();
            break;

        case 4:
            proposto_7();
            break;

        case 5:
            proposto_8();
            break;
            
        case 0:
            printf("\nPrograma Encerrado!\n");
            break;

        default:
            printf("Digite uma opcao valida! \n");
            break;
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
