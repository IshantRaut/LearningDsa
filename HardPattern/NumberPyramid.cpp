#include<iostream>
using namespace std;

int main(){
    int row, col;
int n;
cout<<"Enter the Input";
cin >> n;
    for(row =1;row<=n;row=row+1){
        for(col=1;col<=n-row;col=col+1){
            cout << " ";
        }
        for(col=1;col<=row;col=col+1){
            cout <<col<<" ";
        }
        for(col =row-1;col>=1;col=col-1){
            cout<<col<<" ";
        }
        cout << endl;
    }
}