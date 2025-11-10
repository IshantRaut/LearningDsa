#include<bits/stdc++.h>
using namespace std;


vector<int> majorityElement(vector<int> v){
    int cnt1 =0, cnt2=0;
    int ele1= INT_MIN;
    int ele2 = INT_MIN;

    for(int i =0;i<v.size();i++){
        if(cnt1 ==0  && ele2 != v[i]){
            cnt1 =1;
            ele1 = v[i];
        }
        else if(cnt2 ==0 && ele1 != v[i]){
            cnt2 =1;
            ele2 = v[i];
        }
        else if(v[i] == ele1){
            cnt1++;
        }
        else if(v[i] == ele2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    cnt1 =0;
    cnt2 =0;
    for(int i =0;i<v.size();i++){
        if(v[i] == ele1){
            cnt1++;
        }
        else if(v[i] == ele2){
            cnt2++;
        }
    }
    if(cnt1 > v.size()/3){
        ans.push_back(ele1);
    }
    if(cnt2 > v.size()/3){
        ans.push_back(ele2);
    }
    return ans;



}

int main(){
    vector<int> v = {3,2,3};
    vector<int> ans = majorityElement(v);
    for(auto ele: ans){
        cout<<ele<<" ";
    }
    return 0;
}