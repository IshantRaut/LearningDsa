# 🧠 Array Patterns – Complete DSA Guide

Arrays form the foundation of problem-solving in DSA.  
Most problems follow one of a few **common patterns**, and mastering these patterns helps you solve any array question efficiently.

This guide summarizes all **Array Patterns**, their logic, and which problems belong to each.

---

## 🔹 PATTERN 1: Basic Traversal / Simple Logic

### 🧩 Concept:
Involves simple iteration or direct comparisons — no extra data structures or multiple pointers.

### ⚙️ Key Idea:
- Traverse array once or twice.
- Use basic logic to compute results.

### 💡 Use Cases:
- Finding min/max
- Checking sorted order
- Counting occurrences
- Simple transformations

### 🧠 Problems:
- Largest Element in an Array  
- Second Largest Element in an Array (without sorting)  
- Check if the Array is Sorted  
- Linear Search  
- Find Missing Number in Array  
- Maximum Consecutive Ones  

---

## 🔹 PATTERN 2: Two Pointers / Sliding Window

### 🧩 Concept:
Used when working with **pairs, ranges, or subarrays** efficiently without using nested loops.

### ⚙️ Key Idea:
- Maintain two indices (start, end).
- Expand or shrink window based on a condition.

### 💡 Use Cases:
- Moving zeros
- Finding subarrays with specific sums
- Rearranging positive/negative numbers

### 🧠 Problems:
- Move Zeros to End  
- 2 Sum Problem  
- Longest Subarray with Sum K (Positive Numbers)  
- Longest Subarray with Sum K (Positive + Negative)  
- Rearrange Array in Alternating Positive & Negative Items  
- Count Subarrays with Given Sum  

---

## 🔹 PATTERN 3: Prefix Sum / Counting / Hashing

### 🧩 Concept:
Used when you need to find cumulative results or subarrays efficiently using extra space like maps or arrays.

### ⚙️ Key Idea:
- Store prefix sum or frequency count.
- Use hash map to get O(1) lookup for subarray properties.

### 💡 Use Cases:
- Finding subarray sums or XORs
- Frequency-based problems
- Counting occurrences

### 🧠 Problems:
- Largest Subarray with Sum 0  
- Count Subarrays with Given XOR K  
- Find Missing Number in an Array (Sum/XOR method)  
- Find the Number that Appears Once, Others Twice  
- Find Repeating and Missing Number  

---

## 🔹 PATTERN 4: Kadane’s Algorithm (Maximum Subarray Sum)

### 🧩 Concept:
Used to find the **maximum sum of a contiguous subarray** efficiently.

### ⚙️ Key Idea:
Keep adding elements to current sum.  
If it becomes negative, reset to 0.

### 💡 Use Cases:
- Maximum/Minimum subarray problems
- Variations of stock buy/sell or profit problems

### 🧠 Problems:
- Kadane’s Algorithm (Maximum Subarray Sum)  
- Print Subarray with Maximum Subarray Sum  
- Stock Buy and Sell  
- Maximum Product Subarray  

---

## 🔹 PATTERN 5: Sorting / Rearrangement / Swap

### 🧩 Concept:
Problems where rearranging elements or maintaining order is required.

### ⚙️ Key Idea:
- Sort or partition the array
- Use swap and rearrangement logic

### 💡 Use Cases:
- Dutch National Flag problems (0s,1s,2s)
- Rotations and rearrangements
- Next permutation logic

### 🧠 Problems:
- Sort an Array of 0s, 1s, and 2s  
- Left Rotate an Array by One Place  
- Left Rotate an Array by D Places  
- Next Permutation  
- Leaders in an Array  
- Majority Element (> n/2 times)  
- Majority Element (> n/3 times)  
- Find the Union of Two Arrays  
- Array Intersection  
- Reverse Pairs  
- Count Inversions  

---

## 🔹 PATTERN 6: Matrix / 2D Array Pattern

### 🧩 Concept:
Used when dealing with multi-dimensional arrays (matrices).

### ⚙️ Key Idea:
- Use nested loops or layer-based logic.
- Apply rotation, spiral traversal, or set matrix zeros.

### 💡 Use Cases:
- Traversing, rotating, or manipulating 2D matrices

### 🧠 Problems:
- Rotate Matrix by 90 Degrees  
- Set Matrix Zeros  
- Print Matrix in Spiral Manner  

---

## 🔹 PATTERN 7: Mathematical / Combinatorial Logic

### 🧩 Concept:
Used for problems involving mathematical reasoning or combinatorial structures.

### ⚙️ Key Idea:
- Derive relationships from math or patterns (like Pascal’s Triangle).
- Use combination formulas or logic.

### 💡 Use Cases:
- Generating combinations, sequences, or triangle-based arrays.

### 🧠 Problems:
- Pascal’s Triangle  
- Find Unique Element (Mathematical XOR logic)  

---

## 🔹 PATTERN 8: Merging / Intervals / Advanced Sorting

### 🧩 Concept:
Used when you need to **combine overlapping data** or merge multiple sorted arrays efficiently.

### ⚙️ Key Idea:
- Sort intervals or arrays.
- Merge overlapping ranges or arrays.

### 💡 Use Cases:
- Interval merging, overlapping, merging sorted arrays.

### 🧠 Problems:
- Merge Overlapping Intervals  
- Merge Two Sorted Arrays without Extra Space  
- Count Inversions (using merge sort)  
- Reverse Pairs (using modified merge sort)  

---

## 🧭 Summary Table

| # | Pattern | Concept | Example Problems |
|---|----------|----------|------------------|
| 1 | **Basic Traversal** | Simple iteration or logic | Largest Element, Check Sorted, Linear Search |
| 2 | **Two Pointers / Sliding Window** | Work with pairs or subarrays | Move Zeros, 2 Sum, Longest Subarray K |
| 3 | **Prefix Sum / Hashing** | Subarray sums and counts | Sum K, XOR K, Appears Once |
| 4 | **Kadane’s Algorithm** | Max subarray sum problems | Kadane, Stock Buy/Sell |
| 5 | **Sorting / Rearrangement** | Rearrange or rotate arrays | Sort 0s1s2s, Rotate, Next Permutation |
| 6 | **Matrix Pattern** | 2D Array problems | Rotate, Spiral Print, Set Zeros |
| 7 | **Mathematical / Combinatorial** | Use math pattern logic | Pascal’s Triangle, XOR Unique |
| 8 | **Merging / Intervals** | Merge or combine sorted data | Merge Intervals, Count Inversions |

---

## 🧠 How to Identify the Pattern

| Problem Mentions | Likely Pattern |
|------------------|----------------|
| “Find largest/smallest/exists” | Basic Traversal |
| “Two indexes, pair, window, subarray” | Two Pointers / Sliding Window |
| “Sum, prefix, XOR, frequency” | Prefix Sum / Hashing |
| “Maximum subarray / profit” | Kadane’s Algorithm |
| “Rotate / rearrange / sort” | Sorting / Rearrangement |
| “Matrix / row / column” | Matrix Pattern |
| “Triangle / combination” | Mathematical / Combinatorial |
| “Merge / intervals / inversions” | Merging / Intervals |

---

### 🏁 Final Notes
- Try to **recognize the pattern** before coding — it saves time and guides your approach.
- Many problems combine two patterns (e.g., Sliding Window + Hashing).
- Understanding these patterns gives a roadmap for 80% of array questions in interviews.

---

**🔥 Master Tip:**  
If a problem says:  
> “Find subarray / pair / range with condition” → Think **Sliding Window or Two Pointers**  
> “Find count or frequency with condition” → Think **Prefix Sum or Hash Map**
