#include<iostream>
using namespace std;
class over{
public:
double area(double r){
    return 3.14*r*r;
}
area(double l,double b){
    return l*b;
}
area(int x,int h){
    return 0.5*x*h;
}
};
int main(){
    over s;
    cout<<"Area of circle : "<<s.area(3.5)<<endl;
    cout<<"Area of rectangle : "<<s.area(4.5,2.7)<<endl;    
    cout<<"Area of triangle : "<<s.area(4,8)<<endl;    

}
