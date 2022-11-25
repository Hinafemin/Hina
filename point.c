#include<stdio.h>
void main()
{
 int myage=34;
 int* ptr=&myage;
 printf("My age is %d\n",myage);
 printf("My age is stored in %p\n",&myage);
 printf("Pointer is %p",ptr);
}
