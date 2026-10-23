
#include <stdio.h>

int main() {
    char s[100];
    int k,i;

    printf("Enter ciphertext: ");
    scanf("%99s",s);

    for(k=0;k<26;k++) {
        printf("Key %d: ",k);

        for(i=0;s[i]!='\0';i++)
            printf("%c",(s[i]-'A'-k+26)%26+'A');

        printf("\n");
    }

    return 0;
}
