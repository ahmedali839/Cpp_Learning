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
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     // this is how to initialize 4 rows * 6 columns in 2 dimentions array
//     int arr[4][6];

//     return 0;
// }

// // Q-6
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int arr[25];
//     int num, found = 0;

//     cout << "Hi, Enter 25 random numbers: ";
//     for (int i = 0; i < 26; i++)
//     {
//         cin >> arr[i];
//     }

//     cin.ignore(1000, '\n'); // This clears the "Enter" key leftover from num2

//     cout << "Now Enter any of Previous number: ";
//     cin >> num;

//     for (int i = 0; i < 26; i++)
//     {
//         if (arr[i] == num)
//         {
//             found++;
//         }
//     }

//     cout << "Your " << num << " searched number found: " << found << " times.";
// }

// // // Q-7
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[2][5] = {
//         {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

//     cout << "Here difference between 1D and 2D array: " << endl;

//     cout << "Here 1D array: " << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr1[i] << " ";
//     }
//     cout << endl;
//     cout << "Here 2D array: " << endl;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // Q-8)
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5}; // It is How to initialize an array of size 5 in c++.
//     return 0;
// }

// // // Q-9)
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int score[3][4];

//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Enter marks for Student " << i + 1 << " in 4 subjects:" << endl;
//         for (int j = 0; j < 4; j++)
//         {
//             cout << "Subject " << j + 1 << " : ";
//             cin >> score[i][j];
//         }
//     }

//     cout << "\n----- Student Marks -----" << endl;

//     for (int i = 0; i < 3; i++)
//     {
//         int total = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             total += score[i][j];
//         }

//         double average = total / 4.0;

//         cout << i + 1 << " Student: total marks = " << total << ", and average marks = " << average << endl;
//     }

//     return 0;
// }

// // Q-10)
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int arr[25];
    int positive = 0, negative = 0, even = 0, odd = 0;

    cout << "Enter 25 random numbers: ";
    for (int i = 0; i < 25; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] == 0)
            continue;
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }

    cout << "\nHere analization of your numbers: \n"
         << "Postive: " << positive << " times.\n"
         << "Negative: " << negative << " times.\n"
         << "Even: " << even << " times.\n"
         << "Odd: " << odd << " times.\n"
         << "Thanks for reviewing all these problems."; 
}