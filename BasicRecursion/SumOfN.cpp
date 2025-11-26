#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
         // Recursive function to find sum of first N natural numbers
    int sumOfNaturalNumbers(int N){
        if (N == 1)
        {
            /* code */
            return 1;
        }
         // Recursive case: current number + sum of previous numbers
        return N + sumOfNaturalNumbers(N - 1);
    }
};
// Driver code
int main() {
    Solution obj;
    int N;
    cin >> N;
    cout << obj.sumOfNaturalNumbers(N) << endl;
    return 0;
}