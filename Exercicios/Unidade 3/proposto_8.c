/*
Elabore um programa que receba a idade, o peso, o sexo e o estado civil de várias
pessoas e imprima a quantidade daquelas que são casadas, solteiras, separadas
e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando for
informado o valor zero para idade.
*/

void proposto_8()
{
    int idade, sexo, est_Civil, q_Casadas, quantidade;
    int q_Solteiras, q_Separadas, q_Viuvas;
    float peso, t_Peso, m_Peso, t_Idade, m_Idade;
    idade = 1;
    t_Peso = 0;
    t_Idade = 0;
    q_Casadas = 0;
    q_Solteiras = 0;
    q_Separadas = 0;
    q_Viuvas = 0;
    quantidade = 0; //
    while (idade != 0)
    {
        printf("Digite a idade:\n");
        scanf("%d", &idade);
        if (idade != 0)
        {
            quantidade++;
            t_Idade = t_Idade + idade;
            printf("Digite o peso:\n");
            scanf("%f", &peso);
            t_Peso = t_Peso + peso;
            printf("Digite o sexo (1-M 2-F):\n");
            scanf("%d", &sexo);
            printf("Digite o estado civil (1-Casadas 2-Solteiras 3-Separadas 4-Viúvas:\n");
            scanf("%d", &est_Civil);
            switch (est_Civil)
            {
            case 1:
                q_Casadas++;
                break;
            case 2:
                q_Solteiras++;
                break;
            case 3:
                q_Separadas++;
                break;
            case 4:
                q_Viuvas++;
                break;
            default:
                printf("Estado Civil Inválido\n");
            }
        }
    }
    m_Idade = t_Idade / quantidade;
    m_Peso = t_Peso / quantidade;
    printf("\nCasadas: %d \nSolteiras: %d \nSeparadas: %d \nViúvas: %d ", q_Casadas, q_Solteiras, q_Separadas, q_Viuvas);
    printf("\nMédia de Peso: %.3f \nMédia de Idade: %.1f\n", m_Peso, m_Idade);
}