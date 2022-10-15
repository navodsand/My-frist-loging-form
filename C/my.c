#include <stdio.h>
#include <stdlib.h>

int main()
{
    int round = 1;
    float balance = 40000.00;

    while(round>0){

    int num;
    float deposit;

    printf("\n                  Welcome to the ABC Bank! \n");
    printf("\nSelect one of the options from following list and enter the number\n");
    printf("\n 1. Deposit              2. Withdraw             3. Check Balance\n");
    printf("\nYour choice: ");
    scanf("%d",& num);

    if(num == 1)
    {
        printf("\nEnter the amount to deposit: ");
        scanf("%f",& deposit);
        balance = balance + deposit;
    }

    else if (num == 2)
        {
        float withdrawl;
        printf("\nEnter the amount to Withdraw: ");
        scanf("%f",&withdrawl);


        if(withdrawl <= balance)
        {
                balance = balance - withdrawl;
                printf("\nWithdraw Successful \n");
        }


        else{

            printf("\nYour balance is Insufficient to withdraw that amount of money \n");

        }
        }


    else if(num == 3)
    {
        printf("\nYour balance is %.2f \n", balance);
    }


    else
        {
            printf("invalid input");
            break;
        }
    }
    round++;



 return 0;
}
