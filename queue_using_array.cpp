#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int fron;
    int rear;
    int cap;
    int* queue;
public:
    Queue(int n)
    {
        fron=rear=0;
        cap=n;
        queue=new int;

    }
    void enqueue(int data)
    {
        if(cap==rear){
            cout<<"full";
            return;
        }
        queue[rear]=data;
        rear++;
    }
    void dequeue()
    {
        if(fron==rear){
            cout<<"empty";
            return;
        }
        for(int i=0;i<rear-1;i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }
    void display()
    {
        if(fron==rear){
            cout<<"empty";
            return;
        }
        for(int i=fron;i<rear;i++){
            cout<<queue[i]<<" ";
        }
    }
};
int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.display();
    return 0;
}
