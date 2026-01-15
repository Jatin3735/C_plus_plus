#include<iostream>
using namespace std;
int main(){
    int n,i,j,c;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                count++;
            }
        }
        if(count==0){
            cout<<arr[i]<<" ";
        }
    }
}