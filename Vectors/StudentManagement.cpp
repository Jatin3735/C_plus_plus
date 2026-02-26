#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> marks;
    int choice;
    do
    {

        cout << "\n===== Student Marks Management =====\n";
        cout << "1. Create (Insert Marks)\n";
        cout << "2. Read (Display Marks)\n";
        cout << "3. Update Marks\n";
        cout << "4. Delete Marks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int mark;
            cout << "Enter marks to insert: ";
            cin >> mark;
            marks.push_back(mark);
            cout << "Mark inserted successfully!";
            break;
        }
        case 2:
        {
            if (marks.empty())
            {
                cout << "No marks available!\n";
            }
            else
            {
                cout << "Stored Marks: ";
                for (int m : marks)
                    cout << m << " ";
                cout << endl;
            }
            break;
        }
        case 3:
        {
            int index, newMark;
            cout << "Enter index to update: ";
            cin >> index;
            if (index >= 0 && index < marks.size())
            {
                cout << "Enter new mark: ";
                cin >> newMark;
                marks[index] = newMark;
                cout << "Mark updated successfully!\n";
            }
            else
            {
                cout << "Invalid index!\n";
            }
            break;
        }
        case 4:
        {
            int deleteChoice;
            cout << "1. Delete last mark (pop_back)\n";
            cout << "2. Delete mark at index\n";
            cout << "Enter your choice: ";
            cin >> deleteChoice;
            if (deleteChoice == 1)
            {
                if (!marks.empty())
                {
                    marks.pop_back();
                    cout << "Last mark deleted!\n";
                }
                else
                {
                    cout << "Vector is empty!\n";
                }
            }
            else if (deleteChoice == 2)
            {
                int index;
                cout << "Enter index to delete: ";
                cin >> index;
                if (index >= 0 && index < marks.size())
                {
                    marks.erase(marks.begin() + index);
                    cout << "Mark deleted successfully!\n";
                }
                else
                {
                    cout << "Invalid index!\n";
                }
            }
            else
            {
                cout << "Invalid choice!\n";
            }
            break;
        }
        case 5:
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);
    return 0;
}
