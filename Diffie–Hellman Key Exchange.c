
#include <stdio.h>

int main() {
    int p=23, g=5, a=6, b=15;
    int A=1, B=1, k1=1, k2=1, i;

    for(i=0;i<a;i++) A=A*g%p;
    for(i=0;i<b;i++) B=B*g%p;
    for(i=0;i<a;i++) k1=k1*B%p;
    for(i=0;i<b;i++) k2=k2*A%p;

    printf("Alice public key: %d\n",A);
    printf("Bob public key: %d\n",B);
    printf("Alice shared key: %d\n",k1);
    printf("Bob shared key: %d\n",k2);
    return 0;
}
