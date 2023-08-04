#include<iostream>
using namespace std;

int main() 
{
    char operation;
    double num1,num2,result;

    cout << "---Simple Calculator---\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Select an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
            } 
			else {
                cout << "Cannot divide by zero\n";
                return 1;
			}
            break;
            
        default:
            cout << "Invalid operation\n";
            return 1;
	   }

    cout << "Result: " << result << endl;
    return 0;
}
