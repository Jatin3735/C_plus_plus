#include <iostream>
#include <string>
using namespace std;

int main()
{
    string subject_name,grade;
  int credit,total_credits=19,total=0,semester;
  float sgpa;
  cout<<"Your semster  ";
  cin>>semester;
  while(true){
     cout<<"enter your subject name:" ;
     cin>>subject_name;

     
       if (subject_name == "exit") {
            break;
        }
     cout<<"enter your grade:" ;
     cin>>grade;
     cout<<"enter subject credit:" ;
     cin>>credit;        

        int grade_point = 0;

        if (grade == "A+") grade_point = 10;
        else if (grade == "A") grade_point = 9;
        else if (grade == "B+") grade_point = 8;
        else if (grade == "B") grade_point = 7;
        else if (grade == "C+") grade_point = 6;
        else if (grade == "C") grade_point = 5;
        else if (grade == "D") grade_point = 4;
        else {
            cout << "Invalid grade! Try again.\n";
            continue;
        }
     total=total+(credit*grade_point);
     
  }
    sgpa=(float) total/total_credits;
    
    cout<<"Your sgpa for the semester  " <<semester<< "is :="<<sgpa,semester;
  
     

    return 0;
}