#include<iostream>
using namespace std;
int main(){
    int mat1[3][3],mat2[3][3],mat3[3][3],i;
    cout<<"Enter element of matrix 1 : ";
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter element of matrix 2 : ";
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat2[i][j];
        }
    }
    cout<<"Enter element of matrix 1 : ";
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"Matrix is : \n";
    for(i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}