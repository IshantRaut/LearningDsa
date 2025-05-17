#include<iostream>
using namespace std;

//Firsy approach using row + row

int main(){
    int row, col;

    for(row =1;row<=5;row=row+1){
        char name ='a' + row -1;
        for(col=1;col<=5-row;col=col+1){
            cout << " ";
        }
        for(col =1 ; col <= row+row-1; col= col+1){
            cout<< "*";
        }
        cout << endl;
    }
}

//Second appraoch using formula

// int main(){
//     int col ,row;
//     int n;
//     cout <<"Enter the input";
//     cin >> n;
//     for(row =1;row<=n;row=row+1){
//         for(col=1;col<=n-row;col=col+1){
//             cout << " ";
//         }
//         for(col =1;col<=2*row-1;col =col+1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }