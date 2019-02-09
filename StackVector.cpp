#include<bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int>v1;
public:
    bool isEmpty();
    void Pop();
    void Push(int);
};
bool Stack::isEmpty()
{
    return v1.empty();
}
void Stack::Push(int data) {
    v1.push_back(data);
}
void Stack::Pop() {
    if(isEmpty())
        cout<<"Stack is Empty"<<endl;
  else
  {
     int p=v1.size();
  cout<<v1[p-1]<<endl;
   v1.pop_back();
  }


}

int main()
{
    Stack s1;
    int ele;
    while(1)
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Exit"<<endl;
        int ch;
        cin>>ch;
        switch(ch)
        {
        case 1:cout<<"Enter the elements in a Stack\n\n";
        cin>>ele;
        s1.Push(ele);
            break;
        case 2:
            s1.Pop();
            break;
        case 3:exit(0);
            break;

        }

    }


}


