// This line includes the standard C++ library, providing access to a wide range of functions and data structures.
#include<bits/stdc++.h>

// This line allows you to use names for objects and variables from the standard library without the std:: prefix.
using namespace std;

// The main function, where program execution begins.
int main() {
  map < int, int > mp; // Declare a map named 'mp' that stores integer keys and integer values.
  // A map stores elements as key-value pairs, sorted by key.

  // This for loop iterates from 1 to 5.
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10}); // Insert key-value pairs into the map. The key is 'i' and the value is 'i * 10'.
  }

  cout << "Elements present in the map: " << endl; // Print a descriptive header.
  cout << "Key\tElement" << endl; // Print column headers.
  // Loop through the map to print its elements.
  for (auto it = mp.begin(); it != mp.end(); it++) {
    // 'it' is an iterator pointing to a map element.
    // 'it->first' accesses the key, and 'it->second' accesses the value.
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2; // Initialize an integer 'n' to 2 to check for its presence as a key.
  if (mp.find(2) != mp.end()) // Check if a key '2' exists in the map. find() returns an iterator to the element or mp.end() if not found.
    cout << n << " is present in map" << endl; // If the key is found, print a confirmation message.

  mp.erase(mp.begin()); // Erase the first element in the map. Since maps are sorted, this removes the element with the smallest key.
  cout << "Elements after deleting the first element: " << endl; // Print a descriptive header.
  cout << "Key\tElement" << endl; // Print column headers.
  // Loop through the map again to show its contents after deletion.
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl; // Print the remaining key-value pairs.
  }

  cout << "The size of the map is: " << mp.size() << endl; // Print the current number of elements in the map.

  if (mp.empty() == false) // Check if the map is not empty. empty() returns true if the map has no elements.
    cout << "The map is not empty " << endl; // If there are elements, print this message.
  else
    cout << "The map is empty" << endl; // If there are no elements, print this message.
  mp.clear(); // Remove all elements from the map.
  cout << "Size of the map after clearing all the elements: " << mp.size(); // Print the size of the map after clearing, which will be 0.
}