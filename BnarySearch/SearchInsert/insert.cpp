#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchInsert(vector<int>& arr, int x){
    int n = arr.size();
    int s =0, e= n-1;
    int ans=-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid] >=x){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {1, 2, 4, 7};
    int x = 6;
    int ind = searchInsert(arr, x);
    cout << "The index is: " << ind << "\n";
    return 0;
}