#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*start;

void insert();
void display(Node *head);

int main()
{
        start=NULL;
        insert();
        display(start);
        cout<<endl;
    return 0;
}

//function to insert values in linked list
void insert()
{
    int n,value;
    cout<<"enter the no of elements";
    cin>>n;
    struct Node* temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start=(struct Node *) malloc(sizeof(struct Node));
            start->data=value;
            start->next=NULL;
            temp=start;
            continue;
        }
        else{
            temp->next=(struct Node *) malloc(sizeof(struct Node));
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}

//function to print the elements

void display(Node* head)
{
    struct Node* last=head;
    while(last!=NULL)
    {
        cout<<last->data<<" ";
        last=last->next;
    }
}
