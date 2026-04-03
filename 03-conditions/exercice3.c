#include <stdio.h>

int main() {
    int note = 15;

    if (note >= 16){
        printf("Excellent\n");
    } else if (note >= 14) {
        printf("Bien\n");
    } else if (note >= 10) {
        printf("Passable\n");
    } else {
        printf("Insuffisant\n");
    }
    return 0;
}