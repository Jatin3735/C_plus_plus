#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int low , int high){
    int pv = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pv){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void qksort(int arr[],int low,int high){
    if(low<high){
        int pv = partition(arr,low,high);
        qksort(arr,low,pv-1);
        qksort(arr,pv+1,high);
    }
}
int main(){
    int m;
    cout<<"Enter array size : ";
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    qksort(arr,0,m-1);
    cout<<"array after sort : ";
    for(int k = 0;k<m;k++){
        cout<<arr[k]<<" ";
    }
}
