
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], key[100];
    int i, n;

    printf("Enter text: ");
    scanf("%99s", s);
    printf("Enter key: ");
    scanf("%99s", key);

    n = strlen(key);

    for(i=0; s[i]!='\0'; i++)
        s[i] = (s[i]-'A' + key[i%n]-'A')%26+'A';

    printf("Cipher text: %s", s);
    return 0;
}
