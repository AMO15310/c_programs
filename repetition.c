
#include<stdio.h>  
  
int main()  
{  
    int a[10] = {0}, num, rem;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    while(num)  
    {  
        rem = num % 10;  
        if(a[rem] == 1)  
            break;  
        else  
            a[rem] = 1;  
  
        num = num / 10;  
    }  
  
    if(num)  
        printf("Yes\n");  
    else  
        printf("No\n");  
  
    return 0;  
}  
