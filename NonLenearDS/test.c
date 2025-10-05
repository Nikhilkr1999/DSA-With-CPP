//This code is for Linked list it's followed fifo concepts
#include<iostream>
using namespace std;
struct Node{
    int data; 
    struct Node *next;// Here we can not initialize the valuses;
};

void insert(struct Node *head, struct Node *temp, int val){
    struct Node *newNode=(struct Node *) malloc (sizeof(struct Node));

    if(head==NULL){
        newNode->data=val;
        newNode->next=NULL;
        head=newNode;
        temp=head;
    }

    else{
        newNode->data=val;
        newNode->next=NULL;
        temp->next=newNode;
        temp=newNode;
    }

}

void display(struct Node *tp){
    cout<<"the given LL are:- ";
    while(tp!=NULL){
        cout<<tp->data<<" ";
        tp=tp->next;
    }
}

int main(){
    cout<<"Rma";
    struct Node *temp,*head;
    temp=head=NULL;
    // struct Node *newNode=(struct Node *) malloc (sizeof(struct Node));
    // newNode->data=val;
    // newNode->next=NULL;

    // head = newNode;
    cout<<"Kirti";
    insert(head,temp,3);
    cout<<"Kirti 2";
    insert(head,temp,8);
    // insert(head,temp,4);
    // insert(head,temp,9);
    // insert(head,temp,7); 
    temp=head;
    
    cout<<"head = " << head->data;
    cout<<"temp = " << temp->data;
    display(temp);
    return 0;
}
