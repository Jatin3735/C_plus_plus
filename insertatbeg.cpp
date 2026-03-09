#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *newNode,*temp;
    struct Node *Head = NULL;
    int value ,i;
    for(i=0;i<5;i++){
        newNode = new Node();
        cout<<"Enter the data : ";
        cin>>value;
        newNode->data = value;
        newNode->next = NULL;
        if(Head == NULL){
            Head = newNode;
            temp = Head;
        }
        else{
            temp->next = newNode;
            temp = temp->next;
        }
    }
    int newval;
    cout<<"Enter value for begining position : ";
    cin>>newval;
    newNode = new Node();
    newNode->data = newval;
    newNode->next = Head;
    Head = newNode;
    
    cout<<"Linked list is : ";
    temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
    
    return 0;
}
