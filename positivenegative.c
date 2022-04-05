//Determine whether a number is positive or negative
#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    if(num >= 0)
    {
        printf("The number %f is positive", num);
    }
    else
    {
        printf("The number %f is  odd",num);
    }
    return 0;
}