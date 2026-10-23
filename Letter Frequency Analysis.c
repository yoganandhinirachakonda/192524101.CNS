
#include <stdio.h>

int main() {
    char s[500];
    int f[26]={0}, i;

    printf("Enter ciphertext: ");
    scanf("%499s", s);

    for(i=0; s[i]!='\0'; i++)
        if(s[i]>='A' && s[i]<='Z')
            f[s[i]-'A']++;

    for(i=0; i<26; i++)
        if(f[i]>0)
            printf("%c = %d\n", 'A'+i, f[i]);

    return 0;
}
