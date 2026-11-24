
#include <stdio.h>

// Iterative Method
void iterative(int n)
{
    int a = 0, b = 1, c, i;

    printf("\nFibonacci Series using Iterative Method:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

// Recursive Method
int recursive(int n)
{
    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return recursive(n - 1) + recursive(n - 2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    iterative(n);

    printf("\n\nFibonacci Series using Recursive Method:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", recursive(i));
    }

    return 0;
}
