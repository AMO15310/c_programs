//program to give a discount for goods worth 1000
#include <stdio.h>
int main ()
{
int t ,d ,a;    
printf("please input your total spend ");
scanf("%d", &t);
if (t >= 1000){
    d = (t * 10/100);
    a = t - d ;
    printf("\nYou should pay sh %d" ,a);
}
else{
    printf("There is no discount you should pay %d" ,t);
}

return 0;
}