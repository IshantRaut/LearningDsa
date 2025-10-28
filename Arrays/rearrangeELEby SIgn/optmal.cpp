#include<bits/stdc++.h>
using namespace std;

//Optimisign the space complexity to O(1)
vector<int> rearrangeArray(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n,0);
    int pos =0, neg =1;


    for(int i =0;i<n;i++){
        if(nums[i] < 0){
            ans[neg] = nums[i];
            neg +=2;
        }
        else{
            ans[pos] = nums[i];
            pos +=2;
        }
    } 
    return ans;
}


int main() {
    
  // Array Initialisation.
  vector<int> nums {-1,1,-2,2,-3,3};

  vector<int> ans = rearrangeArray(nums);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}