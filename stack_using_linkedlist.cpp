
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* top;
void push(int x)
{
    Node* temp=new Node();
    if(!temp){
        cout<<"heap overflow";
        return ;
    }
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    Node* temp=new Node();
    if(top==NULL){
        cout<<"stack underflow";
        return;
    }
    temp=top;
    top=top->next;
    temp->next=NULL;
    free(temp);
}
void display()
{
    Node* temp=new Node();
    if(top==NULL){
        cout<<"stack underflow";
        return;
    }
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    pop();
    pop();
    display();
    return 0;
}
