#include<stdio.h>
int main(void)
{
   enum month{jan,feb,mar,apr,may,june}m1,m2;
   m1=mar;
   printf("m1=%d\n",m1);
   printf("Enter value for m2 :");
   scanf("%d",m2);
   printf("m2=%d\n",m2);
   return 0;   
}
