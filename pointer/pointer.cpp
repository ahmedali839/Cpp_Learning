#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 10;
    int *t = &x;
    int p = x;
    cout << "Hello Yar." << endl;
    cout << "Let x: 10 and it's memory location: " << &x << endl;
    // cout << "Let x and it's memory location: " << &x << endl;
    cout << "T is talking directly with x variable's memory, as t variable's memory: " << t << endl;
    *t = 20;
    cout << "new x value: " << *t << endl;
    cout << x << endl;
    int w = x;
    cout << "The new value" << w << endl;
    cout << "p variable was talking with old x, so it's memory location and it's value also old x's. " << &p << " " << p << endl;
    cout << p << endl;
}