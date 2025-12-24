#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec = {1,2,3};
    // vector<int>null(5,0);
    // vector<int> vec = {1,2,3,4,8,9,5};
    // // vector<char> vec1 = {'a','b','c','d'};
    // for(int i: vec){
    //     cout <<i<<endl;
    // }
    // for(char i : vec1){
    //     cout <<i<<endl;
    // }

// 1. find the size of vector => size function 

    // cout << "size of vector => " << vec.size() <<endl;


// 2. add values in vectors => using push back function 

    // vector<int> vec ;

    //before pushing the size is :

    // cout <<"size before push => " << vec.size() << endl;

    // // after pushing values in vectors : 

    // vec.push_back(3);
    // vec.push_back(7);
    // vec.push_back(3);
    // vec.push_back(5);

    // cout <<"size after push => " << vec.size() << endl;

    //  for(int val: vec){
    //     cout <<val<<endl;
    // }


// 3. deletion of element using => pop back function 

    // vector<int> vec = {1,2,3,4,5};
    // cout << "Size before pop => "<< vec.size() << endl;

    // vec.pop_back();
    // cout << "Size after pop => "<< vec.size() <<endl;;
    // for(int val: vec){
    //     cout <<val<<endl;
    // }


//4. front function

    // vector<int> vec = {1,2,3,4,5};
    // cout <<"front value => "<< vec.front();


//5. back function 

    // vector<int> vec = {1,2,3,4,5};
    // cout <<"end value => "<< vec.back();


//6. at => use vec.at(i) instead of vec[i] 

    vector<int> vec = {1,2,3,4,5};
    cout <<"use of at  => "<< vec.at(3);

}
