#include<iostream>
using namespace std;
struct node
{
node *prev;
node *next;
char info;
}start, last;

void create_list (struct node *start, struct node *last)
{
int i,n;
node *p,*q;
start=new node;
start->next=NULL;
start->prev=NULL;
cout<<"  enter info  ";
cin>>start->info;
q=start;
cout<<"\nenter the number  of nodes in the ll";
 cin>>n;
for(i=1;i<n;i++)
{
p=new node;
q->next=p;
p->prev=q;
p->next=NULL;
cout<<"  enter info  ";
cin>>p->info;
q=p;
last=p;
}
}

void add_beg(struct node *start, struct node *last)
{
node *p;
p=new node;
p->next=start;
p->prev=NULL;
p->next->prev=p;
start=p;
cout<<endl<<"  enter info  ";
cin>>p->info;
}

void add_end(struct node *start, struct node *last)
{
node *p;
p=new  node;
p->next=NULL;
p->prev=last;
p->prev->next=p;
last=p;
cout<<endl<<"  enter info  ";
cin>>p->info ;
}



void display(struct node *start,struct node *last)
{
node *p;
p=start;
while((p->next)!=NULL)
	{
	cout<<endl<<p<<"   "<<p->prev<<"   "<<p->next<<"   "<<p->info;
	p=p->next;
	}
}


int main()
{
cout<<"creating sll: " ;
create_list(&start,&last);
display(&start,&last);
cout<<"\nend";
return 0;
}
