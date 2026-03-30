#include<stack>
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *fi = NULL;
void push(int value){
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = fi;
    fi = newNode;
    cout<<"Inserted : "<<value<<endl;
};
void display(){
    Node *temp = fi;
    if(temp==NULL){
        cout<<"Stack is empty"<<endl;
    }
    cout<<"Stack elements are : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
};

void pop(){
    if(fi==NULL){
        cout<<"Stack is empty"<<endl;
    }
    Node *temp = fi; 
    int pValue = temp->data; 
    fi = fi->next; 
    delete temp; 
    cout<<"popped "<<pValue<<endl;
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();
    return 0;
}
