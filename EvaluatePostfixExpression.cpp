#include<bits/stdc++.h>
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
    int EvaluatePostfix(string);
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
int Stack::EvaluatePostfix(string exp)
{

   for(int i=0;i<exp.size();++i)
   {
        cout<<"initial i "<<i<<endl;
       if(exp[i]==' ')continue;

       if(isdigit(exp[i]))
       {    int num=0;
           //s.Push(exp[i]-'0');
            while(isdigit(exp[i]))
            {
            num=num*10+(int)(exp[i]-'0');
                i++;
                cout<<"i++"<<i<<endl<<endl;
            }
           i--;
           cout<<i<<endl;
           s.Push(num);


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
            s.Push(item2-item1);
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
            s.Push(item2/item1);
           }


       }
   }

}


int main()
{

    //string exp="100 200 + 2 / 5 * 7 +";
    string exp="512 6 2 + *12 4/-";
    //cin>>exp;
    s.EvaluatePostfix(exp);
   // cout<<s.Pop();




}
