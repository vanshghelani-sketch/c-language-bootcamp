#include <stdio.h>

int main() {
    float p,r,n,i,sum,amount;
    printf("ENTER PRINCIPAL AMOUNT:");
    scanf("%f",&p);
    printf("ENTER YEAR:");
    scanf("%f",&n);
    if(n>0){
        if(n>3){
            if(n>6){
                if(n>8)  {
                    r=10;
                }
                else{
                    r=8;
                }
            }
            else{
                r=4.8;
            }
        }
        else{
            r=3;
        }
    }
    printf("RATE=%.2f\n",r);
    i=p*r*n/100;
    printf("THE INTEREST IS: %.2f\n",i);
    sum=p+i;
    printf("TOTAL VALUE:%.2f\n",sum);
   
    
    
    


    return 0;
}