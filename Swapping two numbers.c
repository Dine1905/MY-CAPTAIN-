#include<stdio.h>
void main()
{
int a =10,b=20;
printf("before swapping:a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=b-a;
printf("after swapping:a=%d b=%d",a,b);
}
