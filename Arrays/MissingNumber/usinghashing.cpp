
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a,int N){
    int hash[N+1] = {0};

    for(int i =0;i< N-1;i++){
        hash[a[i]]++;

    }

    for(int i =1;i<=N;i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}

//Time Complexity: O(N) + O(N) ~ O(2*N),

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}