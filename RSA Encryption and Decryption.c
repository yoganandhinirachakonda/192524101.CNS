
#include <stdio.h>

int main() {
    int m=4, n=33, e=3, d=7;
    int c=1, p=1, i;

    for(i=0;i<e;i++) c=c*m%n;
    for(i=0;i<d;i++) p=p*c%n;

    printf("Ciphertext: %d\n",c);
    printf("Decrypted text: %d\n",p);
    return 0;
}
