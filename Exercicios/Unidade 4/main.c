#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "exercicio_1.c"
#include "exercicio_3.c"
#include "exercicio_7.c"
#include "exercicio_8.c"
#include "proposto_1.c"
#include "proposto_2.c"
#include "proposto_3.c"
#include "proposto_5.c"
#include "proposto_6.c"
#include "proposto_7.c"
#include "proposto_8.c"

    void exibirMenu()
{
    printf("Selecione a questão desejada: \n");
    printf("1 - Exercicio 1\n");
    printf("2 - Exercicio 3\n");
    printf("3 - Exercicio 7\n");
    printf("4 - Exercicio 8\n");
    printf("5 - Proposto 1\n");
    printf("6 - Proposto 2\n");
    printf("7 - Proposto 3\n");
    printf("8 - Proposto 5\n");
    printf("9 - Proposto 6\n");
    printf("10 - Proposto 7\n");
    printf("11 - Proposto 8\n");    
    printf("0 - Sair\n"); 
    printf("Sua opcao: ");
}

void selecaoDeExercicio(int opcao)
{
    switch(opcao)
    {
        case 1:
            exercicio_1();
            break;

        case 2:
            exercicio_3();
            break;

        case 3:
            exercicio_7();
            break;

        case 4:
            exercicio_8();
            break;

        case 5:
            proposto_1();
            break;

        case 6:
            proposto_2();
            break;

        case 7:
            proposto_3();
            break;

        case 8:
            proposto_5();
            break;

        case 9:
            proposto_6();
            break;

        case 10:
            proposto_7();
            break;

        case 11:
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