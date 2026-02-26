#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    float grade;

public:
    void input()
    {
        cout << "Enter name : ";
        cin >> name;
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter grade : ";
        cin >> grade;
        cout << endl;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Grade = " << grade << endl;
        cout << endl
             << endl;
    }
};
int main()
{
    int n;
    cout << "Enter how many students : ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "For Student " << i + 1 << " : " << endl;
        s[i].input();
    }
    cout << "=============Student details=============" << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
    return 0;
}