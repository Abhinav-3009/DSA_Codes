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
bool detect(Node* head)
{
    unordered_set<Node*> s;
    while(head!=NULL){
        if(s.find(head)!=s.end())
            return true;
        s.insert(head);
        head=head->next;
    }
    return false;
}
int main()
{
    Node* head=NULL;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    head->next->next->next->next = head;
    if(detect(head))
        cout<<"loop found";
    else
        cout<<"loop not found";
}

