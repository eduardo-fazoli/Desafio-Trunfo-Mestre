#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
   


    // primeira carta 
    char nome1 []= "São Paulo";
    int habitantes1 = 12325232;
    float area1 = 1521;
    float pib1 = 1.3e12;
    int pontostu1 = 10;

    float densidade1 = habitantes1/area1;
    float pibpercapita1 = pib1/habitantes1; 
    

    // segunda carta
    char nome2 [] = "Rio de Janeiro";
    int habitantes2 = 6782268;
    float area2 = 1200;
    float pib2 = 671e9;
    int pontostu2 = 5;
    
    float densidade2 = habitantes2/area2;
    float pibpercapita2 = pib2/habitantes2;

    //soma

    float soma1 = habitantes1 + area1 + pib1 + pontostu1 + densidade1 + pibpercapita1;
    float soma2 = habitantes2 + area2 + pib2 + pontostu2 + densidade2 + pibpercapita2;

    //comparar

    int comphab = habitantes1 - habitantes2;
    int comparea = area1 - area2;
    float comppib = pib1 - pib2; 
    int comppontos = pontostu1 - pontostu2;
    int compdens = densidade1 - densidade2;
    int comppibpc = pibpercapita1 - pibpercapita2;
    float compsoma = soma1 - soma2;

    //menu

    int opcao;
    char continuar;

    do {
        // Exibe o menu
        printf("\n--- Menu Interativo ---\n");
        printf("1. Visualizar Carta 1 \n");
        printf("2. Visualizar Carta 2 \n");
        printf("3. Começar o jogo! \n");
        printf("4. Voltar/Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

    
        switch (opcao) {
            case 1:
                printf("Você escolheu a Opção 1.\n");
                // codig
                printf("\n");
                printf("A cidade da carta é %s \n", nome1);
                printf("A cidade tem %d habitantes!\n", habitantes1);
                printf("A area da cidade é %.2f !\n", area1);
                printf("O pib da cidade é %.2f !\n", pib1);
                printf("A cidade tem %d pontos turisticos!\n", pontostu1);
                printf("A densidade demografica da cidade é %.2f !\n", densidade1);
                printf("O pib per capita da cidade é %.2f !\n", pibpercapita1);
                break;

            case 2:
                printf("Você escolheu a Opção 2.\n");
                // codig
                printf("\n");
                printf("A cidade da carta é %s \n", nome2);
                printf("A cidade tem %d habitantes!\n", habitantes2);
                printf("A area da cidade é %.2f !\n", area2);
                printf("O pib da cidade é %.2f !\n", pib2);
                printf("A cidade tem %d pontos turisticos!\n", pontostu2);
                printf("A densidade demografica da cidade é %.2f !\n", densidade2);
                printf("O pib per capita da cidade é %.2f !\n", pibpercapita2);
                break;

            case 3:
                printf("\nVocê escolheu a Opção 3.\n");
                // codig
                printf("\nVocê esta comparando as cidades de %s e %s !\n", nome1, nome2);
                
                printf("\nComparando a quantidade de habitantes. . . \n");
                
                if (habitantes1 > habitantes2){
                    printf("%s é o vencedor!\n", nome1);
                    printf("A diferença foi de %d pontos! \n", comphab);

                } else if (habitantes1 < habitantes2){
                    printf("%s é o vencedor!\n", nome2);
                    printf("A diferença foi de %d pontos! \n", comphab);

                }else{
                    printf("Que partida acirrada! Foi um Empate!\n");
                }

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                printf("\nComparando a area das cidades. . . \n");
                
                if (area1 > area2){
                    printf("%s é o vencedor!\n", nome1);
                    printf("A diferença foi de %d pontos! \n", comparea);

                } else if (area1 < area2){
                    printf("%s é o vencedor!\n", nome2);
                    printf("A diferença foi de %d pontos! \n", comparea);

                }else{
                    printf("Que partida acirrada! Foi um Empate!\n");
                }

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                printf("\nComparando o pib das cidades. . . \n");
                
                if (pib1 > pib2){
                    printf("%s é o vencedor!\n", nome1);
                    printf("A diferença foi de %.2f pontos! \n", comppib);

                } else if (pib1 < pib2){
                    printf("%s é o vencedor!\n", nome2);
                    printf("A diferença foi de %.2f pontos! \n", comppib);

                }else{
                    printf("Que partida acirrada! Foi um Empate!\n");
                }

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                printf("\nComparando os pontos turisticos das cidades. . . \n");
                
                if (pontostu1 > pontostu2){
                    printf("%s é o vencedor!\n", nome1);
                    printf("A diferença foi de %d pontos! \n", comppontos);

                } else if (pontostu1 < pontostu2){
                    printf("%s é o vencedor!\n", nome2);
                    printf("A diferença foi de %d pontos! \n", comppontos);

                }else{
                    printf("Que partida acirrada! Foi um Empate!\n");
                }

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                printf("\nComparando a densidade demografica das cidades. . . \n");
                
                if (densidade1 > densidade2){
                    printf("%s é o vencedor!\n", nome1);
                    printf("A diferença foi de %d pontos! \n", compdens);

                } else if (densidade1 < densidade2){
                    printf("%s é o vencedor!\n", nome2);
                    printf("A diferença foi de %d pontos! \n", compdens);

                }else{
                    printf("Que partida acirrada! Foi um Empate!\n");
                }

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                printf("\nComparando o pib per capita das cidades. . . \n");
                
                if (pibpercapita1 > pibpercapita2){
                    printf("%s é o vencedor!\n", nome1);
                    printf("A diferença foi de %d pontos! \n", comppibpc);

                } else if (pibpercapita1 < pibpercapita2){
                    printf("%s é o vencedor!\n", nome2);
                    printf("A diferença foi de %d pontos! \n", comppibpc);

                }else{
                    printf("Que partida acirrada! Foi um Empate!\n");
                }

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                printf("=================================\n");
                printf("Comparando agora a soma total dos pontos!\n");
                printf("\n");
                printf("São Paulo tem um total de %.2f pontos!\n", soma1);
                printf("\n");
                printf("Rio de Janeiro tem um total de %.2f pontos!\n", soma2);

                printf("E o Vencedor é. . . \n");

                printf("\nPressione S para continuar: ");
                scanf(" %c", &continuar);

                if (soma1 > soma2){
                    printf("🎊 São Paulo é o vencedor com %.2f pontos a mais que Rio de Janeiro! 🎊\n", compsoma);
                }
                else if (soma1 < soma2){
                    printf("🎊Rio de Janeiro é o vencedor com %.2f pontos a mais que São Paulo!🎊\n", compsoma);
                } else { 
                    printf("EMPAAAAATE!!!");
                }

                break;
            case 4:
                printf("Saindo...\n");
                return 0;
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

        printf("\nPressione S para continuar: ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S'); 

    printf("Programa encerrado.\n");

    return 0;

}