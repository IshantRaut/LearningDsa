#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n < 1) {
        return false;
    }

    while (n != 1) {
        if (n % 2 == 1) {
            return false;
        }
        n = n / 2; // This should be outside the if block
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << boolalpha << isPowerOfTwo(n) << endl;
    return 0;
}
