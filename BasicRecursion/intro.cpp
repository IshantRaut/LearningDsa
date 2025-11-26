// This line includes the iostream library, which is necessary for input and output operations, like printing to the console.
#include <iostream>

// This line allows you to use names for objects and variables from the standard library without the std:: prefix.
using namespace std;

/*
 * == Understanding Basic Recursion with Factorial ==
 *
 * Recursion is a process where a function calls itself directly or indirectly.
 * To be effective, a recursive function must have two main parts:
 *
 * 1. Base Case: A condition that stops the recursion. If this is missing,
 *    the function will call itself forever, causing a "stack overflow".
 *
 * 2. Recursive Step: The function calls itself with a modified argument,
 *    moving closer to the base case. It breaks the problem into smaller,
 *    identical subproblems.
 */

// This is a recursive function to calculate the factorial of a non-negative integer 'n'.
// The factorial of n (written as n!) is the product of all positive integers up to n.
// For example, 5! = 5 * 4 * 3 * 2 * 1 = 120.
int factorial(int n) {
    // Base Case: The factorial of 0 or 1 is defined as 1.
    // This condition prevents the function from calling itself infinitely.
    if (n <= 1) {
        return 1; // When n is 1 or 0, we stop and return 1.
    }
    // Recursive Step: If n is greater than 1, the function calls itself with the value (n - 1).
    // It calculates n * factorial(n - 1).
    // How it works for factorial(4):
    // 4 * factorial(3)
    // 4 * (3 * factorial(2))
    // 4 * (3 * (2 * factorial(1)))
    // 4 * (3 * (2 * 1)) -> The base case is hit, and the values are returned up the call stack.
    // 4 * (3 * 2)
    // 4 * 6
    // 24
    return n * factorial(n - 1);
}

// The main function, where program execution begins.
int main() {
    int number = 5; // Define the number for which we want to calculate the factorial.

    // Call the recursive factorial function and store the result.
    int result = factorial(number);

    // Print the final result to the console.
    cout << "The factorial of " << number << " is: " << result << endl;

    return 0; // Indicate that the program finished successfully.
}