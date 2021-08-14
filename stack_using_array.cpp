#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
    int top;
public:
    int arr[MAX];
    Stack()
    {
        top=-1;
    }
    bool push(int x)
    {
        if(top>=MAX-1){
            cout<<"stack overflow";
            return false;
        }
        else{
            top+=1;
            arr[top]=x;
            cout<<x<<"pushed"<<endl;
            return true;
        }
    }
    int pop()
    {
        if(top<0){
            cout<<"stack underflow";
            return 0;
        }
        else{
            int x=arr[top];
            top--;
            return x;
        }
    }
    int peek()
    {
        if(top<0){
            cout<<"stack is empty";
            return 0;
        }
        else{
            int x=arr[top];
            return x;
        }
    }

};

int main()
{
    Stack s;
    s.push(10);//10
    s.push(20);//10,20
    cout<<s.peek();//=>20
    cout<<s.pop();//=>20
    s.push(30);//10 30
    cout<<s.pop();//=>30
    return 0;
}
