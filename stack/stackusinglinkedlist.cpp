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
};
void peak(){
    Node *temp= fi;
    int pp = temp->data;
    fi = fi->next;
    cout<<"At Peak : "<<pp<<endl;
};
int main()
{
    int flag =1;
    cout<<"What u want to do ?\n1. Push\n2. Pop\n3. Display\n4. Peak\n5. Exit"<<endl;
    int choice;
    
    while(flag){
        cin>>choice;
    switch(choice){
        case 1:{
            int n,i;
            cout<<"how many entries : ";
            cin>>n;
            for(i=0;i<n;i++){
                int value;
                cin>>value;
                push(value);
            }
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            peak();
            break;
        }
        case 5:{
            flag= 0;
            break;
        }
        default:{
            cout<<"invalid choice"<<endl;
        }
    }
    }
    return 0;
}

