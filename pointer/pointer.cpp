// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int *t = &x;
//     int p = x;
//     cout << "Hello Yar." << endl;
//     cout << "Let x: 10 and it's memory location: " << &x << endl;
//     // cout << "Let x and it's memory location: " << &x << endl;
//     cout << "T is talking directly with x variable's memory, as t variable's memory: " << t << endl;
//     *t = 20;
//     cout << "new x value: " << *t << endl;
//     cout << x << endl;
//     int w = x;
//     cout << "The new value" << w << endl;
//     cout << "p variable was talking with old x, so it's memory location and it's value also old x's. " << &p << " " << p << endl;
//     cout << p << endl;
// }




#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. ORIGINAL VARIABLE
    // 'x' is a standard integer variable stored at a specific memory address (e.g., 0x100).
    int x = 10; 

    // 2. POINTER VARIABLE
    // '*t' is a POINTER. It does NOT store the value 10.
    // Instead, it stores the MEMORY ADDRESS of 'x' (e.g., 0x100).
    // The '&' operator retrieves the address of 'x'.
    int *t = &x; 

    // 3. COPY VARIABLE
    // 'p' is a regular variable. It creates a COPY of the value inside 'x' right now.
    // 'p' gets its own separate memory address (e.g., 0x200).
    // It is NOT linked to 'x' after this line.
    int p = x; 

    cout << "Hello Yar." << endl;

    // &x -> Shows the address where 10 is stored.
    cout << "Let x: 10 and it's memory location: " << &x << endl;

    // t -> Printing a pointer prints the ADDRESS it holds.
    // Since t = &x, this will print the exact same address as the line above.
    cout << "T is talking directly with x variable's memory, as t variable's memory: " << t << endl;

    // 4. MODIFYING VIA POINTER (DEREFERENCING)
    // *t means "Go to the address stored in t, and access that value."
    // Since t points to x, changing *t actually changes x directly.
    *t = 20; 

    // *t -> Go to x's address and read the value (now 20).
    cout << "new x value (via pointer t): " << *t << endl;

    // x -> Accessing x directly shows it has been changed by the pointer.
    cout << "x value (accessed directly): " << x << endl;

    // 5. NEW COPY
    // 'w' copies the CURRENT value of x. Since x is now 20, w becomes 20.
    int w = x; 
    cout << "The new value copied into w: " << w << endl;

    // 6. PROOF OF INDEPENDENCE (p vs x)
    // 'p' was created when x was 10. Since 'p' is just a copy (not a pointer), 
    // it was unaffected when we changed x to 20.
    // &p shows that p lives at a DIFFERENT address than x.
    cout << "p variable was talking with old x, so it's memory location is unique (" << &p << ") and it's value is still old x's: " << p << endl;
    
    cout << "Final check of p: " << p << endl;

    return 0;
}
