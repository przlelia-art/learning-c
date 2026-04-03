#include <stdio.h>

int main() {
    int nombre = 42;
    int *pointeur = &nombre;
    printf("Adresse : %p\n", pointeur);
    printf("Valeur : %d\n", *pointeur);

    *pointeur = 60;
    printf("%d\n", nombre);

    return 0;
}