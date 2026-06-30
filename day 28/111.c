// Ticket Booking System

#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeats;
    int choice;

    do
    {
        printf("\n====== Ticket Booking ======\n");
        printf("Available Seats : %d\n", totalSeats);

        printf("1. Book Ticket\n");
        printf("2. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("How many seats do you want to book? ");
                scanf("%d", &bookedSeats);

                if(bookedSeats <= totalSeats)
                {
                    totalSeats -= bookedSeats;

                    printf("Booking Successful!\n");
                    printf("Remaining Seats = %d\n", totalSeats);
                }
                else
                {
                    printf("Not enough seats available.\n");
                }

                break;

            case 2:
                printf("Thank you for visiting.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 2);

    return 0;
}