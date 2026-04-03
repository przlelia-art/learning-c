#include <stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("i vaut %d\n", i);
    }

    int i = 1;
    while (i <= 10) {
        printf("3 x %d = %d\n", i, 3 * i);
        i++;
    }
    return 0;
}