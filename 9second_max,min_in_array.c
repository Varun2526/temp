#include <stdio.h>
int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size < 2) 
    {
        printf("Array should have at least two elements.\n");
        return 0;
    }
    int min = arr[0], max = arr[0];
    int secondMin = -1, secondMax = -1;

    // Find the minimum and maximum values
    for (int i = 1; i < size; i++)
     {
        if (arr[i] < min) 
        {
            secondMin = min;  // Update secondMin
            min = arr[i];     // Update min
        } else if (arr[i] > max) 
        {
            secondMax = max;  // Update secondMax
            max = arr[i];     // Update max
        }
    }

    // Find second minimum
    for (int i = 0; i < size; i++)
     {
        if (arr[i] != min && (secondMin == -1 || arr[i] < secondMin))
         {
            secondMin = arr[i];
        }
    }

    // Find second maximum
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] != max && (secondMax == -1 || arr[i] > secondMax))
         {
            secondMax = arr[i];
        }
    }

    // Output the results
    if (secondMin != -1) 
    {
        printf("Second minimum element is: %d\n", secondMin);
    } else
     {
        printf("No second minimum element found.\n");
    }

    if (secondMax != -1)
     {
        printf("Second maximum element is: %d\n", secondMax);
    } else 
    {
        printf("No second maximum element found.\n");
    }

    return 0;
}
