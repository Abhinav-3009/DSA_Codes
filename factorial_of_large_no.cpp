#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
     node* prev;
    node(int x){
    this->data = x;
    this->prev = NULL;
    }
};
void multiply(node *tail, int n)
{
    node *temp=tail;
    node *prevNode=tail;
    int carry=0;
    while(temp!=NULL){
        int data=temp->data * n + carry;
        temp->data=data%10;
        carry=data/10;
        prevNode=temp;
        temp=temp->prev;
    }
    while(carry!=0){
        prevNode->prev= new node((int)(carry%10));
        carry/=10;
        prevNode=prevNode->prev;
    }
}
void print(struct node *tail)
{
    if(tail==NULL)
        return;
    print(tail->prev);
    cout<<tail->data<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        node* tail = new node(1);
        for(int i=2;i<=n;i++){
            multiply(tail,i);

        }
        print(tail);
        cout<<endl;
    }
    return 0;
}




