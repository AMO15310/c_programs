//program to determine the eligibility of a voter
#include <stdio.h>
int  main()
{
    int a;
    
    printf("Please enter your age: ");
    scanf ("%d" , &a);
    
    if (a >= 18){
        printf("You are eligible to vote ");
    }
    else {
        printf ("You are not eligible to vote ");
    }
   return 0; 
  
}