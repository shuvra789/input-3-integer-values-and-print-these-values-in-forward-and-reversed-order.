//Write a C program to prompt the user to input 3 integer values and print these values in forward and reversed order.
#include<stdio.h>

int main(void)
{
   int a,b,c;
   printf("Enter a ,b,c");

   scanf("%d%d%d",&a,&b,&c);

   printf("the forward order:%d,%d,%d",a,b,c);
   printf("the reverse order:%d%d%d",c,b,a);

   getch();

   return 0;
}
