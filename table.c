#include <stdio.h>

int main() {
   
    int i = 1,num;

    printf("Enter the number to display its table: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d*%d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}