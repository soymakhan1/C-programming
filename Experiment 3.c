#include <stdio.h>

int main()
{
    int choice, rollno;
    char name[50];
    float m1, m2, m3, total, percentage;

menu:

    printf("\n===== STUDENT RESULT MANAGEMENT SYSTEM =====");
    printf("\n1. Enter Student Details");
    printf("\n2. Calculate Result");
    printf("\n3. Display Grade");
    printf("\n4. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &rollno);

            printf("Enter Student Name: ");
            scanf("%s", name);

            printf("Enter Marks of 3 Subjects: ");
            scanf("%f %f %f", &m1, &m2, &m3);

            goto menu;

        case 2:
            total = m1 + m2 + m3;
            percentage = total / 3;

            printf("\nTotal Marks = %.2f", total);
            printf("\nPercentage = %.2f%%", percentage);

            if(m1 >= 40 && m2 >= 40 && m3 >= 40)
                printf("\nResult: PASS");
            else
                printf("\nResult: FAIL");

            goto menu;

        case 3:
            if(percentage >= 90)
                printf("\nGrade: A+");
            else if(percentage >= 80)
                printf("\nGrade: A");
            else if(percentage >= 70)
                printf("\nGrade: B");
            else if(percentage >= 60)
                printf("\nGrade: C");
            else if(percentage >= 40)
                printf("\nGrade: D");
            else
                printf("\nGrade: F");

            goto menu;

        case 4:
            printf("\nThank You!");
            return 0;

        default:
            printf("\nInvalid Choice!");
            goto menu;
    }

    return 0;
}
