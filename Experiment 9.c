
#include <stdio.h>

struct student_record
{
    char name[50];
    int roll_number;
    float total_marks;
};

int main()
{
    struct student_record s[5];
    int i, topper = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }

    for(i = 1; i < 5; i++)
    {
        if(s[i].total_marks > s[topper].total_marks)
        {
            topper = i;
        }
    }

    printf("\n===== TOPPER DETAILS =====\n");
    printf("Name: %s\n", s[topper].name);
    printf("Roll Number: %d\n", s[topper].roll_number);
    printf("Total Marks: %.2f\n", s[topper].total_marks);

    return 0;
}
