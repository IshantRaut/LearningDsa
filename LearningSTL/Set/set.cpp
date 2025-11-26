// This line includes the standard C++ library, providing access to a wide range of functions and data structures.
#include<bits/stdc++.h>

// This line allows you to use names for objects and variables from the standard library without the std:: prefix.
using namespace std;

// The main function, where program execution begins.
int main() {
  set < int > s; // Declare a set named 's' that stores unique integers in sorted order.
  // This for loop iterates from 1 to 10.
  for (int i = 1; i <= 10; i++) {
    s.insert(i); // Insert the value of 'i' into the set. The set will automatically handle duplicates and keep the elements sorted.
  }

  cout << "Elements present in the set: "; // Print a descriptive message.
  // Loop through the set to print its elements.
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";  // 'it' is an iterator; '*it' dereferences it to get the element's value.
  }
  cout << endl; // Print a newline for better formatting.

  int n = 2; // Initialize an integer 'n' to 2 to check for its presence.
  // Check if the element '2' exists in the set. find() returns an iterator to the element or s.end() if not found.
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;  // If found, print a confirmation message.

  s.erase(s.begin()); // Erase the first element in the set. Since sets are sorted, this removes the smallest element.
  cout << "Elements after deleting the first element: "; // Print a descriptive message.
  // Loop through the set again to show its contents after deletion.
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " "; // Print the remaining elements.
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;  // Print the current number of elements in the set.

  if (s.empty() == false) // Check if the set is not empty. empty() returns true if the set has no elements.
    cout << "The set is not empty " << endl;  // If there are elements, print this message.
  else
    cout << "The set is empty" << endl;  // If there are no elements, print this message.
  s.clear(); // Remove all elements from the set.
  cout << "Size of the set after clearing all the elements: " << s.size(); // Print the size after clearing, which will be 0.
}
    