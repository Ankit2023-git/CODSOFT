#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float firstNumber;
    float secondNumber;
    char op;
    float sum, sub, mul, div;
    cout << "Welcome to the simple calculator!" << endl;
    cout << "Enter your first number: ";
    cin >> firstNumber;
    cout << endl;
    cout << "Enter your second number: ";
    cin >> secondNumber;
    cout << endl;
    cout << "Enter your desired operand (e.g: '+','-','*' or '/') that operation you wanted to perform: ";
    cin >> op;
    cout << endl;
    switch(op) {
        case '+' :
        sum = firstNumber + secondNumber;
        cout << sum;
        break;
        case '-' :
        sub = firstNumber - secondNumber;
        cout << sub;
        break;
        case '*' :
        mul = firstNumber * secondNumber;
        cout << mul;
        break;
        case '/' :
        div = firstNumber / secondNumber;
        cout << div;
        break;
        default :
        cout << " Invalid Operand";
    }
    return 0;
}