#include <iostream>
using namespace std;

int main() {
    int a, b;
    int* p1, * p2;
    cout << "Enter two integers: ";
    cin >> a >> b;
    p1 = &a;
    p2 = &b;
    if (*p1 > *p2) {
        cout << "The largest number is: " << *p1 << endl;
    }
    else {
        cout << "The largest number is: " << *p2 << endl;
    }
    return 0;
}
