#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec ;

    vec.push_back(3); // here capacity 1
    vec.push_back(7); // here capacity 2
    vec.push_back(3); // here capacity 4
    

// size = number of elements in vector || capcity = how much element can be store [("capacity will be double after every push ")];
    cout << "Size => "<< vec.size()<< endl;
    cout << "Capacity => "<< vec.capacity()<< endl;
    
}