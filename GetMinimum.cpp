#include<iostream>
#include<stdlib.h>
#define SIZE 10
using namespace std;
class Stack{
int top;
int arr[SIZE];
public:
    Stack()
    {
        top=-1;
    }
    void Push(int);
    int Pop();
    bool isEmpty();
    bool isFull();
    int Getmin();

};

 void Stack::Push(int data)
 {
     if(isFull())
     {
         cout<<"Stack is Overflow";
     }
     else
     {
         arr[++top]=data;
     }

 }
 int Stack :: Pop()
 {
     int item;
     if(isEmpty())
     {

     }
     else
     {
         item=arr[top--];
     }
     return item;
 }
 bool Stack::isEmpty()
 {
     return top==-1;
 }
 bool Stack::isFull()
 {
     return top==SIZE-1;
 }
 int Stack::Getmin()
 {
     return arr[top];
 }


int main()
{
    Stack p;
    Stack s;
    int data,j,x;
    while(1)
    {
        cout<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Get Minimum"<<endl;
        cout<<"4.Exit"<<endl;


        cin>>j;
        switch(j)
        {
            case 1: cout<<"enter\n"<<endl;
            cin>>data;
            if(s.isEmpty())
            {
                s.Push(data);
                p.Push(data);

            }
            else
             x=p.Pop();

            if(data>x)
            {
                p.Push(x);
                s.Push(data);
                //cout<<

            }
            else if(data<x)
            {
                p.Push(data);
                s.Push(data);
            }
                break;

            case 2:

                cout<<"Popped Element :"<<s.Pop();
                break;

            case 3:
                cout<<p.Getmin()<<endl;
                break;
            case 4:
                exit(0);
        }
    }



}
