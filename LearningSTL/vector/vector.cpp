// This line includes the standard C++ library, providing access to a wide range of functions and data structures.
#include<bits/stdc++.h>

// This line allows you to use names for objects and variables from the standard library without the std:: prefix.
using namespace std;

// The main function, where program execution begins.
int main() {
  // Declare a vector named 'v' that can store integers. A vector is a dynamic array.
  vector < int > v;

  // This for loop iterates from 0 to 9.
  for (int i = 0; i < 10; i++) {
    v.push_back(i); // Add the current value of 'i' to the end of the vector.
  }

  cout << "the elements in the vector: "; // Print a descriptive message.
  // Loop through the vector using iterators to print its elements.
  // v.begin() points to the first element, and v.end() points after the last element.
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " "; // Dereference the iterator 'it' to get the element's value.

  cout << "\nThe front element of the vector: " << v.front();  // Print the first element using the front() method.
  cout << "\nThe last element of the vector: " << v.back(); // Print the last element using the back() method.
  cout << "\nThe size of the vector: " << v.size();  // Print the number of elements in the vector using the size() method.
  cout << "\nDeleting element from the end: " << v[v.size() - 1];  // Display the last element before removing it.
  v.pop_back(); // Remove the last element from the vector.

  cout << "\nPrinting the vector after removing the last element:" << endl; // Print a descriptive message.
  // Loop through the vector using an index to print its elements.
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " "; // Access elements using the subscript operator [].

  cout << "\nInserting 5 at the beginning:" << endl; // Print a descriptive message.
  v.insert(v.begin(), 5); // Insert the number 5 at the position pointed to by v.begin() (the start of the vector).
  cout << "The first element is: " << v[0] << endl; // Print the new first element.
  cout << "Erasing the first element" << endl; // Print a descriptive message.
  v.erase(v.begin());  // Remove the element at the beginning of the vector.
  cout << "Now the first element is: " << v[0] << endl; // Print the element that is now at the front.

  // Check if the vector is empty using the empty() method.
  if (v.empty())
    cout << "\nvector is empty";  // This will be printed if the vector has no elements.
  else
    cout << "\nvector is not empty" << endl;  // This will be printed if the vector contains one or more elements.

  v.clear(); // Remove all elements from the vector, making its size 0.
  cout << "Size of the vector after clearing the vector: " << v.size();  // Print the size of the vector, which will now be 0.

}