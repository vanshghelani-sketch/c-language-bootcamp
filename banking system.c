#include <stdio.h>

int main() {
int current=100000,saving=0,choice,choice1,w,d;
do{
    printf("WELCOME TO THE WEBSITE\n");
    printf("SELECT ACCOUNT TYPE:\n1.current 2.saving\n ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
                printf("SELECT TRANSACTION TYPES:\n 1.withdrawal \n 2.deposite\n 3.check balance\n");
                 scanf("%d",&choice1);
                switch(choice1)
                {
                    case 1:
                            printf("HOW MUCH AMOUNT TO WITHDRAWAL:\n");
                            scanf("%d",&w);
                            if(current>w)
                            {
                                current=current-w;
                                printf("REMAING BALANCE IS:%d\n",current);
                            }
                            else{
                                printf("INSUFFICIENT BALANCE\n");
                            }
                            break;
                
                case 2:
                        printf("HOW MUCH AMOUNT TO DEPOSITE:\n");
                        scanf("%d",&d);
                        current=current+d;
                        printf("TOTAL BALANCE IS:%d\n",current);
                        break;
                default:
                        printf("INVALID CHOICE\n");
                }
        break;
        case 2:
                printf("SELECT TRANSACTION TYPES:\n 1.withdrawal \n 2.deposite\n 3.check balance\n");
                 scanf("%d",&choice1);
                switch(choice1)
                {
                    case 1:
                            printf("HOW MUCH AMOUNT TO WITHDRAWAL:\n");
                            scanf("%d",&w);
                            if(saving>w)
                            {
                                saving=saving-w;
                                printf("REMAING BALANCE IS:%d\n",saving);
                            }
                            else{
                                printf("INSUFFICIENT BALANCE\n");
                            }
                            break;
                
                case 2:
                        printf("HOW MUCH AMOUNT TO DEPOSITE:\n");
                        scanf("%d",&d);
                        saving=saving+d;
                        printf("TOTAL BALANCE IS:%d\n",saving);
                        break;
                default:
                        printf("INVALID CHOICE\n");
                }
        break;
        default:
                printf("Invalid choice");
    }
}while(1);
    return 0;
}