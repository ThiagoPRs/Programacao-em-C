#include <stdio.h>  

typedef struct {  
    char estado[50];  
    char cidade[50];  
    int codigo_carta;  
    unsigned long int populacao;  
    float area;  
    float pib;  
    int pontos_turisticos;  
    float densidade_populacional;  
    float pib_per_capita;  
    float superPoder;  
} Carta;  

// Função para ler os dados da carta  
void lerDados(Carta *carta) {  
    printf("Estado: ");  
    scanf("%s", carta->estado);  
    
    printf("Código da carta: ");  
    scanf("%d", &carta->codigo_carta);  
    
    printf("Nome da cidade: ");  
    scanf("%s", carta->cidade);  
    
    printf("População: ");  
    scanf("%lu", &carta->populacao);  
    
    printf("Área (em km²): ");  
    scanf("%f", &carta->area);  
    
    printf("PIB (em milhões): ");  
    scanf("%f", &carta->pib);  
    
    printf("Número de pontos turísticos: ");  
    scanf("%d", &carta->pontos_turisticos);  
    
    // Cálculos para a densidade populacional e PIB per capita  
    carta->densidade_populacional = (float)carta->populacao / carta->area; // Garante divisão correta  
    carta->pib_per_capita = (carta->pib * 1000000) / carta->populacao; // Ajusta PIB para unidade correta  
    carta->superPoder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1.0 / carta->densidade_populacional);  
}  

// Função para exibir os resultados da carta  
void exibirResultados(Carta carta) {  
    printf("\nResultados para %s:\n", carta.cidade);  
    printf("Estado: %s\n", carta.estado);  
    printf("Código da carta: %d\n", carta.codigo_carta);  
    printf("População: %lu\n", carta.populacao);  
    printf("Área: %.2f km²\n", carta.area);  
    printf("PIB: R$ %.2f milhões\n", carta.pib);  
    printf("Número de pontos turísticos: %d\n", carta.pontos_turisticos);  
    printf("Densidade Populacional: %.2f habitantes por km²\n", carta.densidade_populacional);  
    printf("PIB per Capita: R$ %.2f\n", carta.pib_per_capita);  
    printf("Super Poder: %.2f\n", carta.superPoder);  
}  

int main() {  
    Carta carta1, carta2;  

    printf("Informe as informações para a primeira cidade:\n");  
    lerDados(&carta1);  
    
    printf("\nInforme as informações para a segunda cidade:\n");  
    lerDados(&carta2);  
    
    // Exibindo os resultados  
    exibirResultados(carta1);  
    exibirResultados(carta2);  

    // Comparação simplificada (você pode expandir isso baseado nos requisitos)  
    printf("\nComparação entre as cartas:\n");  
    if (carta1.superPoder > carta2.superPoder) {  
        printf("Super Poder: Carta 1 venceu (1)\n");  
    } else {  
        printf("Super Poder: Carta 2 venceu (0)\n");  
    }  

    return 0;  
}  
