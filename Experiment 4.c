
#include <stdio.h>

int main()
{
    int num1, num2, i, j, count;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nPrime numbers between %d and %d are:\n", num1, num2);

    for(i = num1; i <= num2; i++)
    {
        count = 0;

        if(i < 2)
            continue;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
