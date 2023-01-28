#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    TEA = 1,    // 1 
    COFFE = 2,  // 2
    JUICE = 3,  // 3
    WINE = 4,   // 4

}Menu;

int main()
{
    Menu andreea = TEA;
    Menu anca = JUICE;

    printf("Andreea ordered: %d\n", andreea);
    printf("Anca ordered: %d\n", anca);

    return EXIT_SUCCESS;

}