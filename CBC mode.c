
#include <stdio.h>

int main() {
    int p1=10, p2=20, key=5, iv=7;
    int c1, c2;

    c1=(p1^iv)^key;
    c2=(p2^c1)^key;

    printf("Cipher block 1: %d\n",c1);
    printf("Cipher block 2: %d\n",c2);
    return 0;
}
