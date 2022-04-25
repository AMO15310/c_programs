//program to a function to check whether a number is even or odd
#include <stdio.h>
int evenodd(int x);
int main(){
int num,output;
  printf("\n Enter a number ");
  scanf("%d",&num);
    output = evenodd(num);
    return 0;
}
int evenodd(int x){
 if(x%2==0){
    printf("The number %d is even",x);
}
else{
    printf("The number %d is odd",x);
}
    return x;
}
