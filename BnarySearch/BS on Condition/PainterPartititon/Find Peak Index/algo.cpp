 #include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
    public:
    int peakIndex(vector<int>& arr){
        int s =0;
        int e = arr.size()-1;
        int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid] < arr[mid+1]){
                s = mid+1;
            
            }else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};

int main(){
    Solution obj;
    vector<int> arr = {0,2,1,0};
    cout<<"Peak Index is: "<<obj.peakIndex(arr)<<endl;
    return 0;
}