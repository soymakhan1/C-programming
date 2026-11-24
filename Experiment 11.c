
#include <stdio.h>

int main()
{
    FILE *fp;
    int id, n, i;
    char name[50];
    float salary;

    fp = fopen("employee.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &id);

        printf("Enter Employee Name: ");
        scanf("%s", name);

        printf("Enter Employee Salary: ");
        scanf("%f", &salary);

        fprintf(fp, "%d %s %.2f\n", id, name, salary);
    }

    fclose(fp);

    fp = fopen("employee.txt", "r");

    if(fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\n===== EMPLOYEE DATABASE =====\n");
    printf("ID\tName\tSalary\n");

    while(fscanf(fp, "%d %s %f", &id, name, &salary) == 3)
    {
        printf("%d\t%s\t%.2f\n", id, name, salary);
    }

    fclose(fp);

    return 0;
}
