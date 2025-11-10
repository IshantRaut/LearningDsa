#include<bits/stdc++.h>
using namespace std;


vector<int> alternateNumber(vector<int>&a){
int n = a.size();
   vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++)
    {
        /* code */

        if (a[i] >= 0)
        {
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
       
        
    }

    if(pos.size() > neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i] = pos[i];
            a[2*i + 1] = neg[i];
        }
        int index= neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[2*i] = pos[i];
            a[2*i + 1] = neg[i];
        }
        int index= pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index] = neg[i];
            index++;
        }
    }
    // for (int i = 0; i < pos.size(); i++)
    // {
    //     /* code */
    //     a[2*i] = pos[i];
        
    // }
    // for (int i = 0; i < neg.size(); i++)
    // {
    //     /* code */
    //     a[2*i + 1] = neg[i];
    // }
    
    return a;



}


//TL -->  o(N) + o(m{pos,neg}) + o(m{pos,neg})
//TL --> o(2N) 
int main() {
    
  // Array Initialisation.
  vector<int> nums {1,2,-4,-5,3,6,-2,-8,1,1};

  vector<int> ans = alternateNumber(nums);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}