#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
#include "calculator.h"
#include "scientific.h"

using namespace std;

int main()
{

    /// Initialize simple calc and scientific calc objects
    Calculator calc;
    Scientific sci;

    /// Assign calculator pointer to the simple calc object
    /// For polymorphism
    Calculator* calcPtr = &calc;

    /// Switch to flip scientific calc on and off
    bool sciActive = false;

    system("Color 0B");
    cout << "Welcome to our Calculator App\n\n"
    << "This calculator has 2 modes, normal and scientific.\n"
    << "You can change it using the 'change' keyword.\n\n"
    << "This app has 2 other special keywords, result and mem.\n"
    << "result stores the result of the previous calculation.\n"
    << "mem allows you to store and access a number.\n"
    << "Both can be used instead of numbers during calculations.\n"
    << "They are both local to the mode you are using.\n";

    /// Welcome message for simple calc
    calcPtr->welcome();

    /// Set precision for all uses of cout
    /// Shows up to 15 places
    cout << setprecision(15);

    /// Taking input using while loop
    string input = "";
    while (cin >> input && input != "exit")
    {
        system("CLS");
        /// Input to switch mode
        if (input == "change")
        {
            if (sciActive)
            {
                /// Set pointer to the simple calc object
                calcPtr = &calc;
                sciActive = false;
                system("Color 0B");
                cout << "\nSimple Calculator Activated";
            } else /// sciActive is false
            {
                /// Set pointer to scientific calc object
                calcPtr = &sci;
                sciActive = true;
                cout << "\nScientific Calculator Activated";
                system("Color 0A");
            }
        }
        /// Call virtual functions from base class pointer to get polymorphic
        /// Executes function based on type of object, whether simple or scientific
        calcPtr->parseOperation(input);
        calcPtr->welcome();
    }

    return 0;
}
