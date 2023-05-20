#include <iostream>
#include "calculator.h"

using namespace std;

/// Constructor to Initilize data members to 0 doubles
Calculator::Calculator() : result(0.0), mem(0.0) {}

void Calculator::add()
{
    cout << "Addition\n";
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) + parseInput(b);
    cout << "The result is " << result;
}
void Calculator::subtract()
{
    cout << "Subtraction\n";
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) - parseInput(b);
    cout << "The result is " << result;
}
void Calculator::multiply()
{
    cout << "Multiplication\n";
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) * parseInput(b);
    cout << "The result is " << result;
}
void Calculator::divide()
{
    cout << "Divide\n";
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    result = parseInput(a) / parseInput(b);
    cout << "The result is " << result;
}
void Calculator::square()
{
    cout << "Square\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    cout << "The result is " << result;
}
void Calculator::sqrt()
{
    cout << "Square Root\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    result = std::sqrt(parseInput(a));
    cout << "The result is " << result;
}
void Calculator::setMem()
{
    cout << "Set Memory\n";
    string a;
    cout << "Enter a number: ";
    cin >> a;
    mem = parseInput(a);
    cout << "The mem is " << mem;
}
void Calculator::printMem() const
{
    cout << "The mem is " << mem;
}
/// subs in number value when strings result or mem are entered
double Calculator::parseInput(const string& input) const
{
    if (input == "result")
    {
        return result;
    }
    else if (input == "mem")
    {
        return mem;
    }
    else
    {
        return std::stod(input); //stod = String to Double
    }
}
void Calculator::welcome() const
{
    cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
}
/// parse input and decide which member func to call
void Calculator::parseOperation(const string& input)
{
    if (input == "+" || input == "add" || input == "addition" || input == "sum")
    {
        add();
    }
    else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
    {
        subtract();
    }
    else if (input == "/" || input == "divide" || input == "div")
    {
        divide();
    }
    else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
    {
        multiply();
    }
    else if (input == "sqrt")
    {
        sqrt();
    }
    else if (input == "square")
    {
        square();
    }
    else if (input == "setmem")
    {
        setMem();
    }
    else if (input == "printmem")
    {
        printMem();
    }
    else if (input == "change")
    {

    }
    else
    {
        cout << "Enter Valid Input";
    }
}
