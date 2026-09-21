#include <stdio.h>

int main() {

    float fahrenheit;
    float celsius;
    
    printf("Write the fahrenheit value: "); //display: ask the user for an input
    scanf("%f",&fahrenheit);
    printf("fahrenheit = %.2f\n",fahrenheit);

    celsius = (fahrenheit - 32) *5 / 9;

    printf("celsius = %.2f",celsius);

    return 0;
}
