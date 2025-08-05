#include <stdio.h>

int main() {
    int p,r,n,i,amt;
    p=10000;
    r=10;
    n=1;
    i=p*r*n/100;
    printf("area of interest=%d",i);
     amt=p+i;
    printf("\ntotal amt=%d",amt);

    return 0;
}