#include<stdio.h>
int main(){
  
  int i=3;
  float j=1.5;
  char k='c';
  x=&i;
  y=&j;
  z=&k;
  printf("original addx=%u",x);
  printf("original addy=%u",y);
  printf("original addz=%u",z);

x++;
y++;
z++;
printf("new addx=%u",x);
printf("new addy=%u",y);
printf("new addz=%u",z);
return 0;
}