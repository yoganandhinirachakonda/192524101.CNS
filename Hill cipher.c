
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[200], p[200], c[200], d[200];
    int i,n=0,x,y;

    printf("Enter message: ");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i];i++)
        if(isalpha((unsigned char)s[i]))
            p[n++]=toupper((unsigned char)s[i]);

    if(n%2) p[n++]='X';
    p[n]='\0';

    for(i=0;i<n;i+=2) {
        x=p[i]-'A'; y=p[i+1]-'A';
        c[i]=(9*x+4*y)%26+'A';
        c[i+1]=(5*x+7*y)%26+'A';
    }
    c[n]='\0';

    for(i=0;i<n;i+=2) {
        x=c[i]-'A'; y=c[i+1]-'A';
        d[i]=(5*x+12*y)%26+'A';
        d[i+1]=(15*x+25*y)%26+'A';
    }
    d[n]='\0';

    printf("Cipher text: %s\n",c);
    printf("Decrypted text: %s\n",d);
    return 0;
}
