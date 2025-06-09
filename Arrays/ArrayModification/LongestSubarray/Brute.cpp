#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int len = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i; j < n; j++)
        {
            /* code */
            long long s = 0;
            for (int k = i; k <= j; k++)
            {
                /* code */
                s+= a[k];
            }

            if (s == k)
            {
                /* code */
               len = max(len, j - i + 1);
            }
            
            
        }
        
    }
    return len;
    
}




int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}