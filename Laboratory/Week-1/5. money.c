#include <stdio.h>

int main(void)
{
    int coins_50, coins_100, coins_200;
    int total;
    
    printf("Money Calculator\n\n");
    
    printf("How many 50 Ft coins do you have? ");
    scanf("%d", &coins_50);
    
    printf("How many 100 Ft coins do you have? ");
    scanf("%d", &coins_100);
    
    printf("How many 200 Ft coins do you have? ");
    scanf("%d", &coins_200);
    
    // Calculate total money
    total = coins_50 * 50 + coins_100 * 100 + coins_200 * 200;
    
    printf("\nYou have %d Ft in total.\n", total);
    
    return 0;
}
