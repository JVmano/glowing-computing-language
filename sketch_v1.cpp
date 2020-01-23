#include <stdio.h>
#include <cstring>

// first struct
typedef struct {
    char nome[50];
    char genero[30];
    int idade;
} primeiro_teste;

// beggining of the ages
int main(void) {

    // creating the "person" variables
    primeiro_teste pessoa_1, pessoa_2, pessoa_3;

    // inserting the first information about the pessoa_1
    strcpy( pessoa_1.nome, "Rennan" );
    strcpy( pessoa_1.genero, "Desconhecido" );
    pessoa_1.idade = 351;

    // printing the data of the first person
    // if you gonna print everything in a struct variable
    // use void to save some time, scrub
    // otherwise print the child variables alone
    // void imprimir(primeiro_teste pessoa_1){
    //     printf( "\n %s", pessoa_1.nome ;
    //     printf( "\n %s", pessoa_1.genero );
    //     printf( "\n %d", pessoa_1.idade );
    // }

    printf( "\n %s", pessoa_1.nome );
    printf( "\n %s", pessoa_1.genero );
    printf( "\n %d", pessoa_1.idade );
    printf(" \n \n ");

    // for float %.2f
    // for int %d

    // - \n (new line) for new lines -
    // - %s (string) for any that's a word -

    // Will show the data of the child variables above
    // Its's short because the void done the work above
    // imprimir(pessoa_1)

    // Using user input to fill another variable
    // void insert_shit( primeiro_teste pessoa_2 ){
    //     printf(" Type your shitty name: ");
    //     scanf( "%s%*c", &pessoa_2.nome );
    // }
}