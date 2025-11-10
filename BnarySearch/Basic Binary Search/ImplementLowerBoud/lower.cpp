#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int lowerBound(vector<int> &arr,int target){
    int low =0, high = arr.size()-1;
    int ans = -1;

    while(low <= high){
        int mid =low + (high - low)/2;

        if(arr[mid] >=target){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid +1;
        
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {1,2,2,3};
    int target = 2;

    int index = lowerBound(arr,target);

    if(index != -1){
        cout<<"Lower Bound of "<<target<<" is at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}