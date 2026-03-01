#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //Obs.: já havia feito essa tarefa na pré-matricula. Por isso, apenas um commit nesse repositório.
  
  /*
  No meu entendimento, a ideia é de mostrar os dados de uma carta logo após o cadastro 
  e só depois solicitar as entradas da próxima carta
  */

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
    //Definição das variáveis da Carta_1
    char estado_1;
    char codigo_1[4];
    char cidade_1[20];
    int populacao_1;
    float area_1;
    float pib_1;
    int num_pontos_turisticos_1;

    //Definição das variáveis da Carta_2
    char estado_2;
    char codigo_2[4];
    char cidade_2[25];
    int populacao_2;
    float area_2;
    float pib_2;
    int num_pontos_turisticos_2;

    //Usuário insere dados da Carta_1
    printf("...Vamos cadastrar a primeira carta...\n");
    
    printf("Insira o Estado (dados válidos A-H): ");
    scanf(" %c", &estado_1);

    printf("Insira a letra do estado seguida de um número de 01 a 04 (exemplo: B02): ");
    scanf("%s", codigo_1);

    //utilizei %[^\n] no scanf() para ignorar espaços e parar de ler apenas na quebra de linha (permite cidades com espaço. Ex.: São Paulo)
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade_1);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_1);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_1);

    printf("Insira o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_1);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos_1);

    printf("\n...Cadastro da primeira carta concluído!...\n\n");

    //Mostra ao usuário os dados da carta cadastrada
    printf("Aqui estão os dados da sua carta cadastrada:\n");
    printf("...Carta 1...\n");

    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", cidade_1);
    printf("População: %d habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos_1);

    //Usuário insere dados da Carta_2
    printf("...Vamos cadastrar a segunda carta...\n");
    
    printf("Insira o Estado (dados válidos A-H): ");
    scanf(" %c", &estado_2);

    printf("Insira a letra do estado seguida de um número de 01 a 04 (exemplo: B02): ");
    scanf("%s", codigo_2);

    //utilizei %[^\n] no scanf() para ignorar espaços e parar de ler apenas na quebra de linha (permite cidades com espaço. Ex.: São Paulo)
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade_2);

    printf("Insira a população da cidade: ");
    scanf("%d", &populacao_2);

    printf("Insira a área da cidade (em km²): ");
    scanf("%f", &area_2);

    printf("Insira o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib_2);

    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos_2);

    printf("\n...Cadastro da segunda carta concluído!...\n\n");

    //Mostra ao usuário os dados da carta cadastrada
    printf("Aqui estão os dados da sua carta cadastrada:\n");
    printf("...Carta 2...\n");

    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", cidade_2);
    printf("População: %d habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n\n\n", num_pontos_turisticos_2);

    //Mostra mensagem de finalização 
    printf("Tudo certo! Os cadastros foram finalizados!\n");

return 0;
} 
