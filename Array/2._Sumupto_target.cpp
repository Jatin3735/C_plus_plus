#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0]) -1;
	int target;
	cout <<"Enter target : ";
	cin >> target;
	while(left<right){
		int sum = arr[left]+arr[right];
		if(sum==target){
			cout <<left<<right;
			break;
		}
		else if(sum<target){
			left++;
		}
		else{
			right--;
		}
	}
}
