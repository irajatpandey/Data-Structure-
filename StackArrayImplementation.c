#include<stdio.h>
#define size 100

int Array[size];
int top=-1;

void Push(int n);
int Pop();
void Print();


void Push(int n)
{
    if(top==size-1)
        printf("Stack Overflow :\n\n");
    else
        Array[++top]=n;
}
int Pop()
{
    if(top==-1)
    {
        printf("No Elements to pop\n\n");
        return;
    }
    top--;
}
void Print()
{
    int i;
    printf("Stack:\n");
    for(i=0;i<=top;i++)
        printf("%d  ",Array[i]);
    printf("\n");
}
int main()
{
    Push(2);Print();
	Push(5);Print();
	Push(10);Print();
	Pop();Print();
	Push(12);Print();
}

