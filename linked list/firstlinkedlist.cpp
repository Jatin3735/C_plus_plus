#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *newNode;
    int value ;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    cout<<"Enter the value of data : ";
    cin>>value;
    newNode->data = value;
    newNode->next = NULL;
    cout<<"Node data is = "<<newNode->data<<endl;
    cout<<"Node next is = "<<newNode->next<<endl;
    cout<<"["<<newNode->data<<"|"<<newNode->next<<"]";
}
