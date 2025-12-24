// Ques  => find single number in vector 

// sol => we using XOR bitwise operator [(" XOR cancel same values [ 0^0 = 0 and wih 1 = 0 || 1^0 = 1 and 0^1 = 1)]")]
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {4,1,2,1,2};
    int ans = 0;
    for(int i : vec){
        ans = ans ^ i;
    }
    cout <<"Single value => "<<ans<<endl;
}