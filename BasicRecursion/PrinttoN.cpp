#include <bits/stdc++.h>
using namespace std;

class Solution {
    public :
        void printNumbers(int current, int n){
            if (current > n)
            {
                /* code */
                return;
            }
            cout << current << " ";

            printNumbers(current + 1, n);
            
        }
};


int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(1, n);
    cout << "\n";

    return 0;
}