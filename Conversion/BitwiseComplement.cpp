#include<iostream>
using namespace std;

// Function to flip each bit of binary representation of n
int bitwise(int n) {
    int ans = 0, mul = 1, rem;
    while (n) {
        rem = n % 2;
        rem = rem ^ 1; // Flip the bit (0 -> 1, 1 -> 0)
        n /= 2;
        ans = ans + rem * mul;
        mul *= 2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int flipped = bitwise(n);
    cout << "Bitwise flipped result: " << flipped << endl;

    return 0;
}
