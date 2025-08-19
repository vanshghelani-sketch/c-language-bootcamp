#include<stdio.h>
int main()
{
    int i,num;
    printf("FACTORS OF THE FOLLOWING NUMBER:\n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        if(num % i==0){
            printf("%d\t",i);
        }
    }
    return 0;
}