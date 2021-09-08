#include<iostream>
using namespace std;

class Node{
    public:
    int d;
    Node* next;

    Node(int data)
    {
        d=data;
        next=NULL;
    }
}

Node takeinput()
{
    int d;
    cin>>d;
    Node* head = NULL;
    Node* tail = NULL;
    while (data != -1)
    {
        Node* newnode = newnode(data);       //// dynamic
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;      ///tail and head at starting will point at same node.
        }
        else{
            tail->next = newnode;
            tail = tail->next;
        }
        cin>>data;             //// taking input of other data  
    }
    return data;
    
}

 /////  INSERTING A NODE IN LL. 

Node* insertnode(Node* head,int i,int data)      
{
    Node* newnode = newnode(data);
    int count = 0;
    Node* temp=head;    /////  so temp will have address of head (e.g 100)
    
    if(i==0)             ///when we want to place node at 0th position 
    {
        newnode->next = head;     //head's address will be at next of newnode
        head = newnode ;          /// and now head will be changed
        return head;                 ////to return it at main function as it has default head;
    }

    while(temp!=NULL && count < i-1 ){    /// since we have to add the new node at i so i.e b/w i and i-1..
        temp = temp->next;
        count++;
    }
    if(temp != NULL){          ////this loop because if ith element if we choose beyond the length then ther will not be segmentation fault  

   /* newnode->next = temp->next;
    temp->next = newnode; */
    
    //or

    Node* a = temp->next;     ///creating a seperate variable for storing the adrress of temp.
    temp->next = newnode;
    newnode->next = a;
    }

    return head;
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
   Node* head =  takeinput();
    print(head);

    int i,data;
    cin>>i>>data;
    head = insertnode(head,i,data);
    print(head);
}