#include <stdio.h>

int aire_rectangle(int a, int b) {
    return a * b; 
}

int est_paire(int nombre) {
    if (nombre % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int resultat = aire_rectangle(10, 7);
    printf("L'aire du rectancgle est %d\n", resultat);

    int pair = est_paire(5);
    printf("Le résultat est %d\n", pair);
    return 0;
}