#include <stdio.h>

int main() {
    int num;
    printf("ENTER VALUE num:");
    scanf("%d",&num);
    
if(num>0)
{
    printf("POSITIVE NUMBER\n");
}
else if(num<0)
{
    printf("NEGATIVE NUMBER\n");
}
else
{
    printf("zero");
}
    
    return 0;
}