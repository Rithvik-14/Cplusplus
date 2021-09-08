#include<iostream>
using namespace std;

class Node{
    public : 
    int d ;
    Node* next;

    Node()
    {
        d=data;
        next = NULL;
    }
}
Node* takeinput()
{
    int data;
    cin>>data;
    Node* head = NULL;

    while(data != NULL){
    Node* newnode = newnode(data);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else{
        Node* temp = head;
        while(temp!=NULL && temp->next != NULL ){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    cin>>data;
    }
    return data;
    
}

void deleteinput(Node* head, int data,int i)
{
    Node* newnode= newnode(data);
    int count = 0;
    Node* temp = head;
    while(count <i-1){
        temp = temp->next;
        count++;
    }

    a = temp->next;     // a is variable for the node which we want to delete
    b = a->next;     // b is the next node
    temp->next = b;
    delete a;
}

void print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->d;<<" ";
        head = head->next;
    }
}

int main()
{
    Node* head = takeinput();
    print(head);

    int i,data;
    cin>>i>>data;
    deleteinput(head,data,i);
    print(head);
}
