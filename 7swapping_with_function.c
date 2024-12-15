#include <stdio.h>
// Function to swap two numbers using call by value
void swap(int a, int b) {
    int temp;
        // Swapping the values
    temp = a;
    a = b;
    b = temp;
    // Print the swapped values inside the function (just for demonstration)
    printf("Inside swap function:\n");
    printf("a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
        // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
        // Before swapping
    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);
        // Call the swap function
    swap(x, y);
        // After swapping (In call by value, the original values won't change)
    printf("After swap function call (no change in original variables):\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
