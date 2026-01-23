#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int id;
};

union College
{
    const char *name;
    int id;
};

int main()
{
    Student stud = {"Ahmed", 01};
    College clg;
    clg.name = "Ali";
    cout << "Structure/Object in c++ means: assigning dataTypes to variables as grouply. working as:" << endl;
    cout << "Structure Values: " << endl;
    cout << "Name: " << stud.name << " and It's memory address value: " << &stud.name << endl;
    cout << "id: " << stud.id << " and It's memory address value:  " << &stud.id << endl;
    cout << "Here magic, structure saves variables but every variable on different memory location. it's where union come which saves all it's variables on unique/one memory location(definitely we can put only variable to work on at a time.)" << endl;
    cout << "Union Values: " << endl;
    cout << "Name: " << clg.name << " and It's memory address value: " << &clg.name << endl;
    clg.id = 02;
    cout << "id: " << clg.id << " and It's memory address value:  " << &clg.id << endl;
}