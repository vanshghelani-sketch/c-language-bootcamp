#include <stdio.h>

int main() {
    int x=20,y=30,t;
    t=x;
    x=y;
    y=t;
    printf("x=%d\ny=%d\n",x,y);
    return 0;
}