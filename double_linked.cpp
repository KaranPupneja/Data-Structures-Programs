#include<iostream>

using namespace std;
struct node
{
	struct node* prev;
	int data;
	struct node* next;
};

node* head;
void deletex(int del);
void insert(int a);
void print();

int main()
{
	head=NULL;
  int a,del,n,no;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  cin>>a;
  insert(a);
}
  print();
  
  cin>>del;
  deletex(del);
  print();
}

void insert(int a)
{
	node* tail=new node();
	node* temp;
	node* tempx;
	
	tail->data=a;
	tail->next=NULL;
	tail->prev=NULL;
	
	if(head==NULL)
	{
	  head=tail;	
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=tail;
		tail->prev=temp;
		//tempx=temp->next;
		//tempx->prev=temp;
	}
}


void deletex(int del)
{
	node* temp=head;
  	node* temp1;
  	node* tempx;
  	node* tempy;
  	
  	if(del==1)
  	{
  		head=temp->next;
  		temp=temp->next;
  		temp->prev=NULL;
	  }
	  else
	  {
	  	temp=head;
    for(int i=1;i<del-1;i++)
    {
    	temp=temp->next;
    	tempx=temp;
	}
	temp1=temp->next;
	  temp->next=temp1->next;
	  tempy=temp1->next;
	  tempy->prev=tempx;
	 
}
}


void print()
 {
 	node* temp=head;
 	
 	while(temp!=NULL)
 	{
 		cout<<temp->data;
 		temp=temp->next;
	 }
     cout<<endl;
     temp=head;
     while(temp->next!=NULL)
     {
     	temp=temp->next;
	 }
	 while(temp!=NULL)
	 {
	 //	cout<<"karan"<<" ";
	 	cout<<temp->data;
	 	temp=temp->prev;
		  }	 
cout<<endl;
} 
