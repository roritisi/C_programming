#include <stdio.h>
#include <stdlib.h>

enum menu
{
    TEA = 1,    // 1 
    COFFE = 2,  // 2
    JUICE = 3,  // 3
    WINE = 4,   // 4

};

int main()
{
    enum menu andreea = TEA;
    enum menu anca = JUICE;

    printf("Andreea ordered: %d\n", andreea);
    printf("Anca ordered: %d\n", anca);

    return EXIT_SUCCESS;

}