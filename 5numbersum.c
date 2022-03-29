// program of finding the sum of five numbers
#include <stdio.h>
int main()
{
    int arr[5];
    int d;
    int sum = 0;
    printf("enter five numbers: \n");
   
    for(d=0;d<5;d++)

{
    scanf("%d",&arr[d]);
    sum = sum + arr[d];
}
printf("\n the sum of five numbers is : %d\n" ,sum);
}