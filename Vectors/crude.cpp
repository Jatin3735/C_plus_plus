//wap to take input size and element of the vector from user and then show vector elements

#include<vector> 
#include <iostream>
using namespace std;
int main()
{
    int n,choice;;
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
    while(1){
        cout<<"\nWhich opertion you want to perfome(1. Update / 2 Display / 3. Delete / 4. Exit : ";
        cin>>choice;
        if(choice == 1 ){
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
            
        }
        else if(choice == 2){
            cout<<"Vector is : ";
            for(int x : vec){
            cout<<x<<" ";
            }
        }
        else if(choice == 3){
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
        else if(choice == 4){
            cout<<"Exiting the program";
            break;
        }
        else{
            cout<<"Invalid choice ";
        }
    }
    return 0;
}
