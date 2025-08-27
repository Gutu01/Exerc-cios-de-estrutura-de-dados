#include <stdio.h>
#include <string.h>

#define max_letras_produto 100

typedef struct {

    char nome[max_letras_produto];
    float preco;
    int quantidade_estoque;
    float valor_total_estoque;

}Produto;

void limparbufferentrada(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){

    Produto produto;

    printf("Nome:");
    fgets(produto.nome, max_letras_produto, stdin);
    produto.nome[strcspn(produto.nome, "\n")] = '\0';

    printf("Preço:");
    scanf("%f", &produto.preco);
    limparbufferentrada();

    printf("Quantidade de estoque:");
    scanf("%d", &produto.quantidade_estoque);
    limparbufferentrada();

    produto.valor_total_estoque = produto.preco*produto.quantidade_estoque;

    printf("\nValor total do estoque:R$%.2f", produto.valor_total_estoque);

    return 0;
}