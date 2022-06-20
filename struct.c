#include <stdio.h>
  struct students{
char name[10],grade[1];
int class;

};
int main(){
struct students s1={"Amos","B",8};
struct students s2={"Steve","A",8};
printf("%s,%s,%d\n",s1.name,s1.grade,s1.class);
printf("%s,%s,%d\n",s2.name,s2.grade,s2.class);




return 0;
}
