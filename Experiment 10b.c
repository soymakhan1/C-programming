
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    ptr = &a[n - 1];

    printf("\nArray elements in reverse order:\n");

    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", *ptr);
        ptr--;
    }

    return 0;
}
