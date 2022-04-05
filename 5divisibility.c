//program to determine if a number is divisible by 5
#include <stdio.h>
int main (){
    int num;
    printf("Enter a number of your choice: ");
    scanf ("%d", &num);
    if(num % 5 == 0){
        printf("The number %d is divisible by 5 " ,num);
    }else{
        printf("The number %d is not divisible by 5",num);
    }



    return 0;
}