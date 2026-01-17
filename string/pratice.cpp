// // // Assignment #4 - PF - 17/01/2026

// // Q-1
// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[10];
//     int sum = 0;

//     cout << "Enter 2 numbers: " << endl;

//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array of entered numbers: " << endl;
//     cout << "[";
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "'" << arr[i] << "" << "'";
//         sum += arr[i];
//     }
//     cout << "]" << endl;
//     cout << "Sum:" << sum;

//     return 0;
// }

// // // Q-2
// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[10];

//     cout << "Enter 10 random numbers: " << endl;

//     for (int i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Sorted Even and Odd of Numbers: " << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {

//             cout << "Even: " << arr[i] << "" << "'" << endl;
//         }
//         else
//         {
//             cout << "Odd: " << arr[i] << "" << "'" << endl;
//         }
//     }

//     return 0;
// }

// // // Q-3
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     string p;
//     string vowels = "aeiou";
//     string foundedVowels = "";
//     int countVowels = 0;

//     cout << "Enter something: ";
//     getline(cin, p);

//     cout << "You Entered: " << p << endl;

//     cout << "Length of characters: " << p.length() << "." << endl;
//     for (int i = 0; i < p.length(); i++)
//     {
//         for (int j = 0; j < vowels.length(); j++)
//         {
//             if (p[i] == vowels[j])
//             {
//                 countVowels++;
//                 foundedVowels += p[i];
//             }
//         }
//     }

//     cout << "Vowel founds: " << foundedVowels << " with length of: " << countVowels << ".";

//     return 0;
// }

// // // Q-4
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     string p1 = "";
//     string p2 = "";

//     cout << "Enter Something1: ";
//     getline(cin, p1);

//     cout << "Enter another Something2: ";
//     getline(cin, p2);

//     if (p2.compare(p1) == 0)
//     {
//         cout << "It's exact matched.";
//     }
//     else
//     {
//         cout << "It's does not exact matched.";
//     }

//     return 0;
// }

// // // Q-5
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // this is how to initialize 4 rows * 6 columns in 2 dimentions array
    int arr[4][6];

    return 0;
}
