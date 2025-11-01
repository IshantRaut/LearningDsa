#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals){

    if (intervals.empty()) {
        return {};
    }

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;

    ans.push_back(intervals[0]);

    for(size_t i = 1; i < intervals.size(); i++){
        // Compare current interval with the last one in the result
        // intervals[i][0] is the start of the current interval
        // ans.back()[1] is the end of the last interval in ans
        if (intervals[i][0] <= ans.back()[1]) {
            // Overlap detected, merge them
            // Update the end of the last interval in ans
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        } else {
            // No overlap, add the current interval to the result
            ans.push_back(intervals[i]);
        }
    }
    return ans;

}

int main() {
    
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    vector<vector<int>> result = merge(intervals);

    for (auto interval : result) {
        cout << "[" << interval[0] << "," << interval[1] << "] ";
    }
    cout << endl;
    return 0;
}