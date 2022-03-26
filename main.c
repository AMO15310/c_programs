// program to calculate area of a circle
#include <stdio.h>

int main() 
{
    float pi = 3.142;
    float radius;
    printf("Enter radius:");
    scanf("%f", &radius);
    float area = pi * radius * radius;
    printf("Area is = %f", area);
    
    return 0;
}
