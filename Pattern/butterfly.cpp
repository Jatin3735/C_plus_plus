#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter how many lines : ";
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout <<"*";
        }
        for(int k=0;k<2*(n-i-1);k++){
            cout <<" ";
        }
        for(int j=0;j<i+1;j++){
            cout <<"*";
        }
        cout <<endl;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<i+1;j++){
            cout <<"*";
        }
        for(int k=0;k<2*(n-i-1);k++){
            cout <<" ";
        }
        for(int j=0;j<i+1;j++){
            cout <<"*";
        }
        cout <<endl;
    }
}