//a programme to determine if  number is even or odd
#include <stdio.h>
int main (){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("The number %d is Even",num);
        
    }else{
        printf("The number %d is Odd", num);
    }




    return 0;
}