#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile;

    outFile.open("Student.txt");
    if (!outFile)
    {
        cout << "Error while creating file.";
        return 0;
    }

    outFile << "Ahmed 01" << endl;
    outFile << "Ali 02" << endl;
    outFile << "Akbar 03" << endl;

    outFile.close();

    ifstream inFile;
    inFile.open("Student.txt");

    if (!inFile)
    {
        cout << "File not found.";
        return 0;
    }

    cout << "\nStudent records from file." << endl;

    string name = "";
    int num = 0;

    while (inFile >> name >> num)
    {
        cout << "Name: " << name << " and id: " << num << endl;
    }

    inFile.clear();
    inFile.close();

    ofstream clearFile;
    clearFile.open("Student.txt");
    if (clearFile)
    {
        clearFile << "";
    }
    clearFile.close();
    return 0;
}