#include <iostream>
using namespace std;

int decitobin(int num){
    int ans = 0, pow = 1;
    while (num > 0)
    {
        int rem = num % 2;
        num /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main(){
    int n;
    cout <<"Enter how many numbers : ";
    cin >>n;
    for(int i=1;i<=n;i++){
        cout <<decitobin(i)<<endl;
    }
}