#include<iostream>
using namespace std;
class Node{
    public:
    int d;
    Node *next;            //next is address of next element in the list of type node

    Node(int data){                            //parameterised constructor
        d = data;
        next= NULL;
    }
};
Node *takeinput(){
    int data;
    cin>>data;
    Node *head = Null;
    while (data!=Null)
    {
        Node *newnode=newnode(data)
        if(head==Null){
            head=newnode;
        }
        else{
            Node *temp = head;
            while(temp->next!=Null){
                temp=temp->next;
            }
            temp->next = newnode;
        }
        cin>>data;
    }
    return head;

}


void print(Node *head){
    Node *temp = head;                          ///intialized another variable because we wrote while(Head->next!=null)  then it will not
    while (temp!=NULL)                             /// print the last vlaue which contains the null address. 
    {
        cout<<temp->d<<" ";
        temp = temp->next;
    }
        cout<<endl;   
    temp=head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp= temp->next;
    }
    
}
int main()
{
  /*  Node n1(1);
    Node *head = &n1;    // we have to store the address of head in a variable;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5*/
    Node *head = takeinput()
    print(head);



}