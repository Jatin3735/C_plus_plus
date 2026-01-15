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
    cout<<"Array in ascending order : ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]<arr[j]){
                c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
