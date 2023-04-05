#include <iostream>
using namespace std;

int main() {
    int a, b;
    int* p1, * p2;
    char op;
    cout << "Enter two integers: ";
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch (op) {
    case '+':
        cout << "Result: " << (*p1 + *p2) << endl;
        break;
    case '-':
        cout << "Result: " << (*p1 - *p2) << endl;
        break;
    case '*':
        cout << "Result: " << (*p1 * *p2) << endl;
        break;
    case '/':
        cout << "Result: " << (*p1 / *p2) << endl;
        break;
    default:
        cout << "Invalid operator." << endl;
    }
    return 0;
}
