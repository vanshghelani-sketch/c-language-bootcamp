#include <stdio.h>

int main() {
    int a,b,i;
    printf("enter value a=");
    scanf("%d",&a);
    printf("enter value b=");
    scanf("%d",&b);
    i=a*a-2*a*b+b*b;
    printf("ans:-%d",i);
    return 0;
}