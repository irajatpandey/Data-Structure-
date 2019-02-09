#include<stdio.h>
void display();
int main()
{
    int a=10,b=20,c=30;
    //int *ptr;
    //ptr=&a;
    display(&a,&b,&c);
}
display(int *x,int *y,int *z)
{
  int a=*x;
  int b=*y;
  int c=*z;
  printf("%d",a+b+c);
}
