#include<iostream>
#include<string>
using namespace std;


class P{
    public:
    int age;
    string name;
    void displayP(){
        cout<<"Name : "<<name<<" || "<<"Age : "<<age<<endl;
    }
};
class C : public P{
    public:
    int pincode;
    string city;
    void displayC(){
        cout<<"City : "<<city<<" || "<<"Pincode : "<<pincode<<endl;
    }
};
class S : public C{
    public:
    int marks;
    string course;
    void displayS(){
        cout<<"Course : "<<course<<" || "<<"Marks : "<<marks<<endl;;
    }
};
int main(){
    int n,i;
    cout<<"Enter how many students : ";
    cin>>n;
    S s1[n];
    for(i=0;i<n;i++){
        cout<<"=====Enter Details of Student "<<i+1<<" ====="<<endl;
        cout<<"Enter name : ";
        cin>>s1[i].name;
        cout<<"Enter age :";
        cin>>s1[i].age;
        cout<<"Enter Course name : ";
        cin>>s1[i].course;
        cout<<"Enter Marks :";
        cin>>s1[i].marks;
        cout<<"Enter city name : ";
        cin>>s1[i].city;
        cout<<"Enter Pincode : ";
        cin>>s1[i].pincode;
    }

    cout<<"=========Person Details========="<<endl;
    for(i=0;i<n;i++){
        cout<<i+1<<". ";
        s1[i].displayP();
    }
    cout<<endl;
    cout<<"=========Student Details========="<<endl;
    for(i=0;i<n;i++){
        cout<<i+1<<". ";
        s1[i].displayS();
    }
    cout<<endl;
    cout<<"=========Address Details========="<<endl;
    for(i=0;i<n;i++){
        cout<<i+1<<". ";
        s1[i].displayC();
    }
}   