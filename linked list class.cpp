#include<iostream>
using namespace std;
struct node
{
node *prev;
node *next;
string info;
}start, last;

void create_list (struct node *start, struct node *last)
{
int i,n;
node *p,*q;
p=new node;
p->next=NULL;
p->prev=NULL;
cout<<"  enter info  ";
cin>>p->info;
q=p;
start=p;
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
cout<<"\n"<<p->info;
q=p;
last=p;
}

cout<<"\n\n\nstart node:  "<<start->info;
cout<<"      p node:  "<<p->info;
return;
}

/*void add_beg(struct node *start, struct node *last)
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

void add_end(struct node *start)
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
*/


void display(struct node *start)
{
node *p;
p=start;
cout<<"\nstart node"<<start->info;
cout<<"\nstarting printing of the list";
//while((p->next)!=NULL)
for(int i=1;i<=3;i++)
	{
        cout<<"\none node";
        //cout<<"\n"<<p->info;
        //p=p->next;
	}
return;
}


int main()
{
cout<<"creating sll: " ;
create_list(&start,&last);
display(&start);
cout<<"\nend";
return 0;
}
