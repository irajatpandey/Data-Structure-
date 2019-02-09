#include<bits/stdc++.h>
#include<string>
#define SIZE 100
using namespace std;
class Stack
{
    int top;
    int arr[];
    public:
        Stack()
        {
            top=-1;
            arr[SIZE];
        }

    bool isEmpty();
    bool isFull();
    void Push(int);
    int Pop();
    int Peek();
    int EvaluatePrefix(string);
}s;

bool Stack::isEmpty()
{
    return top==-1;
}

 bool Stack::isFull()
{
     return top==SIZE-1;
}

void Stack::Push(int x)
{
    if(isFull())
    cout<<"Stack is Empty\n";
    else
        arr[++top]=x;
}

int Stack::Pop()
{
    if(isEmpty())
        cout<<"Stack is empty\n";
    else
        return arr[top--];

}

int Stack::Peek()
{
    return arr[top];
}
int Stack::EvaluatePrefix(string exp)
{
   string Operation;
   for(int i=0;i<exp.size();i++)
   {
       if(isdigit(exp[i]))
       {
           s.Push(exp[i]-'0');
       }
       else
       {
           if(exp[i]=='+')
           {
            int item1=s.Pop();
            int item2=s.Pop();
            s.Push(item1+item2);
           }
           else if(exp[i]=='-')
           {
            int item1=s.Pop();
            int item2=s.Pop();
            s.Push(item1-item2);
           }
           else if(exp[i]=='*')
           {
            int item1=s.Pop();
            int item2=s.Pop();
            s.Push(item1*item2);
           }
            else if(exp[i]=='/')
           {
            int item1=s.Pop();
            int item2=s.Pop();
            s.Push(item1/item2);
           }


       }
   }

}


int main()
{
   // Stack s;
    //s.Push(10);
    string exp="+9*26";;
    //cin>>exp;
    reverse(exp.begin(), exp.end());

    s.EvaluatePrefix(exp);
    cout<<s.Pop();




}
