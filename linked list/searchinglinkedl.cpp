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
    int n,count=1;
    struct Node *curr = Head;
    cout<<"which u want to search : ";
    cin>>n;
    while(curr!=NULL){
        if(curr->data == n){
            cout<<"at this place -> "<<count;
            break;
        }
        count++;
        curr = Head->next;
    }
}
