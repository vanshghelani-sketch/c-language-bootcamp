#include<stdio.h>
int main()
{
    int a=0,b=1,i,ans,n=5;
   printf("%d %d\t",a,b);
    while(n>0)
    {
        ans=a+b;
        printf("%d ",ans);
        a=b;
        b=ans;
        n--;
        
    }
    return 0;
}