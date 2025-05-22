#include<iostream>
using namespace std;





int main(){
     int num;
    cout << "Enter The number: ";
    cin >> num;
 
    while(num >9){
         int rem,ans=0;
    while(num != 0){
        rem = num % 10;
        num /= 10;
        ans += rem;
    }
num = ans;
}
cout << num << endl;
}