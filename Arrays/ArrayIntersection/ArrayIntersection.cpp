#include<iostream>
#include<vector> // Added this line
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, vector<int> &arr2){
    // Optimal Two-Pointer Approach
    // Time Complexity: O(arr1.size() + arr2.size())
    // Space Complexity: O(1) (excluding space for the answer)
    int i = 0;
    int j = 0;
    vector<int> ans;
    
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else { // arr1[i] == arr2[j]
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr1 = {
        1,2,3,4,5
    };
    vector<int> arr2 = {
        2,3,5,7,11
    };
    vector<int> res = findArrayIntersection(arr1, arr2);
    for(int val : res){
        cout << val << " ";
    }
    return 0;
}