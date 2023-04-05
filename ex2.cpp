#include <iostream>
using namespace std;

int main() {
    int num;
    int* p;
    cout << "Enter an integer: ";
    cin >> num;
    p = &num;
    if (*p > 0) {
        cout << "The number is positive." << endl;
    }
    else if (*p < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
