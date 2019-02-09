#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void Push(int x);
struct ListNode
{
    int data;
    struct ListNode *next;
};
struct ListNode *top=NULL;
void Push(int x)
{

    struct ListNode *temp;
    temp=(struct ListNode*)malloc(sizeof(struct ListNode *));
    temp->data=x;
    temp->next=top;
    top=temp;
    cout<<temp->data<<endl;
}
void Pop()
{
    if(top==NULL)
        cout<<"UnderFlow\n";
    int item;
    struct ListNode *temp;
    temp=top;
    item=temp->data;
    top=temp->next;
    free(temp);
    cout<<item<<" Popped"<<endl;
}
int Peek()
{
   cout<<"Peek "<< top->data<<endl;

}
int main()
{

  while(1)
  {
          cout<<"1.Push\n";
          cout<<"2.Pop\n";
          cout<<"3.Peek\n";
          cout<<"4.Exit\n";
      int ch;
      cin>>ch;
      switch(ch)
      {
          int val;
          case 1:cout<<"Enter the element which you want to Push\n";
                    cin>>val;
                    Push(val);
                    break;
          case 2:Pop();
                    break;
          case 3: Peek();
          case 4: exit(0);
          break;


      }
  }
}
