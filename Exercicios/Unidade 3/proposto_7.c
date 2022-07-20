/*
Faça um programa que leia um conjunto de pedidos e calcule o total da compra. O
pedido possui os seguintes campos: número, data (dia, mês e ano), preço unitário
e quantidade. A entrada de pedidos é encerrada quando o usuário informa zero
como número do pedido.
*/

void resolucaoPropostoSete()
{
    int pedido, dia, mes, ano, quantidade;
    float preco_Unit, preco_Total;
    pedido = 1;
    preco_Total = 0; // inicializacao
    while (pedido != 0)
    {
        printf("Digite o numero do pedido: ");
        scanf("%d", &pedido);
        if (pedido != 0)
        {
            printf("Digite o dia do pedido:\n");
            scanf("%d", &dia);
            printf("\nDigite o mes do pedido:\n");
            scanf("%d", &mes);
            printf("\nDigite o ano do pedido:\n");
            scanf("%d", &ano);
            printf("\nDigite o preço unitário:\n");
            scanf("%f", &preco_Unit);
            printf("\nDigite a quantidade do pedido:\n");
            scanf("%d", &quantidade);
            preco_Total = preco_Total + preco_Unit *quantidade;
        }
    }
    printf("O preço total dos Pedidos é: %.2f\n", preco_Total);
}