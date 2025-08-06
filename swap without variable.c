#include <stdio.h>

int main() {
    int x=20,y=30;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d\ny=%d\n",x,y);
    return 0;
}