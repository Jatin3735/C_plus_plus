#include <iostream>
#include<stack>
#define MAX 6
using namespace std;
stack<int> arr;
void push(int value){
    arr.push(value);
}
void display(){
    stack<int> temp =arr;
     while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}
void popped3elements(){
    for(int i=0;i<3;i++){
        int el = arr.top();
        arr.pop();
        cout<<el<<" is popped\n";
    }
}
int main()
{
    for(int i=0;i<4;i++){
        int value;
        cin>>value;
        push(value);
        cout<<"Element inserted\n";
    }
    display();
    cout<<endl;
    popped3elements();
    return 0;
}


