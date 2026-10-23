
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char m[5][5]={
        {'M','F','H','I','K'},
        {'U','N','O','P','Q'},
        {'Z','V','W','X','Y'},
        {'E','L','A','R','G'},
        {'D','S','T','B','C'}
    };
    char s[200], p[200], out[200];
    int i,j,n=0,k=0,r1,c1,r2,c2;

    printf("Enter text: ");
    fgets(s,sizeof(s),stdin);

    for(i=0;s[i];i++)
        if(isalpha((unsigned char)s[i])) {
            char ch=toupper((unsigned char)s[i]);
            p[n++]=(ch=='J')?'I':ch;
        }

    for(i=0;i<n;) {
        char a=p[i], b;
        if(i+1==n || p[i+1]==a) b='X',i++;
        else b=p[i+1],i+=2;

        for(r1=0;r1<5;r1++)
            for(c1=0;c1<5;c1++)
                if(m[r1][c1]==a) goto A;
        A:
        for(r2=0;r2<5;r2++)
            for(c2=0;c2<5;c2++)
                if(m[r2][c2]==b) goto B;
        B:
        if(r1==r2)
            out[k++]=m[r1][(c1+1)%5],
            out[k++]=m[r2][(c2+1)%5];
        else if(c1==c2)
            out[k++]=m[(r1+1)%5][c1],
            out[k++]=m[(r2+1)%5][c2];
        else
            out[k++]=m[r1][c2],out[k++]=m[r2][c1];
    }
    out[k]='\0';
    printf("Cipher text: %s",out);
    return 0;
}
