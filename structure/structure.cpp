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



// // // Another/Alternative Example:

// #include <iostream>
// #include <string>
// using namespace std;

// struct Student
// {
//     string name;
//     int id;
// };

// union College
// {
//     // Change string to char* (C-style string)
//     // NOTE: This just points to a string, it doesn't manage the memory itself like std::string
//     const char* name; 
//     int id;
// };

// int main()
// {
//     Student stud = {"Ahmed", 1};
    
//     // Now this works!
//     College clg;
//     clg.name = "Ali"; // Union now holds a name
    
//     cout << "Structure Values: " << endl;
//     cout << "Name: " << stud.name << " & Address: " << &stud.name << endl;
//     cout << "ID: " << stud.id << " & Address: " << &stud.id << endl;
    
//     cout << "\nUnion Values: " << endl;
//     cout << "Name: " << clg.name << " & Address: " << &clg.name << endl;
    
//     // WARNING: In a union, writing to 'id' will overwrite 'name' because they share memory!
//     clg.id = 2; 
//     cout << "ID: " << clg.id << " & Address: " << &clg.id << endl;
    
//     // If you try to print clg.name now, it will likely be garbage because clg.id overwrote it.
// }
