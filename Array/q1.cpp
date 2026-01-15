//wap to separate even and odd numbers from the original array in different array
#include<iostream>
using namespace std;
int main(){
    int n,i,j=0,k=0 ;
    cout <<"Enter array size : ";
    cin >>n;
    int arr[n];
    cout<<"Enter array elenents : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int even[n],odd[n];
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    cout <<"Even array : ";
    for(i=0;i<j;i++){
        cout <<even[i]<<" ";
    }
    cout<<"\nOdd array : ";
    for(i=0;i<k;i++){
        cout <<odd[i]<<" ";
    }
}
