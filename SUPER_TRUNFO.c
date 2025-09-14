// JOGO SUPER TRUNFO DE CIDADES

/*
    DADOS PARA UTILIZAR O CÓDIGO:

    !!!!!! OBSERVAÇÃO !!!!! --> UTILIZE OS SOMENTE OS DADOS APÓS O (:), (SE FOR PRECISO) COPIAR E APERTAR O BOTÃO DIREITO DO MOUSE, UM DE CADA VEZ.
                                CERTIFIQUE-SE DE NÃO COPIAR DEIXANDO ESPAÇOS VAZIOS.
    --------------------- CARTA 01 --------------------------------
    Estado: A

    Código: A01

    Nome da Cidade: São Paulo

    População: 12325000

    Área: 1521.11 

    PIB: 699.28 

    Número de Pontos Turísticos: 50

    --------------------- CARTA 02 -------------------------------
    Estado: B

    Código: B02

    Nome da Cidade: Rio de Janeiro

    População: 6748000

    Área: 1200.25 

    PIB: 300.50 

    Número de Pontos Turísticos: 30

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void startgame(){
  // CARTA 01
    
    char estadodacidade[3];
    char codigodacarta[5];
    char nomedacidade[100];
    unsigned long int populacao;
    float area;
    float PIB;
    int pontosturisticos;
    float densidadepopulacional;// nivel aventureiro
    float PIBpercapita;//nivel aventureiro
    double SUPERPODER01;//nivel mestre

    printf("CARTA 1:\n");

    printf("Estado: ");
    scanf("%2s", estadodacidade);

    printf("Codigo da carta: ");
    scanf("%4s", codigodacarta);

    getchar(); // limpar o \n que ficou no buffer
    printf("Nome da cidade: ");
    fgets(nomedacidade, sizeof(nomedacidade), stdin);
    nomedacidade[strcspn(nomedacidade, "\n")] = 0;

    printf("Populacao da cidade: ");
    scanf("%lu", &populacao);

    printf("Area da cidade: ");
    scanf("%f", &area);

    printf("PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    //calcula automaticamente
    densidadepopulacional = populacao / area;
    PIBpercapita = (PIB * 1000000000) / populacao;//PIB convetido de bilhoes para reais

    //calculo do superpoder

    SUPERPODER01 = populacao + area + PIB + pontosturisticos + 1.0 / densidadepopulacional + PIBpercapita;

    // CARTA 02
    char estadodacidade2[3];
    char codigodacarta2[5];
    char nomedacidade2[100];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidadepopulacional2;//nivel aventureiro
    float PIBpercapita2;//nivel aventureiro
    double SUPERPODER02;//nivel mestre

    printf("\nCARTA 2:\n");

    printf("Estado: ");
    scanf("%2s", estadodacidade2);

    printf("Codigo da carta: ");
    scanf("%4s", codigodacarta2);

    getchar(); // limpar o \n do buffer
    printf("Nome da cidade: ");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = 0;

    printf("Populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Area da cidade: ");
    scanf("%f", &area2);

    printf("PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    //calcula automaticamente
    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1000000000) / populacao2;//PIB convertido de bilhoes para reais

    //calculo do superpoder

    SUPERPODER02 = populacao2 + area2 + PIB2 + pontosturisticos2 + 1.0 / densidadepopulacional2 + PIBpercapita2;

    // Exibindo CARTA 01
    printf("\n---------------------------------( CARTA 1 )--------------------------------------------\n");
    printf("Estado: %s\n", estadodacidade);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("Populacao da cidade: %lu\n", populacao);
    printf("Area : %.2f Km²\n", area);
    printf("PIB : %.2f Bilhoes R$\n", PIB);
    printf("Numero de Pontos turisticos : %d\n", pontosturisticos);
    printf("A densidade populacional e: %.2f hab/km²\n", densidadepopulacional);
    printf("O PIB per capita e: %.2f reais\n", PIBpercapita);

    // Exibindo CARTA 02
    printf("\n--------------------------------( CARTA 2 )--------------------------------------------\n");
    printf("Estado: %s\n", estadodacidade2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Populacao da cidade: %lu\n", populacao2);
    printf("Area : %.2f Km²\n", area2);
    printf("PIB : %.2f Bilhoes R$\n", PIB2);
    printf("Numero de Pontos turisticos : %d\n", pontosturisticos2);
    printf("A densidade populacional e: %.2f hab/km²\n", densidadepopulacional2);
    printf("O PIB per capita e: %.2f reais\n", PIBpercapita2);

    // BATALHA DAS CARTAS 

    printf("\n--------------------------------(START_BATTLE)-----------------------------------------------\n");
    printf("\n------------(VALOR=(1)-->CARTA_01_VENCE_____VALOR=(0)-->CARTA_02_VENCE)-----------------------\n");

    printf("Populacao: (%d) K.O\n", populacao > populacao2);
    printf("Area: (%d) K.O\n", area > area2);
    printf("PIB: (%d) K.O\n", PIB > PIB2);
    printf("Pontos Turisticos: (%d) K.O\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: (%d) K.O\n", densidadepopulacional < densidadepopulacional2);
    printf("PIB per capita: (%d) K.O\n", PIBpercapita > PIBpercapita2);
    printf("SUPER PODER: (%d) K.O\n", SUPERPODER01 > SUPERPODER02);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // DESAFIO NOVATO, IMPLEMENTANDO A LÓGICA DO JOGO

    printf("\n------------------------------(COMPARAR_TRIBUTO)----------------------------------------------\n");
    printf("\n-----------------------(O_TRIBUTO_COMPARADO_É_A_POPULAÇÃO)---------------------------------\n");

    printf("CARTA 1 - %s(%s): %lu\n", nomedacidade,estadodacidade,populacao);

    printf("CARTA 2 - %s(%s): %lu\n", nomedacidade2,estadodacidade2,populacao2);

    if(populacao > populacao2){
      printf("Carta 1 - (%s) venceu\n", nomedacidade);
    } else if(populacao < populacao2){
      printf("Carta 2 - (%s) venceu\n", nomedacidade2);
    } else {
      printf("EMPATE ENTRE ÁS CARTAS!!!\n");
    }

    // DESAFIO MESTRE, IMPLEMENTANDO A LÓGICA DO JOGO

    int resultado1, resultado2;
    char tributo1, tributo2;

    printf("\n                                 (BEM VINDO AO CAMPO DE BATALHA!!!)                                         \n");
    printf("\n                                    (ESCOLHA O PRIMEIRO ATRIBUTO:)                                          \n");
    printf("\nP. POPULAÇÃO\n");
    printf("T. P.TURISTICO\n");

    printf("ATRIBUTO ESCOLHIDO: ");
    scanf(" %c", &tributo1);

    switch (tributo1)
    {
    case 'p':
    case 'P':
      printf("ATAQUE!\n");
      resultado1 = populacao > populacao2 ? 1:0;
      break;
    case 't':
    case 'T': 
      printf("DEFESA!\n");
      resultado1 = pontosturisticos > pontosturisticos2 ? 1:0;
      break;
    default:
      printf("OPÇÃO INVALIDA.\n");
      break;
    }

    printf("\n                                    (ESCOLHA O SEGUNDO ATRIBUTO:)                                          \n");
    printf("\n                              (ESCOLHA UM TRIBUTO DIFERENTE DO ANTERIOR!!!)                                \n");
    printf("\nP. POPULAÇÃO\n");
    printf("T. P.TURISTICO\n");

    printf("ATRIBUTO ESCOLHIDO: ");
    scanf(" %c", &tributo2);

    if(tributo1 == tributo2){
      printf("ERROR!");
    } else{
      switch (tributo2)
        {
        case 'p':
        case 'P':
        printf("ATAQUE!\n");
        resultado2 = populacao > populacao2 ? 1:0;
        break;
    case 't':
    case 'T':
        printf("DEFESA!\n");
        resultado2 = pontosturisticos > pontosturisticos2 ? 1:0;
        break;
    default:
    printf("OPÇÃO INVALIDA.\n");
        break;
        }
    }
    
    if(resultado1 && resultado2){
        printf("VENCEU");
    } else if(resultado1 != resultado2){
        printf("EMPATE");
    } else {
        printf("PERDEU");
    }
    
}

// NIVEL AVENTUREIRO - LÓGICA DO JOGO
int main(void){

  const char *titulo =
  "###############################################################################\n"
  "#                                                                             #\n"
  "#    ____  _    _ ____  ______   _______     _______ ____  _    _ _____  ___  #\n"
  "#   / ___|| |  | |  _ \\|  ____| |__   __|   |__   __/ __ \\| |  | |  __ \\|__ \\ #\n"
  "#   \\___ \\| |  | | |_) | |__       | |         | | | |  | | |  | | |__) |  ) |#\n"
  "#    ___) | |  | |  _ <|  __|      | |         | | | |  | | |  | |  _  /  / / #\n"
  "#   |____/ \\____/|_| \\_\\_|         |_|         |_|  \\____/ \\____/|_| \\_\\ |____|#\n"
  "#                                                                             #\n"
  "###############################################################################\n";

  printf("%s",titulo);

  int opcao;

  printf("\nBem vindo ao jogo SUPER TRUNFO.\n"); 
  printf("\nDEV: R_BEZ\n");

  printf("\n1.START GAME\n");
  printf("\n2.Regras do jogo\n");
  printf("\n3.EXIT\n");
  printf("\n: ");
  scanf("%d",&opcao);
  getchar();

  switch (opcao) {
    case 1:
      printf("\n----------------------------------------(INICIANDO O JOGO ...)--------------------------------------------\n");
      startgame();
      break;
    case 2:
      printf("\n---------------------------------------(REGRAS DO JOGO:)---------------------------------------------------\n");
      printf("Cada carta terá atributos de cidades (População, Área, PIB, etc.).\n");
      printf("A comparação de atributos define qual carta vence.\n");
      break;
    case 3:
      printf("\n---------------------------------------(SAINDO DO JOGO ...)------------------------------------------------\n");
      return 0;
      break;
    default:
      printf("\n---------------------------------------(OPCAO INVALIDA ...)------------------------------------------------\n");
      printf("\nTENTE NOVAMENTE.\n");
      break;      
  }
  return 0;
}