#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout << "Enter numbers "<<i+1<<": ";
        cin >> arr[i];
    }
    int max1,max2;
    if(arr[0]>arr[1]){
    	max1 = arr[0];
    	max2 = arr[1];
	}
	else{
		max1 = arr[1];
		max2 = arr[0];
	}
    for(int i=2;i<5;i++){
    	if(arr[i]>max1){
    		max2 = max1;
    		max1 = arr[i];
		}
		else if(arr[i]>max2){
			max2 = arr[i];
		}
	}
	cout <<"First maximum => "<<max1<<endl<<"Second maximum =>"<<max2<<endl;
}

