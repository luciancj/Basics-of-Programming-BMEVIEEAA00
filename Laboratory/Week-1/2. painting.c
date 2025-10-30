#include <stdio.h>

int main(void)
{
    double diameter, height;
    
    printf("Container painting\n\n");
    printf("Height? ");
    scanf("%lf", &height);
    printf("Diameter? ");
    scanf("%lf", &diameter);

    double radius = diameter / 2;
    double surface_area = 2 * radius * radius * 3.14159265 + height * 2 * radius * 3.14159265;
    double cans = surface_area / 2;

    printf("\n%.1f can(s) of paint needed.\n", cans);

    return 0;
}
