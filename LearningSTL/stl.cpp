#include<bits/stdc++.h>
using namespace std;

// Pairs are a part of the utility library.
// They allow you to store two heterogeneous objects as a single unit.
void explainPair(){
    cout << "--- Explaining Pair ---" << endl;
    // Basic pair
    pair<int, int> p = {1, 3};
    // Accessing elements using .first and .second
    cout << "p.first: " << p.first << ", p.second: " << p.second << endl; // Output: p.first: 1, p.second: 3

    // Nested pair
    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    // Accessing nested elements
    cout << "p1.first: " << p1.first << endl; // Output: p1.first: 1
    cout << "p1.second.first: " << p1.second.first << endl; // Output: p1.second.first: 3
    cout << "p1.second.second: " << p1.second.second << endl; // Output: p1.second.second: 4

    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    // Accessing an element from the array of pairs
    cout << "arr[1].second: " << arr[1].second << endl; // Output: arr[1].second: 5
    cout << endl;
}


//Vectors
// Vectors are dynamic arrays that can grow and shrink in size.
void explainVector(){
    cout << "--- Explaining Vector ---" << endl;
    vector<int> v;
    v.push_back(1);    // Adds 1 to the end of the vector.
    v.emplace_back(2); // Same as push_back but often faster as it constructs the element in-place.
    cout << "Vector v after push_back and emplace_back: ";
    for(auto it : v) { cout << it << " "; } // Output: 1 2
    cout << endl;

    vector<pair<int, int>> vec_pair;
    vec_pair.push_back({1, 2});
    vec_pair.emplace_back(3, 4); // For emplace_back with pairs, pass elements as separate arguments.

    // Vector initialization
    vector<int> v_five_100s(5, 100); // Creates a vector of size 5 with all elements as 100. {100, 100, 100, 100, 100}
    vector<int> v_five_zeros(5);     // Creates a vector of size 5, initialized with 0s. {0, 0, 0, 0, 0}
    vector<int> v_copy(v_five_100s); // Copies the content of v_five_100s into v_copy.

    // Iterators
    // An iterator points to the memory address of an element in the container.
    vector<int> v_iter = {10, 20, 30, 40, 50};
    vector<int>::iterator it = v.begin();
    it++;
    cout << "Second element: " << *(it) << endl; // Output: 20

    it = it + 2;
    cout << "Fourth element: " << *(it) << endl; // Output: 40

    // v.end() points to the memory location *after* the last element.
    // v.rend() is the reverse end.
    // v.rbegin() is the reverse begin, points to the last element.

    cout << "Accessing elements: v_iter[0]=" << v_iter[0] << ", v_iter.at(0)=" << v_iter.at(0) << endl;
    cout << "Last element v_iter.back(): " << v_iter.back() << endl; // Output: 50

    // Different ways to loop through a vector
    cout << "Looping through vector: ";
    for (auto it_loop = v_iter.begin(); it_loop != v_iter.end(); it_loop++) {
        cout << *(it_loop) << " ";
    }
    cout << endl;

    cout << "Looping with auto: ";
    for (auto it_auto : v_iter) {
        cout << it_auto << " ";
    }
    cout << endl;

    // Deletion
    vector<int> v_erase = {10, 20, 30, 40, 50};
    v_erase.erase(v_erase.begin() + 1); // Erases the element at index 1. v_erase is now {10, 30, 40, 50}
    cout << "After erasing one element: ";
    for(auto i : v_erase) cout << i << " "; // Output: 10 30 40 50
    cout << endl;

    v_erase.erase(v_erase.begin() + 1, v_erase.begin() + 3); // Erases elements from index 1 up to (but not including) index 3. v_erase is now {10, 50}
    cout << "After erasing a range: ";
    for(auto i : v_erase) cout << i << " "; // Output: 10 50
    cout << endl;

    // Insertion
    vector<int> v_insert(2, 100); // {100, 100}
    v_insert.insert(v_insert.begin(), 300); // {300, 100, 100}
    v_insert.insert(v_insert.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy_vec(2, 50); // {50, 50}
    v_insert.insert(v_insert.begin(), copy_vec.begin(), copy_vec.end()); // {50, 50, 300, 10, 10, 100, 100}
    cout << "After insertions: ";
    for(auto i : v_insert) cout << i << " ";
    cout << endl;

    cout << "Size of v_insert: " << v_insert.size() << endl; // Output: 7

    v_insert.pop_back(); // Removes the last element.

    // Swapping vectors
    vector<int> v1 = {1, 2};
    vector<int> v2 = {3, 4};
    v1.swap(v2); // v1 becomes {3, 4}, v2 becomes {1, 2}

    v_insert.clear(); // Erases all elements from the vector.
    cout << "Is v_insert empty? " << (v_insert.empty() ? "Yes" : "No") << endl; // Output: Yes
    cout << endl;
}

// Lists are similar to vectors but provide fast insertion and deletion of elements
// at any point in the list. Unlike vectors, they are not stored in contiguous memory.
// Direct access with [] is not possible.
void explainList(){
    cout << "--- Explaining List ---" << endl;
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(7);   // {7, 2, 4} - adds to the front
    ls.emplace_front(1); // {1, 7, 2, 4}
    cout << "List ls: ";
    for(auto i : ls) cout << i << " "; // Output: 1 7 2 4
    cout << endl << endl;
}

// Deque (Double-ended queue) is similar to a vector but allows for efficient
// insertion and deletion at both the beginning and the end.
void explainDeque(){
    cout << "--- Explaining Deque ---" << endl;
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back();  // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    cout << "Deque dq: ";
    for(auto i : dq) cout << i << " "; // Output: 4 1
    cout << endl << endl;
}

// Stack follows the LIFO (Last-In, First-Out) principle.
// You can only access the top element.
void explainStack(){
    cout << "--- Explaining Stack ---" << endl;
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5); // Pushes 5 onto the stack. Stack: {1, 2, 3, 5}

    cout << "Top of stack: " << st.top() << endl; // Output: 5
    st.pop(); // Removes the top element. Stack: {1, 2, 3}
    cout << "Top after pop: " << st.top() << endl; // Output: 3
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl; // Output: No
    cout << "Size of stack: " << st.size() << endl; // Output: 3

    stack<int> st1, st2;
    st1.swap(st2); // Swaps the contents of two stacks.
    cout << endl;
}

// Queue follows the FIFO (First-In, First-Out) principle.
void explainQueue(){
    cout << "--- Explaining Queue ---" << endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4); // Queue: {1, 2, 3, 4}

    q.back() += 5; // The last element (4) becomes 9. Queue: {1, 2, 3, 9}
    cout << "Back of queue: " << q.back() << endl; // Output: 9

    cout << "Front of queue: " << q.front() << endl; // Output: 1
    q.pop(); // Removes the front element. Queue: {2, 3, 9}
    cout << "Front after pop: " << q.front() << endl; // Output: 2
    cout << endl;
}

// Priority Queue stores elements in a specific order. By default, it's a max-heap,
// meaning the largest element is always at the top.
void explainPQ(){
    cout << "--- Explaining Priority Queue ---" << endl;
    // Max heap by default
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10); // PQ: {10, 8, 5, 2}

    cout << "Top of max-heap PQ: " << pq.top() << endl; // Output: 10
    pq.pop();
    cout << "Top after pop: " << pq.top() << endl; // Output: 8

    // Min heap - stores the smallest element at the top.
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);
    min_pq.push(2);
    min_pq.push(8);
    min_pq.emplace(1); // min_pq: {1, 2, 5, 8}

    cout << "Top of min-heap PQ: " << min_pq.top() << endl; // Output: 1
    min_pq.pop();
    cout << "Top after pop: " << min_pq.top() << endl; // Output: 2
    cout << endl;
}

// Set stores unique elements in sorted order.
void explainSet(){
    cout << "--- Explaining Set ---" << endl;
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2} - does not insert 2 again as it's unique
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    cout << "Set st: ";
    for(auto i : st) cout << i << " "; // Output: 1 2 3 4
    cout << endl;

    // find(element) returns an iterator to the element, or st.end() if not found.
    auto it_find = st.find(3);
    cout << "Found element: " << *it_find << endl; // Output: 3

    // erase(element) or erase(iterator)
    st.erase(4); // Erases 4. Set: {1, 2, 3}
    auto it_erase = st.find(2);
    st.erase(it_erase); // Erases 2. Set: {1, 3}

    cout << "Set after erasing: ";
    for(auto i : st) cout << i << " "; // Output: 1 3
    cout << endl;

    int cnt = st.count(1); // Returns 1 if element is present, 0 otherwise.
    cout << "Count of 1: " << cnt << endl; // Output: 1

    // lower_bound and upper_bound
    st.insert(2); st.insert(4); // Set: {1, 2, 3, 4}
    auto it_lb = st.lower_bound(2); // Iterator to 2 (or first element >= 2)
    auto it_ub = st.upper_bound(3); // Iterator to 4 (first element > 3)
    cout << "Lower bound of 2: " << *it_lb << endl; // Output: 2
    cout << "Upper bound of 3: " << *it_ub << endl; // Output: 4
    cout << endl;
}

// Multiset is similar to set but allows duplicate elements.
// Elements are stored in sorted order.
void explainMultiSet(){
    cout << "--- Explaining MultiSet ---" << endl;
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(2); // {1, 1, 1, 2}
    ms.insert(3); // {1, 1, 1, 2, 3}

    cout << "MultiSet ms: ";
    for(auto i : ms) cout << i << " "; // Output: 1 1 1 2 3
    cout << endl;

    // erase(value) erases all occurrences of that value.
    ms.erase(1);
    cout << "After erasing all 1s: ";
    for(auto i : ms) cout << i << " "; // Output: 2 3
    cout << endl;

    ms.insert(1); // {1, 2, 3}
    ms.insert(1); // {1, 1, 2, 3}
    // To erase only one occurrence, you need to pass an iterator to erase().
    ms.erase(ms.find(1)); // erases a single 1
    cout << "After erasing a single 1: ";
    for(auto i : ms) cout << i << " "; // Output: 1 2 3
    cout << endl;

    cout << "Count of 1: " // Returns the number of occurrences.
         << ms.count(1) << endl; // Output: 1
    cout << endl;
}

// Unordered Set stores unique elements in no particular order.
// It uses hashing internally. Average time complexity for most operations is O(1),
// which is generally faster than set's O(log n).
void explainUnorderedSet(){
    cout << "--- Explaining Unordered Set ---" << endl;
    unordered_set<int> us;
    us.insert(2);
    us.insert(1);
    us.insert(4);
    us.insert(1); // Does not insert again, as elements are unique
    us.insert(3);

    cout << "Unordered Set us: ";
    // The order of elements is not guaranteed.
    for(auto i : us) cout << i << " "; // Example Output: 3 4 1 2
    cout << endl;

    // All other operations like find, erase, count, size are similar to set.
    if (us.find(2) != us.end()) {
        cout << "Found 2 in the unordered_set." << endl;
    } else {
        cout << "Did not find 2." << endl;
    }
    cout << endl;
}

// Map stores key-value pairs, where keys are unique and sorted.
void explainMap(){
    cout << "--- Explaining Map ---" << endl;
    map<int, int> mpp;
    mpp[1] = 2; // Key 1, Value 2
    mpp.emplace(3, 1); // Key 3, Value 1
    mpp.insert({2, 4}); // Key 2, Value 4

    cout << "Map mpp contents:" << endl;
    for (auto it : mpp) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }
    // Output (sorted by key):
    // Key: 1, Value: 2
    // Key: 2, Value: 4
    // Key: 3, Value: 1

    cout << "Value for key 1: " << mpp[1] << endl; // Output: 2
    // If a key doesn't exist, accessing it with [] creates it with a default value (0 for int).
    cout << "Value for key 5 (doesn't exist): " << mpp[5] << endl; // Output: 0

    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Found key 3 with value: " << it->second << endl; // Output: 1
    }
    cout << endl;
}

// Multimap is similar to map but allows duplicate keys.
// Elements are stored sorted by key.
void explainMultiMap(){
    cout << "--- Explaining MultiMap ---" << endl;
    multimap<int, int> mmp;
    mmp.insert({1, 2}); // Key 1, Value 2
    mmp.insert({1, 3}); // Key 1, Value 3 (duplicate key allowed)
    mmp.insert({2, 4}); // Key 2, Value 4

    cout << "MultiMap mmp contents:" << endl;
    for (auto it : mmp) {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }
    // Output (sorted by key):
    // Key: 1, Value: 2
    // Key: 1, Value: 3
    // Key: 2, Value: 4

    // You cannot use mmp[key] for access or insertion because keys are not unique.
    // To find all values for a key, you can use .equal_range or a loop with .find.
    cout << "Values for key 1: ";
    auto range = mmp.equal_range(1);
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " "; // Output: 2 3
    }
    cout << endl << endl;
}

int main(){
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();

    return 0;
}