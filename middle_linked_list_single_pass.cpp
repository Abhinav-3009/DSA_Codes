#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
};
void push(Node** head, int data)
{
    Node* node=new Node();
    node->data=data;
    node->next=*head;
    *head=node;
}
void print(Node* head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void middle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    if(head!=NULL){
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        cout<<"\nmiddle : "<<slow->data;
    }
}
int main()
{
    Node* head=NULL;
    for(int i=1;i<=5;i++){
        push(&head,i);
    }
    print(head);
    middle(head);
}
