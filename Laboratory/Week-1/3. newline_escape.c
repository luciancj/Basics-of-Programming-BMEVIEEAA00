#include <stdio.h>

int main(void)
{
    /* Print diagonal patterns */
    printf("  /\n /\n/\n");
    printf("\n");
    printf("\\\n \\\n  \\\n");
    printf("\n");
    
    /* Print text with escape sequences */
    printf("printf(\"hello\\n\") will print \"hello\",\nand starts a new line.\n");
    printf("\n");
    printf("Using \"%%d\" we can print\nthe value of an integer variable.\n");

    return 0;
}
