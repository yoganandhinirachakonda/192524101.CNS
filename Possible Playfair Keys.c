
#include <stdio.h>
#include <math.h>

int main() {
    double total=0, effective=0;
    int i;

    for(i=1;i<=25;i++)
        total += log(i)/log(2);

    for(i=1;i<=24;i++)
        effective += log(i)/log(2);

    printf("Total keys: approximately 2^%.2f\n",total);
    printf("Effective keys: approximately 2^%.2f\n",
           effective);

    return 0;
}
