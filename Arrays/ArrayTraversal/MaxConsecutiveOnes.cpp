//ALgorithm 

//We will be having the two variables cnt and maxi 

//Cnt will keep track of the consecutive ones in the array

//Maxi wills stored the max count of consecutive ones

// We start traversing from the beginning of the array. Since we can encounter either a 1 or 0 there can be two situations:-

// If  the value at the current index is equal to 1 we increase the value of count by one. After updating  the count variable if it becomes more than the max_count  update the max_count.

// If the value at the current index is equal to zero we make the variable count as 0 since there are no more consecutive ones.

#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    int findMaxConsecutiveOnes(vector < int > & nums){
        int cnt =0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            if (nums[i] == 1)
            {
                /* code */
                cnt++;
            }else{
                cnt=0;
            }

            maxi = max(maxi, cnt);
            
        }
        return maxi;
    }
    

};



int main() {
  vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  Solution obj;
  int ans = obj.findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}

// Time Complexity: O(N) since the solution involves only a single pass.

// Space Complexity: O(1) because no extra space is used.