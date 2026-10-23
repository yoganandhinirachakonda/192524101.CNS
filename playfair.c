
#include <stdio.h>

int main() {
    char s[3];
    char m[5][5] = {
        {'M','F','H','I','K'},
        {'U','N','O','P','Q'},
        {'Z','V','W','X','Y'},
        {'E','L','A','R','G'},
        {'D','S','T','B','C'}
    };
    int i, j, r1, c1, r2, c2;

    printf("Enter 2 letters (I/J combined): ");
    scanf("%2s", s);

    for(i=0;i<5;i++)
        for(j=0;j<5;j++) {
            if(m[i][j] == s[0]) r1=i, c1=j;
            if(m[i][j] == s[1]) r2=i, c2=j;
        }

    if(r1 == r2)
        printf("Cipher: %c%c",m[r1][(c1+1)%5],
                              m[r2][(c2+1)%5]);
    else if(c1 == c2)
        printf("Cipher: %c%c",m[(r1+1)%5][c1],
                              m[(r2+1)%5][c2]);
    else
        printf("Cipher: %c%c",m[r1][c2],m[r2][c1]);

    return 0;
}
