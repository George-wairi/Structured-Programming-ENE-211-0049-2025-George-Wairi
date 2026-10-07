#include <stdio.h>

int main()
{
    int N;
    int i;
    int marks;
    int category;
    char registration[20];
    char name[50];
    char grade;

    printf("===== STRUCTURED PROGRAMMING GRADING SYSTEM =====\n");

    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("\n--- Student %d ---\n", i);

        printf("Enter registration number: ");
        scanf("%s", registration);

        printf("Enter student name: ");
        scanf(" %[^\n]", name);

        printf("Enter marks: ");
        scanf("%d", &marks);


        if (marks >= 70)
        {
            category = 7;
        }
        else if (marks >= 60)
        {
            category = 6;
        }
        else if (marks >= 50)
        {
            category = 5;
        }
        else if (marks >= 40)
        {
            category = 4;
        }
        else
        {
            category = 3;
        }


        switch (category)
        {
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            case 3:
                grade = 'F';
                break;

            default:
                grade = 'F';
        }


        printf("\n===== STUDENT INFORMATION =====\n");
        printf("Registration Number : %s\n", registration);
        printf("Name                : %s\n", name);
        printf("Marks               : %d\n", marks);
        printf("Grade               : %c\n", grade);

        /* Determine pass/fail */
        if (marks >= 40)
        {
            printf("Status              : PASS\n");
        }
        else
        {
            printf("Status              : FAIL\n");
        }
    }

    printf("\n===== END OF PROGRAM =====\n");

    return 0;
}
