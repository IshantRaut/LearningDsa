#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    long long ans =1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col=1;col<row;col++){
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTraingle(int N){
vector<vector<int>> ans;
for(int i =1;i<=N;i++){
    ans.push_back(generateRow(i));
}
return ans;
}

int main(){
    int N=5;
 
    vector<vector<int>> ans = pascalTraingle(N);
    for(auto row: ans){
        for(auto ele: row){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}/*
int main(){
    int N = 5; // Example: N = 5
    vector<vector<int>> ans = pascalTraingle(N);
    for(auto row: ans){
        for(auto ele: row){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
