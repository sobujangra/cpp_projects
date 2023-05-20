#include <iostream>
#include "scientific.h"

using namespace std;

/// Constructor
Scientific::Scientific() : Calculator() {}

/// Overrided welcome message to show scientific options
void Scientific::welcome() const
{
    cout << "\n\nEnter one of:\n"
    << "+, -, /, *, sqrt, square, change, setmem, printmem, sin, cos, log, tan, ln, abs, pow\n"
    << "or exit\n";
}

/// Overridded parse operation to call correct member function
void Scientific::parseOperation(const std::string& input)
{
    /// Reuse code for all simple calc inputs
    /// If no simple calc match found it will continue below
    Calculator::parseOperation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        cos();
    }
    else if (input == "ln")
    {
        ln();
    }
    else if (input == "log")
    {
        log();
    }
    else if (input == "abs")
    {
        abs();
    }
    else if (input == "pow")
    {
        pow();
    }
    else if (input == "change")
    {

    }
    else
    {
        cout << "Enter Valid Input";
    }
}
void Scientific::sin()
{
    cout << "Sin\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sin(parseInput(a));
    cout << "The result is " << result;
}
void Scientific::cos()
{
    cout << "Cos\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::cos(parseInput(a));
    cout << "The result is " << result;
}
void Scientific::tan()
{
    cout << "Tan\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::tan(parseInput(a));
    cout << "The result is " << result;
}
void Scientific::ln()
{
    cout << "Natural Log\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::log(parseInput(a));
    cout << "The result is " << result;
}
void Scientific::log()
{
    cout << "Log\n";
    string a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter a number: ";
    cin >> b;
    result = std::log(parseInput(b))/std::log(parseInput(a));
    cout << "The result is " << result;
}
void Scientific::abs()
{
    cout << "Absolute Value\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::abs(parseInput(a));
    cout << "The result is " << result;
}
void Scientific::pow()
{
    cout << "Power\n";
    string a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the exponent: ";
    cin >> b;
    result = std::pow(parseInput(a), parseInput(b));
    cout << "The result is " << result;
}
