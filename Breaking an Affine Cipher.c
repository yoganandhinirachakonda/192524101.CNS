
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int a, b, i, x;

    printf("Enter ciphertext: ");
    scanf("%99s", s);

    for(a=1; a<26; a++) {
        if(a%2==0 || a%13==0) continue;

        for(b=0; b<26; b++) {
            printf("\nKey %d,%d: ", a, b);

            for(i=0; s[i]!='\0'; i++) {
                x=s[i]-'A'-b;
                while(x<0) x+=26;

                for(int d=0; d<26; d++)
                    if(a*d%26==x)
                        printf("%c",'A'+d);
            }
        }
    }
    return 0;
}
