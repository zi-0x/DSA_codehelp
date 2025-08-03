//mini calculator program using switch case

#include <iostream>
#include <cmath>    
using namespace std;

void calculate(int a, int b,char op){
    switch(op){
        case '+':
            cout << "Result: " << a + b << endl;
            break;

        case '-':
            cout << "Result: " << a - b << endl;
            break;

        case '*':
            cout << "Result: " << a * b << endl;
            break;

        case '/':
            if(b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;

        case '%':
            if(b != 0)
                cout << "Result: " << a % b << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;

        default:
            cout << "Error: Invalid operator." << endl;
    }
}


int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter operator (+, -, *, /,%): ";
    cin >> op;

    calculate(a, b, op);

    return 0;
}

