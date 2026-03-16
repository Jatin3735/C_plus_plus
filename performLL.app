//wap create 5 nodes in linked list and then display all the element on the screen
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
int main()
{
    struct Node *newNode,*temp,*head = NULL;
    int i,x,count=0,pos=1,key,flag=1;
    for(i=0;i<5;i++){
        newNode = new Node();
        cout<<"Enter "<<i+1<<" data : ";
        cin>>newNode->data;
        newNode->next = NULL;
        
        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
    }
    Node *last = temp;
    temp = head;
    cout<<"Linked list is : ";
    while(temp!= NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
    while(flag){ 
        cout<<"Enter what u want to perform (1.search / 2.Insert at end /3.Insert at begining /4.Delete at end /5.Exit ) : ";
        cin>>x;
        switch(x){
            case 1 : {
            cout<<"Enter which element you want to search : ";
        cin>>key;
        temp = head;
        while(temp!=NULL){
        if(temp->data == key){
            cout<<"element found at "<<pos<<endl;
            count = 1;
        }
            pos++;
            temp = temp->next;
        }
        if(count==0){
            cout<<"Not found"<<endl;
        }
        break;
            }
        case 2 : {
            int el;
            cout<<"Enter element : ";
            cin>>el;
            newNode = new Node();
            newNode->data = el;
            newNode->next = NULL;
            last->next = newNode;
            last = newNode;
            
            cout<<"Linked list after insertion : ";
            temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
            break;
        }
        case 3 : {
            int el;
            cout<<"Enter element : ";
            cin>>el;
            newNode = new Node();
            newNode->data = el;
            newNode->next = head;
            head = newNode;
            cout<<"Linked list after insertion : ";
            temp = head;
            while(temp!=NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
            break;
        }
        case 4 : {
            if(head == NULL){
            cout<<"List is empty"<<endl;
            break;
        }
        if(head->next == NULL){
            delete head;
            head = NULL;
            last = NULL;
        }
        else{
            Node *prev = head;
            temp = head;

        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
        last = prev;
    }

    cout<<"Linked list after deletion : ";
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    break;
            break;
        }
        case 5: {
            cout<<"Exiting the program";
            flag = 0;
            break;
        }
        default : {
            cout<<"Invalid choice "<<endl;
            break;
        }
        }
    
    }
    return 0;
}
