#include<stdio.h>
int main()
{
  int a =5, b =10 ,temp;
  printf("value of a="%d" and b ="%d",a,b);
  temp =a;
  a = b;
  b =temp;
  printf("value afterswapping a="%d" and b = "%d",a,b);
  return ;
}
