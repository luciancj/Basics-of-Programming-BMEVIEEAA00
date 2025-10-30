int main(void)
{
    double fahrenheit, celsius;
    
    printf("Fahrenheit to Celsius Converter\n\n");
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    
    // Convert to Celsius
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    
    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
    
    return 0;
}
