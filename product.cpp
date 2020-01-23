#include <stdio.h>
#include <cstring>

// struct
typedef struct {
    char nome[50];
    float preco;
    int qtd;
} produtos;

int main() {

    // sub variables
    produtos produto_1, produto_2, produto_3;

    strcpy( produto_1.nome, "NULL");
    produto_1.preco = 0.0;
    produto_1.qtd = 0;

    // inputing the information
    printf( "Type the name of the product, scrub: " );
    scanf( "%s%*c", &produto_1.nome );

    printf( "What is the fortune of this shit? " );
    scanf( "%f%*c", &produto_1.preco );

    printf( "Quantity of the drug: " );
    scanf( "%d%*c", &produto_1.qtd );

    printf("\n Product: %s \n", produto_1.nome);
    printf("\n Price: %.2f \n", produto_1.preco);
    printf("\n Quantity: %d \n", produto_1.qtd);

}