#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    Node(int x){
    data=x;
    next=NULL;
    }
};
 int getcount(struct Node* head);

 int main()
 {
     int n,data;
     cin>>n;
     cin>>data;
     struct Node* head= new Node(data);
     struct Node* tail=head;
     for(int i=1;i<n;i++)
     {
         cin>>data;
         tail->next=new Node(data);
         tail=tail->next;
     }
     cout<<getcount(head)<<endl;
     return 0;
 }
// fumction to count number of nodes
 int getcount(struct Node* head)
 {
     int c=0;
    struct Node* last=head;
    while(last!=NULL ){
        c=c+1;
        last=last->next;
    }
    return c;
 }
