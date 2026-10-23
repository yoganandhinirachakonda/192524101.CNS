
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    int key[100], i, n=0;

    printf("Enter text: ");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i];i++)
        if(isalpha((unsigned char)s[i]))
            s[n++]=toupper((unsigned char)s[i]);

    s[n]='\0';

    printf("Enter %d key numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&key[i]);

    printf("Cipher text: ");
    for(i=0;i<n;i++)
        printf("%c",(s[i]-'A'+key[i])%26+'A');

    return 0;
}
