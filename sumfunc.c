#include<stdio.h>
int add(int,int);
int main()
{
 int first,second,sum;
 printf("Enter first and second :\n");
 scanf("%d%d",&first,&second);
 sum=add(first,second);
 printf("Sum = %d\n",sum);
return 0;
}
int add(int x,int y)
{
 return(x+y);
}
