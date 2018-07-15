#include<iostream>
using namespace std;
struct node
{
node *prev;
node *next;
string info;
}start, last;

void create_list(){

    node *p,*q;
    p = new node;
    p->next=NULL;
    p->prev=NULL;
    //char info = "testing";
    //char *i = &info;
    p->info = "testing";
    //start = p;
    q = p;
    int nodes;
    cout<<"Enter the number of node: ";
    cin>>nodes;

    int i;
    for(i =0; i<nodes; i++){
        p = new node;
        q->next = p;
        p->prev=q;
        p->next = NULL;
        cin>>p->info;
        q=p;

    }


    cout<<p;

}


void print(struct node *start){
    node *p;
    p = start;
    while((p->next) != NULL){
          cout<<p->info;
          p = p->next;

          }
}

int main(){

    cout<<"Starting program";
    create_list();
    print(&start);
    return 0;

}
