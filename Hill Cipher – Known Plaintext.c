
#include <stdio.h>

int main() {
    int a,b,c,d,x,y,u,v;
    int p1=7,p2=8,q1=0,q2=19;
    int c1=19,c2=2,e1=5,e2=17;
    int found=0;

    for(a=0;a<26;a++)
    for(b=0;b<26;b++)
    for(c=0;c<26;c++)
    for(d=0;d<26;d++) {
        x=(a*p1+b*p2)%26;
        y=(c*p1+d*p2)%26;
        u=(a*q1+b*q2)%26;
        v=(c*q1+d*q2)%26;

        if(x==c1 && y==c2 && u==e1 && v==e2) {
            printf("Key matrix:\n");
            printf("%d %d\n%d %d\n",a,b,c,d);
            found=1;
            goto end;
        }
    }
    end:
    if(!found) printf("Key not found");
    return 0;
}
