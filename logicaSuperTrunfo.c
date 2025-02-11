#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
        // Variávies da primeira carta.
        char Estado1 [30];
        char Cidade1 [30];
        char codigo_da_cidade1 [30];
        float populacao1;
        float area1;
        float Densidade_populacional1;
        float PIB1;
        float PIB_per_capta1 ;
        float numero_de_pontos_turisticos1;
        


        //Variáveis da segunda carta.
        char Estado2 [30];
        char Cidade2 [30];
        char codigo_da_cidade2 [30];
        float populacao2;
        float area2;
        float Densidade_populacional2;
        float PIB2;
        float PIB_per_capta2 ;
        float numero_de_pontos_turisticos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

        // Cadastro da primeira carta
        printf ("****BEM VINDO AO JOGO SUPER TRUNFO****");
        puts ("");
        printf("***Cadastro da primeira carta***\n");
        printf("Digite o estado: ");
        scanf("%s", Estado1 );

        printf("Digite o nome da cidade: ");
        scanf("%s", Cidade1);
        
        printf("Digite o codigo da cidade: ");
        scanf("%s", codigo_da_cidade1 );

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao1 );
        
        printf("Digite a área da cidade (km2): ");
        scanf("%f", &area1 );
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &PIB1 );   

        printf("Digite o número de pontos turisticos da cidade:");
        scanf("%f", &numero_de_pontos_turisticos1 );
        puts("");

        // Cadastro da segunda carta

        printf("***Cadastro da segunda carta***\n");
        printf("Digite o estado: ");
        scanf("%s", Estado2 );

        printf("Digite o nome da cidade: ");
        scanf("%s", Cidade2);
        
        printf("Digite o codigo da cidade: ");
        scanf("%s", codigo_da_cidade2 );

        printf("Digite a população da cidade: ");
        scanf("%f", &populacao2 );
        
        printf("Digite a área da cidade (km2): ");
        scanf("%f", &area2 );
        
        printf("Digite o PIB da cidade: ");
        scanf("%f", &PIB2 );   

        printf("Digite o número de pontos turisticos da cidade:");
        scanf("%f", &numero_de_pontos_turisticos2 );

                /*
         Cálculo de Densidade Populacional: População dividida pela área da cidade.
        e
        PIB per Capita: PIB total dividido pela população.
         */ 
        // Cálculos para primeira carta
        Densidade_populacional1 = populacao1 / area1;
        PIB_per_capta1 = PIB1 / populacao1;

        // Cálculos para segunda carta
        Densidade_populacional2 = populacao2 / area2;
        PIB_per_capta2 = PIB2 / populacao2;

    //Mostrando as informações calculadas com a informaçoes de entrada
        puts("");
        printf ("Processando...\n");
        puts("");
        printf ("Foi apurado que:\n");
        printf ("A densidade populacional de %s é: %.2f \n", Cidade1, Densidade_populacional1);
        printf ("O PIB per capta de %s é: %.2f \n", Cidade1, PIB_per_capta1);
        printf ("A densidade populacional de %s é: %.2f \n", Cidade2, Densidade_populacional2);
        printf ("O PIB per capta de %s é: %.2f \n", Cidade2, PIB_per_capta2);
        puts("");

    // Agora vamos jogar
        printf ("Vamos Jogar?\n");
        printf ("Jogadores, escolham sabiamente, qual propriedade vocês querem comparar?\n");
        printf ("Digite o número da opção.\n");
        printf ("1. População\n");
        printf ("2. Área\n");
        printf ("3. PIB\n");
        printf ("4. Número de pontos turísticos\n");
        printf ("5. Densidade populacional\n");
        printf ("6. PIB per capta\n");
        puts ("");

        int EscolhaJogador1;
        int EscolhaJogador2;

        printf ("Escolha do jogador 1:");
        scanf ("%d", &EscolhaJogador1);
        puts ("");
        printf ("Escolha do jogador 2:");
        scanf ("%d", &EscolhaJogador2);

        switch (EscolhaJogador1)
        {
        case 1:
            printf ("")
            break;
        
        default:
            break;
        }

/*
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
        
    //Tornando o jogo mais amigável
        printf ("Processando...\n");
        puts("");
        printf ("Foi apurado que:\n");

    // Exemplo:
            if (populacao1 > populacao2) {
            printf("%s tem maior população que %s\n", Cidade1, Cidade2);
            } else {
                printf("%s tem maior população que %s\n", Cidade2, Cidade1);
            }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
        puts("");
        printf ("***  RESULTADO DO JOGO  ***\n");
            if (populacao1 > populacao2)
            {
                printf("A cidade vencedora é: %s\n", Cidade1);
            }
                else 
                printf ("A cidade vencedora é: %s\n", Cidade2);
            
    //justificativa da vitória
        if (populacao1 > populacao2)
            {
                printf("Pois %s tem maior população, são %.2f habitantes.\n", Cidade1, populacao1);
            }
                else 
                printf ("Pois %s tem maior população, são %.2f habitantes.\n", Cidade2, populacao2);
*/

    return 0;
}
