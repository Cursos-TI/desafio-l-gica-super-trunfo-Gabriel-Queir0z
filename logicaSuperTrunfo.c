#include <stdio.h>
int main() {
//cadastrar estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
float area, pib, densidade, pibpercapta;
int populacao, pontosturisticos, codigo;
char estado[50], cidade[50];

float area2,pib2, densidade2, pibpercapta2;
int populacao2, pontosturisticos2, codigo2;
char estado2[50], cidade2[50];

int escolha;

//===========================entrada1========================================
printf("qual o nome da estado?: ");
scanf("%49s", estado);
printf("qual o codigo da carta?  (de 1 a 10): ");
scanf("%d", &codigo);
printf("qual o nome da cidade?: ");
scanf("%49s", cidade);
printf("qual a populacao desta cidade?: ");
scanf("%d", &populacao);
printf("qual a area desta cidade?: ");
scanf("%f", &area);
printf("qual o pib desta cidade?: ");
scanf("%f", &pib);
printf("quantos pontos turisticos esta cidade tem?: ");
scanf("%d", &pontosturisticos);
//===========================entrada2========================================
printf("qual o nome do segundo estado?: ");
scanf("%49s", estado2);
printf("qual o codigo da segunda carta?  (de 1 a 10): ");
scanf("%d", &codigo2);
printf("qual o nome da segunda cidade?: "); 
scanf("%49s", cidade2);
printf("qual a populacao desta segunda cidade?: ");
scanf("%d", &populacao2); 
printf("qual a area desta segunda cidade?: ");
scanf("%f", &area2);
printf("qual o pib desta segunda cidade?: ");
scanf("%f", &pib2);
printf("quantos pontos turisticos esta segunda cidade tem?: ");
scanf("%d", &pontosturisticos2);


printf ("qual atributo vc quer comparar? (1) Populacao (2) Area (3) PIB (4) Pontos turisticos (5) Densidade populacional (6) PIB per capita\n");
scanf("%d", &escolha);
//===========================calculos========================================
densidade = populacao / area;
densidade2 = populacao2 / area2;
pibpercapta = pib / populacao;
pibpercapta2 = pib2 / populacao2;
//===========================saída========================================
printf("---------------------------------------------------\n");
printf("estado: %s\n", estado);
printf("codigo da carta: %d\n", codigo);
printf("cidade: %s\n", cidade);
printf("populacao: %d\n", populacao);
printf("area: %.2f\n", area);
printf("pib: %.2f\n", pib);
printf("pontos turisticos: %d\n", pontosturisticos);
printf("densidade populacional: %.2f\n", densidade);
printf("pib per capita: %.2f\n", pibpercapta);
printf("---------------------------------------------------\n");
printf("segundo estado: %s\n", estado2);
printf("codigo da segunda carta : %d\n", codigo2);
printf("segunda cidade: %s\n", cidade2);
printf("populacao: %d\n", populacao2);
printf("area: %.2f\n", area2);
printf("pib: %.2f\n", pib2);
printf("pontos turisticos: %d\n", pontosturisticos2);
printf("densidade populacional: %.2f\n", densidade2);
printf("pib per capita: %.2f\n", pibpercapta2);
printf("---------------------------------------------------\n");
printf("Comparando as duas cidades:\n");
printf("---------------------------------------------------\n");
switch (escolha) {
    case 1:
        if (populacao > populacao2) {
            printf("A cidade %s tem uma populacao maior que a cidade %s.\n", cidade, cidade2);
        } else if (populacao < populacao2) {
            printf("A cidade %s tem uma populacao menor que a cidade %s.\n", cidade, cidade2);
        }
        else {
            printf("As cidades %s e %s têm a mesma populacao.\n", cidade, cidade2);
        }
        break;
    case 2:
        if (area > area2) {
            printf("A cidade %s tem uma area maior que a cidade %s.\n", cidade, cidade2);   
        } else if (area < area2) {
            printf("A cidade %s tem uma area menor que a cidade %s.\n", cidade, cidade2);
        } else {
            printf("As cidades %s e %s têm a mesma area.\n", cidade, cidade2);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("A cidade %s tem um PIB maior que a cidade %s.\n", cidade, cidade2);
        } else if (pib < pib2) {
            printf("A cidade %s tem um PIB menor que a cidade %s.\n", cidade, cidade2);
        }  else {
            printf("As cidades %s e %s têm o mesmo PIB.\n", cidade, cidade2);
        }
        break;
    case 4:
        if (pontosturisticos > pontosturisticos2) {
            printf("A cidade %s tem mais pontos turisticos que a cidade %s.\n", cidade, cidade2);
        }
        else if (pontosturisticos < pontosturisticos2) {
            printf("A cidade %s tem menos pontos turisticos que a cidade %s.\n", cidade, cidade2);
        } else {
            printf("As cidades %s e %s têm o mesmo número de pontos turisticos.\n", cidade, cidade2);
        }
        break;
    case 5:
        if (densidade > densidade2) {
            printf("A cidade %s tem uma densidade populacional maior que a cidade %s.\n", cidade, cidade2);
        } else if (densidade < densidade2) {
            printf("A cidade %s tem uma densidade populacional menor que a cidade %s.\n", cidade, cidade2);
        }   else {
            printf("As cidades %s e %s têm a mesma densidade populacional.\n", cidade, cidade2);
        }
        break;
    case 6:
        if (pibpercapta > pibpercapta2) {
            printf("A cidade %s tem um PIB per capita maior que a cidade %s.\n", cidade, cidade2);  
        } else if (pibpercapta < pibpercapta2) {
            printf("A cidade %s tem um PIB per capita menor que a cidade %s.\n", cidade, cidade2);
        }   else { 
            printf("As cidades %s e %s têm o mesmo PIB per capita.\n", cidade, cidade2);
        }
        break;
    default:
        printf("Opcao invalida. Por favor, escolha um número de 1 a 6.\n");
        break;  
    }



return 0;
}

