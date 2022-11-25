#include<stdio.h>
int myFuction(int x,int y)
{
 return x+y;
}
int main()
{
 int a,b;
 printf("Enter a and b : ");
 scanf("%d %d",&a,&b);
 int result=myFuction(a,b);
 printf("Result is %d",result);
 return 0;
}
