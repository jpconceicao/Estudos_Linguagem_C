/*
Em uma avaliação de um produto, o cliente responde sua opinião (1 – satisfatório; 2 –
indiferente; 3 – insatisfatório). Faça um programa que leia idade e opinião e apresente:
o número de clientes que responderam satisfatório, a média de idade dos clientes que
opinaram como satisfatório, e o número de clientes que responderam insatisfatório.
O programa se encerra quando for digitado o valor zero para idade.
*/

void exercicio_8()
{

    int idade, npessoas, npessoasi;
    int npessoass, opiniao;
    float somai, media;
    npessoas = 0;
    npessoass = 0;
    npessoasi = 0;
    somai = 0;
    printf("Informe a idade:\n");
    scanf("%d", &idade);
    while (idade != 0)
    {
        do
        {
            printf("Informe a opinião:\n");
            scanf("%d", &opiniao);
        } while ((opiniao != 1) && (opiniao != 2) && (opiniao != 3));

        npessoas++;

        if (opiniao == 1)
        {
            somai = somai + idade;
            npessoass++;
        }
        else
        {
            if (opiniao == 3)
                npessoasi++;
        }
        printf("Informe a idade:\n");
        scanf("%d", &idade);
    }
    
    media = (somai / npessoass);
    printf("O número de pessoas insatisfeitas é: %d\n", npessoasi);
    printf("O número de pessoas satisfeitas é: %d\n", npessoass);
    printf("A média de idade das pessoas satisfeitas eh: %.2f\n", media);
}