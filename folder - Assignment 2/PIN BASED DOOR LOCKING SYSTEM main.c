#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char correctPIN[] = "6766";
    char enteredPIN[20];
    int attempts = 3;
    int choice;
    int accessGranted = 0;

    printf("===== PIN BASED DOOR LOCK SYSTEM =====\n");

    while (attempts > 0)
    {
        printf("\nEnter your 4-digit PIN: ");
        scanf("%19s", enteredPIN);


        if (strlen(enteredPIN) < 4)
        {
            printf("PIN is too short (must be 4 digits)\n");
        }
        else if (strlen(enteredPIN) > 4)
        {
            printf("PIN is too long (must be 4 digits)\n");
        }
        else
        {
            printf("PIN is exactly 4 digits\n");


            if (strcmp(enteredPIN, correctPIN) == 0)
            {
                printf("Correct PIN!\n");
                accessGranted = 1;
                break;
            }
            else
            {
                printf("Incorrect PIN!\n");
            }
        }


        attempts--;

        if (attempts > 0)
        {
            printf("Remaining attempts: %d\n", attempts);
        }
    }


    if (accessGranted == 0)
    {
        printf("\nSystem locked! Wait for 5 seconds...\n");


        for (int i = 5; i >= 1; i--)
        {
            printf("%d...\n", i);
            Sleep(1000);
        }

        printf("You can try again now.\n");

        return 0;
    }


    printf("\n===== MENU =====\n");
    printf("1. Access Door\n");
    printf("2. Change Username\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Access granted. Door unlocked\n");
            break;

        case 2:
            printf("Change username feature coming soon.\n");
            break;

        case 3:
            printf("Change PIN feature coming soon.\n");
            break;

        case 4:
            printf("Exiting system.\n");
            break;

        default:
            printf("Invalid option! Please try again.\n");
    }

    return 0;
}
