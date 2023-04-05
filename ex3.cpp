#include <iostream>
using namespace std;

int main() {
    int a, b;
    int* p1, * p2;
    cout << "Enter two integers: ";
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}
