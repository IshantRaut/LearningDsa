#include<bits/stdc++.h>
using namespace std;

int main(){
    //Declare an Unorderd_set of integers
    unordered_set<int> s;

    //Inser Elements from 1 to 5
    for(int i=1;i<= 10;i++){
        s.insert(i);
    }

    cout << "Size of the unordered_set is: " << s.size() << endl;

    for(auto it: s){
        cout << it << " ";
    }
    cout << endl;

    int n =2;
    //Check if element 2 exist
    if (s.find(2) != s.end())
    {
        /* code */
        cout<< n<< " is  present in the unordered_set"<< endl;
    }
    
    s.erase(s.begin()); //Erase element at begining
    cout << "Size of the unordered_set after erasing element at begining is: " << s.size() << endl;

    //Check if unordered set is empty
     // Check if the unordered set is empty
    if (s.empty() == false) // empty() returns true if set has no elements
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    // Clear all elements from the unordered set
    s.clear(); // clear() removes all elements

    // Display size after clearing
    cout << "Size of the unordered set after clearing all the elements: " << s.size();
}