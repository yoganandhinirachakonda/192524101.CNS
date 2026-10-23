
#include <stdio.h>

int main() {
    char s[100];
    int key, i;

    printf("Enter text: ");
    scanf("%99s", s);
    printf("Enter key: ");
    scanf("%d", &key);

    printf("Encrypted: ");
    for(i=0; s[i]!='\0'; i++)
        printf("%c", s[i]^key);

    return 0;
}
