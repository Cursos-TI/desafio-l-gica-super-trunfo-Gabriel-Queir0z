#include <stdio.h>
#include <string.h>

int main() {
    float area, pib, densidade, populacao, soma;
    int pontosturisticos;
    char cidade[50];

    float area2, pib2, densidade2, populacao2, soma2;
    int pontosturisticos2;
    char cidade2[50];

    int escolha, escolha2;

    //===========================entrada1========================================
    printf("Qual o nome da cidade?: \n");
    scanf("%49s", cidade);
    printf("Qual a populacao desta cidade?: \n");
    scanf("%f", &populacao);
    printf("Qual a area desta cidade?: \n");
    scanf("%f", &area);
    printf("Qual o pib desta cidade?: \n");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos esta cidade tem?: \n");
    scanf("%d", &pontosturisticos);
    
    //===========================entrada2========================================
    printf("Qual o nome da segunda cidade?: \n");
    scanf("%49s", cidade2);
    printf("Qual a populacao desta segunda cidade?: \n");
    scanf("%f", &populacao2);
    printf("Qual a area desta segunda cidade?: \n");
    scanf("%f", &area2);
    printf("Qual o pib desta segunda cidade?: \n");
    scanf("%f", &pib2);
    printf("Quantos pontos turisticos esta segunda cidade tem?: \n");
    scanf("%d", &pontosturisticos2);
    
    //===========================ESCOLHA DO PRIMEIRO ATRIBUTO========================================
    printf("Qual atributo voce quer comparar? (1) Populacao (2) Area (3) PIB (4) Pontos turisticos (5) Densidade populacional\n");
    scanf("%d", &escolha);
    
    //===========================calculos========================================
    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    
    //===========================saida========================================
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n");
    printf("Comparando %s com %s:\n", cidade, cidade2);
    printf("---------------------------------------------------\n");
    
    switch (escolha) {
    case 1:
        printf("Atributo escolhido: Populacao.\n");
        printf("A populacao de %s e: %f e da %s e: %f\n", cidade, populacao, cidade2, populacao2);
        printf("Qual o segundo atributo voce quer comparar?(2) Area (3) PIB (4) Pontos turisticos (5) Densidade populacional\n");
        scanf("%d", &escolha2);

        switch (escolha2) {
        case 1:
            printf("Voce ja escolheu esse atributo, escolha outro.\n");
            return 0;
        case 2:
            printf("Segundo atributo escolhido: Area.\n");
            printf("A area de %s e: %.2f e da %s e: %.2f\n", cidade, area, cidade2, area2);
            soma = populacao + area;
            soma2 = populacao2 + area2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Segundo atributo escolhido: PIB.\n");
            printf("O PIB de %s e: %.2f e da %s e: %.2f\n", cidade, pib, cidade2, pib2);
            soma = populacao + pib;
            soma2 = populacao2 + pib2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("Segundo atributo escolhido: Pontos turisticos.\n");
            printf("A cidade %s tem %d pontos turisticos e a cidade %s tem %d pontos turisticos.\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
            soma = populacao + (float)pontosturisticos;
            soma2 = populacao2 + (float)pontosturisticos2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Segundo atributo escolhido: Densidade populacional.\n");
            printf("A densidade populacional de %s e: %.2f e da %s e: %.2f\n", cidade, densidade, cidade2, densidade2);
            soma = populacao + 1/densidade;
            soma2 = populacao2 + 1/densidade2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha um numero de 2 a 5.\n");
            break;
        }
        break;

    case 2:
        printf("Atributo escolhido: Area.\n");
        printf("A area de %s e: %.2f e da %s e: %.2f\n", cidade, area, cidade2, area2);
        printf("Qual o segundo atributo voce quer comparar?(1) Populacao (3) PIB (4) Pontos turisticos (5) Densidade populacional\n");
        scanf("%d", &escolha2);
        switch (escolha2) {
        case 1:
            printf("Segundo atributo escolhido: Populacao.\n");
            printf("A populacao de %s e: %f e da %s e: %f\n", cidade, populacao, cidade2, populacao2);
            soma = area + populacao;
            soma2 = area2 + populacao2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("Voce ja escolheu esse atributo, escolha outro.\n");
            return 0;
        case 3:
            printf("Segundo atributo escolhido: PIB.\n");
            printf("O PIB de %s e: %.2f e da %s e: %.2f\n", cidade, pib, cidade2, pib2);
            soma = area + pib;
            soma2 = area2 + pib2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("Segundo atributo escolhido: Pontos turisticos.\n");
            printf("A cidade %s tem %d pontos turisticos e a cidade %s tem %d pontos turisticos.\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
            soma = area + (float)pontosturisticos;
            soma2 = area2 + (float)pontosturisticos2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Segundo atributo escolhido: Densidade populacional.\n");
            printf("A densidade populacional de %s e: %.2f e da %s e: %.2f\n", cidade, densidade, cidade2, densidade2);
            soma = area + 1/densidade;
            soma2 = area2 + 1/densidade2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha um numero de 1 a 5(exceto 2).\n");
            break;
        }
        break;

    case 3:
        printf("Atributo escolhido: PIB.\n");
        printf("O PIB de %s e: %.2f e da %s e: %.2f\n", cidade, pib, cidade2, pib2);
        printf("Qual o segundo atributo voce quer comparar?(1) Populacao (2) Area (4) Pontos turisticos (5) Densidade populacional\n");
        scanf("%d", &escolha2);
        switch (escolha2) {
        case 1:
            printf("Segundo atributo escolhido: Populacao.\n");
            printf("A populacao de %s e: %f e da %s e: %f\n", cidade, populacao, cidade2, populacao2);
            soma = pib + populacao;
            soma2 = pib2 + populacao2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("Segundo atributo escolhido: Area.\n");
            printf("A area de %s e: %.2f e da %s e: %.2f\n", cidade, area, cidade2, area2);
            soma = pib + area;
            soma2 = pib2 + area2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Voce ja escolheu esse atributo, escolha outro.\n");
            return 0;
        case 4:
            printf("Segundo atributo escolhido: Pontos turisticos.\n");
            printf("A cidade %s tem %d pontos turisticos e a cidade %s tem %d pontos turisticos.\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
            soma = pib + (float)pontosturisticos;
            soma2 = pib2 + (float)pontosturisticos2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Segundo atributo escolhido: Densidade populacional.\n");
            printf("A densidade populacional de %s e: %.2f e da %s e: %.2f\n", cidade, densidade, cidade2, densidade2);
            soma = pib + 1/densidade;
            soma2 = pib2 + 1/densidade2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha um numero de 1 a 5(exceto 3).\n");
            break;
        }
        break;

    case 4:
        printf("Atributo escolhido: Pontos turisticos.\n");
        printf("A cidade %s tem %d pontos turisticos e a cidade %s tem %d pontos turisticos.\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
        printf("Qual o segundo atributo voce quer comparar?(1) Populacao (2) Area (3) PIB (5) Densidade populacional\n");
        scanf("%d", &escolha2);
        switch (escolha2) {
        case 1:
            printf("Segundo atributo escolhido: Populacao.\n");
            printf("A populacao de %s e: %f e da %s e: %f\n", cidade, populacao, cidade2, populacao2);
            soma = (float)pontosturisticos + populacao;
            soma2 = (float)pontosturisticos2 + populacao2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("Segundo atributo escolhido: Area.\n");
            printf("A area de %s e: %.2f e da %s e: %.2f\n", cidade, area, cidade2, area2);
            soma = (float)pontosturisticos + area;
            soma2 = (float)pontosturisticos2 + area2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Segundo atributo escolhido: PIB.\n");
            printf("O PIB de %s e: %.2f e da %s e: %.2f\n", cidade, pib, cidade2, pib2);
            soma = (float)pontosturisticos + pib;
            soma2 = (float)pontosturisticos2 + pib2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("Voce ja escolheu esse atributo, escolha outro.\n");
            return 0;
        case 5:
            printf("Segundo atributo escolhido: Densidade populacional.\n");
            printf("A densidade populacional de %s e: %.2f e da %s e: %.2f\n", cidade, densidade, cidade2, densidade2);
            soma = (float)pontosturisticos + 1/densidade;
            soma2 = (float)pontosturisticos2 + 1/densidade2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        default:
            printf("Opcao invalida. Por favor, escolha um numero de 1 a 5 (exceto 4).\n");
            break;
        }
        break;

    case 5:
        printf("Atributo escolhido: Densidade populacional.\n");
        printf("A densidade populacional de %s e: %.2f e da %s e: %.2f\n", cidade, densidade, cidade2, densidade2);
        printf("Qual o segundo atributo voce quer comparar?(1) Populacao (2) Area (3) PIB (4) Pontos turisticos\n");
        scanf("%d", &escolha2);
        switch (escolha2) {
        case 1:
            printf("Segundo atributo escolhido: Populacao.\n");
            printf("A populacao de %s e: %f e da %s e: %f\n", cidade, populacao, cidade2, populacao2);
            soma = 1/densidade + populacao;
            soma2 = 1/densidade2 + populacao2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 2:
            printf("Segundo atributo escolhido: Area.\n");
            printf("A area de %s e: %.2f e da %s e: %.2f\n", cidade, area, cidade2, area2);
            soma = 1/densidade + area;
            soma2 = 1/densidade2 + area2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 3:
            printf("Segundo atributo escolhido: PIB.\n");
            printf("O PIB de %s e: %.2f e da %s e: %.2f\n", cidade, pib, cidade2, pib2);
            soma = 1/densidade + pib;
            soma2 = 1/densidade2 + pib2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 4:
            printf("Segundo atributo escolhido: Pontos turisticos.\n");
            printf("A cidade %s tem %d pontos turisticos e a cidade %s tem %d pontos turisticos.\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
            soma = 1/densidade + (float)pontosturisticos;
            soma2 = 1/densidade2 + (float)pontosturisticos2;
            if (soma > soma2) {
                printf("A cidade %s venceu.\n", cidade);
            } else if (soma < soma2) {
                printf("A cidade %s venceu.\n", cidade2);
            } else {
                printf("Empate\n");
            }
            break;
        case 5:
            printf("Voce ja escolheu esse atributo, escolha outro.\n");
            return 0;
        }
        break;
    default:
        printf("Opcao invalida. Por favor, escolha um numero de 1 a 5.\n");
        break;
    }
    return 0;
}

