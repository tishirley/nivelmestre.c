#include <stdio.h>

int main(){
    // Declarar variáveis Produto, u i estoque, double valor unitário, double valor total e
    // u i quantidade mínima
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA =  500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    // Exibir as informações dos produtos
    printf("Produto %s tem estoque %u e o valor unitário é %.2f"\n, produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é %.2f"\n, produtoB, estoqueB, valorB);
    
    // Comparações com o valor mínimo do estoque

    // Comparações entre os valores totais dos produtos

    return 0;

}