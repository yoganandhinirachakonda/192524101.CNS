
#include <stdio.h>

int main() {
    char s[100];
    int i;
    char key[] = "QWERTYUIOPASDFGHJKLZXCVBNM";

    printf("Enter text: ");
    scanf("%99s", s);

    for(i = 0; s[i] != '\0'; i++)
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = key[s[i] - 'A'];

    printf("Cipher text: %s", s);
    return 0;
}
