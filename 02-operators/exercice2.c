#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int add = a + b;
    int multiply = a * b;
    int modulo = a % b;
    int sup = a > b;

    printf("Le résultat de l'addition est de %d\n", add);
    printf("Le résultat de la multiplication est de %d\n", multiply);
    printf("Le résultat du reste de la division est de %d\n", modulo);
    printf("Si a est plus grand que b affiché %d\n", sup);

    return 0; 
}