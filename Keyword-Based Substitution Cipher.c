
#include <stdio.h>

int main() {
    char s[100];
    char key[] = "CIPHERABDFGJKLMNOQSTUVWXYZ";
    int i;

    printf("Enter text: ");
    scanf("%99s", s);

    for(i=0; s[i]!='\0'; i++)
        s[i] = key[s[i]-'A'];

    printf("Cipher text: %s", s);
    return 0;
}
