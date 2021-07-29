/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct node{
    int data;
    node* link;
};
node* head;

void Insert(int x){
    
    node* temp = new node();
    temp->data = x;
    temp->link = NULL;
    if(head == NULL){
    head = temp;}
    else{
        node* temp1 = head;
        while(temp1->link!=NULL){
            temp1=temp1->link;
        }
        temp1->link = temp;
    }
    
}

void Print(){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
}

void InsertatBeg(int x){
    node* temp = new node();
    temp->data = x;
    temp->link = head;
    head = temp;
}

int count(){
    node* temp = head;
    int x = 0;
    while(temp!=NULL){
       x++;
       temp=temp->link;
    }
    return x;
}

void InsertatN(int x, int y)
{
    node* temp=head;
    node* temp1 = new node();
    temp1->data = x;
    temp1->link=NULL;
    
    if(y==1){
        
        temp1->link=temp;
        head=temp1;
    }
    else{
    while((y-2)>0)
    {
        temp=temp->link;
        y--;
    }
    
    temp1->link = temp->link;
    temp->link = temp1;
    }
}

void DeleteatN(int x){
    node* temp = head;
    if(x==1){
        head = temp->link;
        free(temp);
    }
    else{
    while((x-2)>0){
        temp=temp->link;
        x--;
    }
    node* temp1 = temp->link;
    temp->link=temp->link->link;
    free(temp1);
    }
}

void Reverse(){
    node* prev=NULL;
    node* curr = head;
    node* next;
    
    while(curr!=NULL){
        
    }
}

int main()
{
    head = NULL;
    Insert(2);
    Insert(3);
    Insert(4);
    InsertatBeg(5);
    cout<<count()<<endl;
    InsertatN(6,1);
    Print();
    cout<<endl;
    DeleteatN(1);
    
    Print();
    Reverse();
    Print();

    return 0;
}
