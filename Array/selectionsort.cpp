//selection sort 
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before sort : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n-1;i++){
        cout<<"\nPass "<<i+1<<" : "<<endl;
        int min=i;
        for(int j=i+1;j<n;j++){
            cout<<"min = "<<arr[min]<<" , loc = "<<j<<" / compare "<<arr[min]<<" and "<<arr[j];
            if(arr[min]>arr[j]){
                cout<<" (Swap)";
                min=j;
            }
            else{
                cout<<" (No Swap)";
            }
            cout<<endl;
        }
        int temp= arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
        cout<<"Array after pass "<<i+1<<" : ";
        for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    }
    cout<<"\nArray after sort : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
