#include <stdio.h>
void namefunc() {
char name[10];
printf("What is your name ?: ");
scanf("%s",&name);
printf("Hello %s welcome\n",name);

};
int main(){
namefunc();

  return 0;
}
