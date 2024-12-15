#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) 
{
    if (n <= 1) {
        return n;  // Base case: fibonacci(0) = 0, fibonacci(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
    }
}

int main() 
{
    int n;

    // Input the number of terms for the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci series up to %d terms: \n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
