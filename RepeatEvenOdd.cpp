/*
Repeat Even or Odd
Pawelski
3/29/2021
Run the program and look over the code to determine what the program does!
*/
#include <iostream>
using namespace std;

int main()
{
    int number;
    string response = "Y";
    while (response == "Y")
    {
        cout << "Enter a number >> ";
        cin >> number;
        if (number % 2 == 0)
        {
            cout << number << " is an even number.\n";
        }
        else
        {
            cout << number << " is an odd number.\n";
        }
        cout << "Would you like to enter another number? (Y/N) >> ";
        cin >> response;
        cout << "\n";
    }
    return 0;
}
