//wap to take input size and element of the vector from user and then show vector elements

#include<vector> 
#include <iostream>
using namespace std;
int main()
{
    int n,choice,flag = 1;
    cout<<"Enter size : ";
    cin>>n;
    vector<int> vec;
    cout<<"enter element : ";
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        vec.push_back(el);
    }
    cout<<"Vector is : ";
    for(int x : vec){
        cout<<x<<" ";
    }
    while(flag){
        cout<<"\nWhich opertion you want to perfome(1. Update / 2 Display / 3. Delete / 4. Exit) : ";
        cin>>choice;
        switch(choice){
            
        case 1 : {
            int in,up;
            cout<<"At which index : ";
            cin>>in;
            cout<<"Enter new marks : ";
            cin>>up;
            if(in<=vec.size()){
                vec[in] = up;
                cout<<"Marks updated successfully"<<endl;
            }
            else{
                cout<<"invalid index "<<endl;
            }
            break;
            
        }
        case 2 : {
            cout<<"Vector is : ";
            for(int x : vec){
            cout<<x<<" ";
            }
            cout<<endl;
            break;
        }
        case 3 : {
            int ch;
            cout<<"(1. last element popping / 2. Particular index) : ";
            cin>>ch;
            if(ch == 1){
                vec.pop_back();
                cout<<"last element is Deleted"<<endl;
            }
            else if(ch == 2){
                int in ;
            cout<<"which index u want to Delete : ";
            cin>>in;
            if(in<=vec.size()){
                vec.erase(vec.begin()+in);
            cout<<"Deleted successfully"<<endl;
            }
            else{
                cout<<"Invalid index"<<endl;
            }
            }
            else{
                cout<<"Invalid choice "<<endl;
            }
            break;
        }
        case 4 : {
            cout<<"Exiting the program";
            flag = 0;
            break;
        }
        default : {
            cout<<"Invalid choice ";
            break;
            }
        }
    }
    return 0;
}
