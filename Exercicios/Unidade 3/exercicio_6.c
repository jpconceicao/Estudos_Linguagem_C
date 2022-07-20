
/*
A prefeitura de uma cidade está coletando informações sobre o salário e o
número de filhos dos habitantes. A leitura de dados é realizada até que seja
informado o valor -1 para o salário. Apresente a média de salário da população,
a média de filhos e o maior salário.
*/

void resolucaoExercicioSeis()
{
    int filhos, npessoas;
    float salario, somas, somaf, msalario;
    npessoas = 0;
    somaf = 0;
    somas = 0;
    msalario = 0;
    printf("Informe o salário:\n");
    scanf("%f", &salario);
    while (salario != -1)
    {
        printf("Informe o número de filhos:\n");
        scanf("%d", &filhos);
        npessoas++;
        if (salario > msalario)
            msalario = salario;
        somaf = somaf + filhos;
        somas = somas + salario;
        printf("Informe o salário:\n");
        scanf("%f", &salario);
    }
    printf("A média de salários e: %.2f\n",somas / npessoas);
    printf("A média de filhos e: %.2f\n",somaf / npessoas);
    printf("O maior salário e: %.2f\n", msalario);
}