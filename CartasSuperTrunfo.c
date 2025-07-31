#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Nome: Gustavo Daniel Ferreira Santos

int main(){

    char estado [20], cidade [20];
    int população, pontosturísticos, códigonúmero;
    float área, PIB;

        printf("Digite o número da carta: \n"); // primeira carta 01, e assim sucessivamente, sempre com dois dígitos.
        scanf("%d", &códigonúmero);

        printf("Digite o nome de um estado: \n");
        scanf("%s", &estado);

        printf("Digite o nome de uma cidade desse estado: \n");
        scanf("%s", &cidade );

        printf("Digite a população dessa cidade: \n"); 
        scanf("%d", &população);

        printf("Digite a área em km² dessa cidade: \n");
        scanf("%f", &área);

        printf("Digite o PIB dessa cidade: \n");
        scanf("%f", &PIB);

        printf("Digite o número de pontos turísticos dessa cidade: \n"); // média de pontos turísticos 
        scanf("%d", &pontosturísticos);

        printf("Carta: %02d \n", códigonúmero);
        printf("Estado: %s\n", estado);
        printf("Código: %c%02d\n", cidade[0], códigonúmero); // código com a primeira letra da cidade e o número da carta
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", população);
        printf("Área em Km²: %.2f\n", área);
        printf("PIB: %.2f\n", PIB);
        printf("Número de Pontos Turísticos: %d\n", pontosturísticos );

        printf("\n");//cadastrar a segunda carta

        printf("Digite o número da carta: \n"); 
        scanf("%d", &códigonúmero);

        printf("Digite o nome de um estado: \n");
        scanf("%s", &estado);

        printf("Digite o nome de uma cidade desse estado: \n");
        scanf("%s", &cidade );

        printf("Digite a população dessa cidade: \n"); 
        scanf("%d", &população);

        printf("Digite a área em km² dessa cidade: \n");
        scanf("%f", &área);

        printf("Digite o PIB dessa cidade: \n");
        scanf("%f", &PIB);

        printf("Digite o número de pontos turísticos dessa cidade: \n");  
        scanf("%d", &pontosturísticos);

        printf("Carta: %02d \n", códigonúmero);
        printf("Estado: %s\n", estado);
        printf("Código: %c%02d\n", cidade[0], códigonúmero);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", população);
        printf("Área em Km²: %.2f\n", área);
        printf("PIB: %.2f\n", PIB);
        printf("Número de Pontos Turísticos: %d\n", pontosturísticos );


        printf("Cadastro de cartas concluído.\n");

    return 0;
}
// Fim do código