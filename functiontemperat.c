//function which converts temp from degree centigrade to fahrenheits
#include <stdio.h>
float function(float x);
int main(){
    float temp,answer;
  printf("Please enter the temperature in centigrade: ");
  scanf("%f",&temp);
  answer =  function(temp);
  printf("%.2f,centigrade is %.2f fahrenheits", temp,answer);
    return 0;
}
 float function(float x){
 float fahrenh;
fahrenh = (9/5) * x + 32;
     return fahrenh;
 }
