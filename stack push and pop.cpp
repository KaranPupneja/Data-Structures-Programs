#include<iostream>
#include<conio.h>
#define MAX 10
using namespace std;
class stack
{
    int arr[MAX];
    int top;
public:
    stack()
    {
        top=-1;
    }
    void push(int a)
    {
        top++;
        if(top<MAX)
        {
            arr[top]=a;
        }
        else
        {
            cout<<"stack is full"<<endl;
            top--;
        }
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
            return NULL;
        }
        else
        {
            int data=arr[top];
            arr[top]=NULL;
            top--;
            return data;
        }
    }
    void print()
    {
        for(int i=0;i<3;i++)
        cout<<arr[i]<<"\n";

    }

};
int main()
{
    stack s;
    s.push(10);
    s.push(5);
    s.push(20);
    s.print();
    return 0;
}

