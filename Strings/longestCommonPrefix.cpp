#include <bits/stdc++.h>
using namespace std;


class  Solution {
    public:
    string longestCommonPrefix(vector<string>& str){
        //Handle the edge case 
        if(str.empty()) return " ";

        //Sort the strings lexicographically
        sort(str.begin(),str.end());

        //first string in sorted order
        string first = str[0];

        //last string in sorted order
        string last = str[str.size()-1];

        //TO  store the common prefix
        string ans = "";
int minLength = min(first.size(),last.size());
        //Compare the length of shorter to string  so th`at we can apply the for loop untill  min Length
        for(int i =0;i < minLength; i++){
            //step if characters differ
            if(first[i] != last[i]) break;

            ans += first[i];
        }
        return ans;
    }
};

int main() {
    // Create instance of Solution
    Solution solution;

    // Input list of strings
    vector<string> input = {"interview", "internet", "internal", "interval"};

    // Get the result
    string result = solution.longestCommonPrefix(input);

    // Print the result
    cout << "Longest Common Prefix: " << result << endl; 

    return 0;
}