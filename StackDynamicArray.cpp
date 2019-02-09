#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int totalSize;
    int currentSize;
    int *arr;
public:
    Stack(int size)
    {
        totalSize=size;
        currentSize=-1;
        arr=new int[totalSize];
    }
    bool isEmpty()
    {
        return currentSize==-1;
    }
     bool isFull()
    {
        return currentSize==totalSize;
    }
    void DoubleStack()
    {
        int *temp;
         temp = new int[currentSize*2];
         for (int i = 0; i < (currentSize); i++) {
            temp[i] = arr[i];
            }
             delete[] arr;
             arr = temp;

             //currentSize=currentSize*2;

             totalSize=currentSize*2;

    }
    int Push(int value)
    {
        if(isFull())
        {
            DoubleStack();
            cout<<"Current Size"<<currentSize<<endl;
        }

            cout<<"Element has been pushed\n";
            arr[++currentSize]=value;
            return arr[currentSize];


    }
    int Pop()
    {
        if(isEmpty())
            cout<<"Stack Underflow"<<endl;
        else
        {
             cout<<"Element has been pop\n";
            return arr[currentSize];
        }

    }
    void display()
    {
         for(int i=0;i<currentSize;i++)
            cout<<endl<<arr[i]<<"\n";

    }
    int Peek()
    {
         if(isEmpty())
            cout<<"No item to return"<<endl;
        return arr[currentSize];
    }
};
int main()
{
    int size;
   // cout<<"Enter the size of an Stack\n";
    //cin>>size;
    Stack *newStack=new Stack(1);
    int ch,ele;
    while(1)
    {
        cout<<endl<<endl;
        cout<<"1.Push\n"<<endl;
        cout<<"2.Pop\n"<<endl;
        cout<<"3.Peek\n"<<endl;
        cout<<"4.Display\n"<<endl;
        cout<<"5.Exit\n"<<endl;
        cin>>ch;
        switch(ch)
        {

            case 1://cout<<"Enter elements in Stack"<<endl;
            //cin>>ele;
            for(int i=1;i<=1000;i++)
            newStack->Push(i);

            break;
            case 2:cout<<newStack->Pop()<<endl;
            break;
            case 3:cout<<newStack->Peek();
            break;
            case 4: newStack->display();
            break;
            case 5: exit(0);
            break;

        }

    }

    /*cout<<newStack->Push(10)<<endl;
    cout<<newStack->Push(15)<<endl;
    cout<<newStack->Push(20)<<endl;
    cout<<newStack->Push(25)<<endl;
    cout<<newStack->Push(30)<<endl;
    cout<<newStack->Push(35)<<endl;
    cout<<newStack->Push(40)<<endl;
    cout<<newStack->Push(45)<<endl;
    cout<<newStack->Push(50)<<endl;
    cout<<newStack->Push(55)<<endl;
    cout<<newStack->Push(56)<<endl;
    cout<<newStack->Push(57)<<endl;
    cout<<newStack->Push(58)<<endl;
    cout<<newStack->Push(59)<<endl;
    cout<<newStack->Push(60)<<endl;

    cout<<newStack->Push(61)<<endl;
    cout<<newStack->Push(62)<<endl;
    cout<<newStack->Push(63)<<endl;
    cout<<newStack->Push(64)<<endl;
    cout<<newStack->Push(65)<<endl;
    cout<<newStack->Push(66)<<endl;


//cout<<newStack->Pop()<<endl;
    cout<<newStack->Pop()<<endl;*/
    //cout<<newStack->Peek()<<endl;
}
