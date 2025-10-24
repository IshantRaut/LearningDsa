#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a,int N){
    int sum = (N * (N+1)) /2;

    int s2 =0;

    for(int i=0;i<N-1;i++){
        s2+=a[i];

    }
    int missingNumber = sum - s2;
    return missingNumber;
}

//Time Complexity: O(N)
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}