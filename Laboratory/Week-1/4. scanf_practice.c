#include <stdio.h>

int main(void)
{
    // Declare variables
    int num1, num2, sum, product;
    
    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    
    // Read and store the first integer using scanf with %d
    scanf("%d", &num1);
    
    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    
    // Read and store the second integer using scanf with %d
    scanf("%d", &num2);
    
    // Calculate the sum of the two integers
    sum = num1 + num2;
    
    // Calculate the product of the two integers
    product = num1 * num2;
    
    // Display the sum
    printf("\nThe sum of %d and %d is: %d\n", num1, num2, sum);
    
    // Display the product
    printf("The product of %d and %d is: %d\n", num1, num2, product);
    
    return 0;
}
