#include<stdio.h>
int main()
{
    float fahrenheit,celcius;
    printf("Enter the temperature\n");
    scanf("%f",&fahrenheit);
    celcius=(0.56)*(fahrenheit-32);
    printf("temperature in degree celcius is %f",celcius);
    return 0;
}
