#include <stdio.h>

int main()
{
        int n, i, largest, smallest, num;
        printf("Enter the number of values: ");
        scanf("%d", &n);
        printf("Enter %d numbers: ", n);
        scanf("%d", &num);
        largest = smallest = num;
        for (i = 1; i < n; i++) 
        {
            scanf("%d", &num);
            if (num > largest) 
            {
                largest = num;
            }
            if (num < smallest) 
            {
                smallest = num;
            }
        }
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);
}
