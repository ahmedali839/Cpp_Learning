#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id = 0;
    string name = "";
    double salary = 0;
};

int main()
{
    Employee emp[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the details of Employee: " << i + 1 << endl;

        cout << "Id: ";
        cin >> emp[i].id;

        cin.ignore();

        cout << "Name: ";
        getline(cin, emp[i].name);

        cout << "Salary: ";
        cin >> emp[i].salary;
    }
    int maxIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        if (emp[i].salary > emp[maxIndex].salary)
        {
            maxIndex = i;
        }
    }
    cout << "\nResult: Highest Earner Employee: " << endl;
    cout << "Id: " << emp[maxIndex].id << endl;
    cout << "Name: " << emp[maxIndex].name << endl;
    cout << "Salary: " << emp[maxIndex].salary << endl;
}