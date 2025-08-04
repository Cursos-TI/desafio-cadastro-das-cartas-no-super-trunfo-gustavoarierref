#include <stdio.h>

// Tema 1 - Cadastro das Cartas
// Nome: Gustavo Daniel Ferreira Santos

int main(){

    char estado1 [30], cidade1 [50], codigocarta1[10];
    int populacao1, pontosturisticos1;
    float area1, PIB1;
    char estado2 [30], cidade2 [50], codigocarta2[10];
    int populacao2, pontosturisticos2;
    float area2, PIB2;

        printf("Digite o nome de um estado: \n");
        fgets(estado1, sizeof(estado1), stdin); 

        printf("Digite o codigo da carta: \n"); //Codigo composto por letra seguida de um numero.
        scanf("%s", codigocarta1);
        getchar(); // limpar \n do buffer.

        printf("Digite o nome de uma cidade desse estado: \n");
        fgets(cidade1, sizeof(estado1), stdin); //sizeof: tamanho máximo de caracteres (estado 1)=[30]. Stdin: Onde o programa está lendo, ou seja, o teclado.

        printf("Digite a populacao dessa cidade: \n"); 
        scanf("%d", &populacao1);

        printf("Digite a area em km² dessa cidade: \n");
        scanf("%f", &area1);

        printf("Digite o PIB dessa cidade: \n");
        scanf("%f", &PIB1);

        printf("Digite o numero de pontos turisticos dessa cidade: \n"); // media de pontos turisticos 
        scanf("%d", &pontosturisticos1);

        //Exibe dados
        printf("Estado: %s\n", estado1);
        printf("Codigo da carta: %s\n",codigocarta1); 
        printf("Nome da Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area em Km²: %.2f\n", area1);
        printf("PIB: %.2f\n", PIB1);
        printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
        
        printf("\n");//cadastrar a segunda carta
        getchar();

        printf("Digite o nome de um estado: \n");
        fgets(estado2, sizeof(estado2), stdin);

        printf("Digite o codigo da carta: \n"); //Codigo composto por letra seguida de um numero.
        scanf("%s", codigocarta2);
        getchar();

        printf("Digite o nome de uma cidade desse estado: \n");
        fgets(cidade2, sizeof(cidade2), stdin);

        printf("Digite a populacao dessa cidade: \n"); 
        scanf("%d", &populacao2);

        printf("Digite a area em km² dessa cidade: \n");
        scanf("%f", &area2);

        printf("Digite o PIB dessa cidade: \n");
        scanf("%f", &PIB2);

        printf("Digite o numero de pontos turisticos dessa cidade: \n");  
        scanf("%d", &pontosturisticos2);

        printf("Estado: %s\n", estado2);
        printf("Codigo da carta: %s\n", codigocarta2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area em Km²: %.2f\n", area2);
        printf("PIB: %.2f\n", PIB2);
        printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);


        printf("Cadastro de cartas concluido.\n");

    return 0;
}
// Fim do codigo