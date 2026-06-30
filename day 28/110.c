// Bank Account System

#include <stdio.h>

int main()
{
    char name[50];
    int accountNo;
    float balance = 0;
    float amount;
    int choice;

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    do
    {
        printf("\n====== BANK MENU ======\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                balance += amount;

                printf("Amount deposited successfully.\n");
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                }
                else
                {
                    printf("Insufficient balance.\n");
                }

                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}