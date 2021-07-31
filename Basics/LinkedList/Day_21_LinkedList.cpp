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

void ReversePrint(node* temp){
    
    if(temp==NULL){
        
    }
    else{
        ReversePrint(temp->link);
        cout<<temp->data<<"->";
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
       next = curr->link;
       curr->link = prev;
       //next->link = curr;
      
       prev = curr;
       curr = next;
    }
    head=prev;
}

void ReverseRecursion(node* temp){
    if(temp->link==NULL){
        head = temp;
    }
    else{
        ReverseRecursion(temp->link);
        temp->link->link = temp;
        temp->link = NULL;
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
    cout<<endl;
    Print();
    cout<<endl;
    ReversePrint(head);
    cout<<endl;
    ReverseRecursion(head);
    Print();

    return 0;
}
