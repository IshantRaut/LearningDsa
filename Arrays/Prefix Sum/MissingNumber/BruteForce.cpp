#include<iostream>
#include<vector>
using namespace std;


int missingNumber(vector<int>&a, int N){
    for(int i =1;i<=N;i++){
        int flag =0;

        for(int j =0;j< N-1;j++){
            if(a[j] == i){
                flag =1;
                break;
            }
        }
        if(flag ==0){
        return i;
    }
    }
    
}

//Time Complexity: O(N2),

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}