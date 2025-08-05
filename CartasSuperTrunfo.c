#include <stdio.h>
#include <string.h>

// Tema 1 - Cadastro das Cartas
// Nome: Gustavo Daniel Ferreira Santos

int main(){

    char estado1 [30], cidade1 [50], codigocarta1[10];
    int populacao1, pontosturisticos1;
    float area1, PIB1, densidadepopulacional1, PIBpercapita1, superpoder1;
    char estado2 [30], cidade2 [50], codigocarta2[10];
    int populacao2, pontosturisticos2;
    float area2, PIB2, densidadepopulacional2, PIBpercapita2, superpoder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
    
        printf("Digite o nome de um estado: \n");
        fgets(estado1, sizeof(estado1), stdin); 
        estado1[strcspn(estado1, "\n")] = 0;


        printf("Digite o codigo da carta: \n"); //Codigo composto por letra seguida de um numero.
        scanf("%s", codigocarta1);
        getchar(); // limpar \n do buffer.

        printf("Digite o nome de uma cidade desse estado: \n");
        fgets(cidade1, sizeof(cidade1), stdin); // Lê até 49 caracteres da cidade a partir do teclado.
        cidade1[strcspn(cidade1, "\n")] = 0;

        printf("Digite a populacao dessa cidade: \n"); 
        scanf("%d", &populacao1);

        printf("Digite a area em km² dessa cidade: \n");
        scanf("%f", &area1);

        printf("Digite o PIB em bilhões dessa cidade: \n");
        scanf("%f", &PIB1);

        printf("Digite o numero de pontos turisticos dessa cidade: \n"); // media de pontos turisticos 
        scanf("%d", &pontosturisticos1);

        densidadepopulacional1 = populacao1 / area1;
        PIBpercapita1 = (PIB1*1000000000) / populacao1;
        superpoder1 = populacao1 + area1 + PIB1 + pontosturisticos1 + (1.0/densidadepopulacional1) + PIBpercapita1;
 
        //Exibe dados
        printf("Estado: %s\n", estado1);
        printf("Codigo da carta: %s\n",codigocarta1); 
        printf("Nome da Cidade: %s\n", cidade1);
        printf("Populacao: %d habitantes\n", populacao1);
        printf("Area em Km²: %.2f\n", area1);
        printf("PIB: %.2f bilhões de reais\n", PIB1);
        printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per capita: %.2f reais\n", PIBpercapita1);
        printf("O Super Poder é: %.2f\n", superpoder1);
        
        printf("\n");//cadastrar a segunda carta
        getchar();

        printf("Digite o nome de um estado: \n");
        fgets(estado2, sizeof(estado2), stdin);
        estado2[strcspn(estado2, "\n")] = 0;

        printf("Digite o codigo da carta: \n"); //Codigo composto por letra seguida de um numero.
        scanf("%s", codigocarta2);
        getchar();

        printf("Digite o nome de uma cidade desse estado: \n");
        fgets(cidade2, sizeof(cidade2), stdin);
        cidade2[strcspn(cidade2, "\n")] = 0; //Troca o \n da string por 0, terminando a string.

        printf("Digite a populacao dessa cidade: \n"); 
        scanf("%d", &populacao2);

        printf("Digite a area em km² dessa cidade: \n");
        scanf("%f", &area2);

        printf("Digite o PIB em bilhão dessa cidade: \n");
        scanf("%f", &PIB2);

        printf("Digite o numero de pontos turisticos dessa cidade: \n");  
        scanf("%d", &pontosturisticos2);

        densidadepopulacional2 = populacao2 / area2;
        PIBpercapita2 = (PIB2*1000000000) / populacao2;
        superpoder2 = populacao2 + area2 + PIB2 + pontosturisticos2 + (1.0/densidadepopulacional2) + PIBpercapita2;

        printf("Estado: %s\n", estado2);
        printf("Codigo da carta: %s\n", codigocarta2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Populacao: %d habitantes\n", populacao2);
        printf("Area em Km²: %.2f\n", area2);
        printf("PIB: %.2f bilhões de reais\n", PIB2);
        printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf("PIB per capita: %.2f reais\n", PIBpercapita2);
        printf("O Super Poder é: %.2f\n", superpoder2);

        printf("Cadastro de cartas concluido.\n");

        // Comparação simples entre cartas.
        resultado1 = populacao1 > populacao2;
        resultado2 = area1 > area2;
        resultado3 = PIB1 > PIB2;
        resultado4 = pontosturisticos1 > pontosturisticos2;
        resultado5 = densidadepopulacional1 < densidadepopulacional2;
        resultado6 = PIBpercapita1 > PIBpercapita2;
        resultado7 = superpoder1 > superpoder2;
        

        printf("Comparação de cartas: \n");
        printf("População: A Carta %d venceu.\n", resultado1 + 1);
        printf("Área: A Carta %d venceu.\n", resultado2 + 1);
        printf("PIB: A Carta %d venceu.\n", resultado3 + 1);
        printf("Pontos Turísticos: A Carta %d venceu.\n", resultado4 + 1);
        printf("Densidade Populacional: A Carta %d venceu.\n", resultado5 + 1);
        printf("PIB per capita: A Carta %d venceu.\n", resultado6 + 1);
        printf("Super Poder: A Carta %d venceu.\n", resultado7 + 1);

    return 0;
}
// Fim do codigo
