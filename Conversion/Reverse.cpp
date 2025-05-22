#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the number";
    cin >> x;

    int ans =0,rem;
    while(x != 0){
        rem = x % 10;
        
        x /= 10;
        
        ans = ans * 10 +rem;
    }
    cout b<< " remainder"<< rem << endl;
    cout << "x"<< x << endl;
    cout << ans << endl;
}