
#include <bits/stdc++.h>
using namespace std;

//Algorithm

//Step one copy non zero element from original array
//AFter that take out sizze of the temp array of non zero element

vector<int> moveZeros(int n, vector<int> a) {
    vector<int> temp;


    for(int i=0;i<n;i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
            }
    }
    int nz = temp.size();

    for(int i =nz ;i<n;i++){
        a[i]=0;
    }
    return a;
}







int main(){
 vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}