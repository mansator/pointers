#include <stdio.h>



int main() {
    char k = 'A';


    printf("1: %d\n", k);
    printf("2: %c\n", k);
    printf("3: %p\n", &k);
    printf("\n");

    char *pk = &k;
    printf("4: %p\n", pk);
    printf("5: %d\n", *pk);
    printf("6: %c\n", *pk);
    printf("7: %p\n", &pk);
    printf("\n");

    char **ppk = &pk;
    printf("8: %p\n", ppk);
    printf("9: %p\n", *ppk);
    printf("9: %c\n", **ppk);

    return 0;
}
