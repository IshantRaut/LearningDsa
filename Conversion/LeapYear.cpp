#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the year: ";
    cin >> N;

    if (N % 400 == 0) {
        cout << N << " is a leap year." << endl;
    } else if (N % 4 == 0 && N % 100 != 0) {
        cout << N << " is a leap year." << endl;
    } else {
        cout << N << " is not a leap year." << endl;
    }

    return 0;
}
