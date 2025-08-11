#include <stdio.h>

int main() {
    int product,sell;
    printf("ENTER PRICE OF PRODUCT:");
    scanf("%d",&product);
    printf("ENTER PRICE OF SELLING:");
    scanf("%d",&sell);
    if(product<sell)
    {
        printf("PROFIT %d\n",sell-product);
    }
    else if(product>sell)
    {
        printf("LOSS%d",sell-product);
    }
    else{
        printf("NO PROFIT NO LOSS");
    }

    return 0;
}