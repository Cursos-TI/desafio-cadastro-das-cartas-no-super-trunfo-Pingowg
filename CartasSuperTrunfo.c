#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas 
// Teste do Codigo Inicial


int main() {

    int codigo_cidade = 1000;
    int pontos_turisticos = 32;
    char nome[50] = "Brasília";
    float pib = 328.8; //Em bilhões
    double populacao = 2.817; //Em milhões
    double area = 5.779; //Km²

    // Variáveis separadas para cada atributo da Cidade.
    // Atributos: Código da Cidade, Nome, População, Área, PIB e Número de Pontos Turisticos.

    printf("Código da cidade: \n");
    scanf("%d", &codigo_cidade);

    printf("Nome da cidade: \n");
    scanf("%s", &nome);

    printf("Área da cidade: \n");
    scanf("%f", &area);

    printf("População da cidade: \n");
    scanf("%f", &populacao);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);


    // Cadastro das Cartas:
    // Utilize a função scanfpara capturar as entradas do usuário para cada atributo.
    //Solicite ao usário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    printf("Código da cidade: %d  \n", codigo_cidade);
    printf("Nome da cidade: %s \n", nome);

    //Comecei pelas variaveis:


    char estado = "A"; //Usei o char (que indica apenas um caractere) para indicar o estado.
    char código[10] = "A01"; //Usei o char "nome"[] (que indica uma cadeia de caracteres) para indicar o código da cidade.
    char nomecidade[50] = "Brasília"; //Usei novamente o char "nome"[] (que indica uma cadeia de caracteres) para indicar o nome da cidade.
    float populacao = 2.817; // Usei o float (que indica um número flutuante) para indicar a população, pois quando eu coloquei int (para número inteiro)eu não estava conseguindo interagir no scanf da a´rea.População esta em milhões.
    float area = 5779.14; //Usei o float (que indica um número flutuante) novamente para indicar a área da cidade em Km².
    float pib = 328.8; //Usei mais uma vez o float (que indica um número flutuante) para indicar o PIB da cidade em bilhões da reais.


    //Variáveis prontas, agora começo a interagir com o usuário a combinação estudada "printf e scanf":


    printf("Digite o código do estado: \n"); //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%c", &estado); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o código da cidade: \n"); //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%s", &codigo_cidade); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.
    
    printf("Digite o nome da cidade: \n"); //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%f", &nomecidade); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite a População da cidade:"); //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%f", &populacao);  //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite a área da cidade:");  //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%f", &area);  //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o PIB da cidade:");  //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%f", &pib);  //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    printf("Digite o número de pontos turísticos:");  //Com esse printf irá aparecer no terminal o texto escrito.
    scanf("%d", &pontos_turisticos); //Esse scanf permitirá que o usuário interaja com o programa através do terminal.

    //Depois que o usuário respondeu através do terminal, eu uso novamente a função printf para imprimir os dados digitados pelo usuário:

    printf("\nEstado: %c \n", estado);
    printf("Código da cidade: %s \n", codigo_cidade);
    printf("Nome da cidade: \n", nomecidade);
    printf("População da cidade: %.2f \n", populacao);
    printf("Área da cidade: %.2f \n", area);
    printf("População da cidade: %.2f \n");
    printf("Número de pontos turisticos %d \n", pontos_turisticos);
    printf("PIB da cidade: %.2f \n",pib);
    printf("Número de pontos turisticos: %d \n \n",pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugetão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // E assim termina o cadastro das cartas.

    return 0;

}

