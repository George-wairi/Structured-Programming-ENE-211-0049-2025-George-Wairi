#include <stdio.h>

int main()
{
    int N;
    int i;
    int marks;
    char registration[14];
    char name[48];
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


        if (marks >= 70 && marks <= 100)
        {
            grade = 'A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';
        }
        else if (marks >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }


        printf("\n===== STUDENT INFORMATION =====\n");
        printf("Registration Number : %s\n", registration);
        printf("Name                : %s\n", name);
        printf("Marks               : %d\n", marks);
        printf("Grade               : %c\n", grade);


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
