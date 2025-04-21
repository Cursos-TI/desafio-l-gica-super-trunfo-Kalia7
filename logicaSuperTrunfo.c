#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
int main()
{
    //linha de códifo para impressão de caracteres com acentos
    setlocale(LC_ALL, "pt_BR.UTF-8");

    //variaveis para cadastro de cartas
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibCapta1, pibCapta2;
    float super_poder1, super_poder2;

    //variavel de opcao menu
    int opcao;

    //Cadastro da primeira carta
    printf("****Bem vindo ao jogo Super Trunfo****\n\n\n\n");
    printf("**Cadastro de Cartas**\n\n");
    printf("**Carta 1**\n\n");
    printf("Digite o nome de uma cidade que comece com a letra A: \n");
    scanf(" %49[^\n]", nomeCidade1);
    if(nomeCidade1[0] != 'A' && nomeCidade1[0] != 'a'){
        printf("A inicial da Cidade deve ser com 'A'. Digite novamente: \n");
        scanf(" %49[^\n]", nomeCidade1);
    }
    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1; //Calculo da densidade populacional e armazena
    pibCapta1 = (pib1 * 1000000) / populacao1; //Calculo da o pib per capta e armazena
    super_poder1 = populacao1 + area1 + (pib1 * 1000000) + pontosTuristicos1 + pibCapta1 + (1 / densidadePopulacional1); // Calculo do super poder

    //Cadastro da segunda carta
    printf("**Carta 2**\n\n");
    printf("Digite o nome de uma cidade que comece com a letra B:  \n");
    scanf(" %49[^\n]", nomeCidade2);
    if(nomeCidade2[0] != 'B' && nomeCidade1[0] != 'b'){
        printf("A inicial da Cidade deve ser com 'B'. Digite novamente: \n");
        scanf(" %49[^\n]", nomeCidade1);
    }
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    printf("Digite a área em Km²: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibCapta2 = (pib2 * 1000000) / populacao2;
    super_poder2 = populacao2 + area2 + (pib2 * 1000000) + pontosTuristicos2 + pibCapta2 + (1 / densidadePopulacional2); 

    // Exibir os dados cadastrados
    printf("\n******Cartas cadastradas********\n");
    printf("Carta 1\nEstado: A\nCódigo: A01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capta: %.2f\n\n", nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibCapta1);
    printf("Carta 2\nEstado: B\nCódigo: B01\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capta: %.2f\n", nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibCapta2);
   

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("Selecione a opção de comparação que deseja:\n 1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Populacional\n 6. Pib Per Capta\n 7. Super Poder\n");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            printf("População: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f trilhões USD vs %.2f trilhões USD\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f vs %.2f\n", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
