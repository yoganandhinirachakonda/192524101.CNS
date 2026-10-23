 #include <stdio.h>
int main()
{
    char s[100];
    int k, i;

    printf("Enter text: ");
    scanf("%s", s);

    printf("Enter key: ");
    scanf("%d", &k);

    for(i = 0; s[i] != '\0'; i++)
        s[i] = (s[i] - 'A' + k) % 26 + 'A';

    printf("Encrypted text: %s", s);
    return 0;
}