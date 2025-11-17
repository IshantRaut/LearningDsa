#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isomorphicString(string s, string t){
        //Arrays to store last seen position charatcers in s and t
        int m1[256]={0}, m2[256]={0};
        int n = s.size();

        for(int i=0;i<n;i++){
            if(m1[s[i]] != m2[t[i]]) return false;

            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;

    }
};


int main() {
      // Create object of Solution
      Solution solution;
      
      // Sample input strings
    //   string s = "paper";
    //   string t = "title";
      string s = "paper";
      string t = "tiEle";
      // Check if strings are isomorphic
      if (solution.isomorphicString(s, t)) {
          cout << "Strings are isomorphic." << endl;
      } else {
          cout << "Strings are not isomorphic." << endl;
      }
      
      return 0;
  }