#include <stdio.h>

int main() {
    int sub1,sub2,sub3,avg;
    printf("ENTER MARKS OF SUB1:");
    scanf("%d",&sub1);
    printf("ENTER MARKS OF SUB2:");
    scanf("%d",&sub2);
    printf("ENTER MARKS OF SUB3:");
    scanf("%d",&sub3);
    avg=sub1+sub2+sub3/3;
    printf("\navg:-%d",avg);

    return 0;
}