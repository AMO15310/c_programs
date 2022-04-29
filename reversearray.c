//program to write numbers in an array in reverse
#include <stdio.h>
int main (){
    int arr[]={34,56,54,32,67,89,90,32,21};
    int length = sizeof(arr)/ sizeof(arr[4]);
    for(int i = length -1; i >= 0; i--){
        printf("%d ",arr[i]);
    };
    
    
    
    
    return 0;
}