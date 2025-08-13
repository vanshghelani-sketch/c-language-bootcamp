#include <stdio.h>

int main() {
    float bill_amount;
    float tip_percentage;
    float tip_decimal;
    float tip_amount;
    float total_bill;
    float per_person_amount;
    float total_people;
    printf("ENTER BILL AMOUNT:");
    scanf("%f",&bill_amount);
    printf("ENTER TIP PERCENTAGE:");
    scanf("%f",&tip_percentage);
    printf("NO OF PEOPLE:");
    scanf("%f",&total_people);
      
      tip_decimal=tip_percentage/100;
      printf("\nTIP PERCENTAGE:%.3f\n", tip_decimal);
       
       tip_amount=bill_amount * tip_decimal;
       printf("TIP AMOUNT:%.2f\n",tip_amount);
       
       total_bill=bill_amount+tip_amount;
       printf("TOTAL AMOUNT:%.2f\n",total_bill);
       
       per_person_amount=total_bill/total_people;
       printf("PER PERSON AMOUNT:%.2f\n",per_person_amount);

    return 0;
}