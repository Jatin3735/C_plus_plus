
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
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp= arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"\nArray after sort : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
