#include<stdio.h>
void func(void);
int main(void)
{
   func();
   func();
   func();
   return 0;   
}
void func(void)
{
  int x=2,y=5;
  printf("x=%d,y=%d\n",x,y);
  x++;
  y++;  
}
