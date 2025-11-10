# 🔍 Binary Search – Complete Pattern Guide

Binary Search is one of the most powerful algorithms in DSA.  
But it’s **not just one problem** — it appears in many forms and patterns.  
This guide summarizes all **Binary Search patterns** and classifies common problems under each one.

---

## 🧩 PATTERN 1: Basic Binary Search on Sorted Array

### 🔹 Concept:
The simplest form — search directly on a sorted array using `low`, `mid`, and `high`.

### ⚙️ Key Idea:
- Check if `mid` is the target.
- If `arr[mid] < target`, search the right half.
- Else, search the left half.

### 📘 Formula:
```cpp
while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    else if (arr[mid] < target) low = mid + 1;
    else high = mid - 1;
}
```

### 💡 Typical Use Cases:
- Searching for an element or position
- Finding bounds (lower/upper)
- Handling duplicates (first/last occurrence)

### 🧠 Problems:
- Binary Search to find X in sorted array  
- Implement Lower Bound  
- Implement Upper Bound  
- Search Insert Position  
- Floor / Ceil in Sorted Array  
- Find the first or last occurrence of a given number  
- Count occurrences of a number in sorted array (duplicates)  
- Kth Missing Positive Number  

---

## 🔁 PATTERN 2: Binary Search in Rotated or Modified Sorted Array

### 🔹 Concept:
When the array is **sorted but rotated**, or has a unique pattern (like mountain or single element),  
you adapt binary logic to handle the modified order.

### ⚙️ Key Idea:
- Identify which half (left/right) is sorted.
- Decide which half to search based on that.

### 💡 Typical Use Cases:
- Rotated arrays
- Peak/mountain elements
- Finding unique element in sorted pairs

### 🧠 Problems:
- Search in Rotated Sorted Array I  
- Search in Rotated Sorted Array II  
- Find Minimum in Rotated Sorted Array  
- Find how many times array has been rotated  
- Single Element in a Sorted Array  
- Find Peak Element  

---

## 📈 PATTERN 3: Binary Search on Answer (Search on Condition)

### 🔹 Concept:
Used when the **answer lies in a numeric range** (not index-based).  
We don’t directly search in an array — we binary search the **answer space**.

### ⚙️ Key Idea:
- Define `low` and `high` as the possible range of the answer.
- For a middle value `mid`, check if it satisfies a **condition**.
- If it works, try to minimize or maximize it depending on the problem.

### 💡 Typical Use Cases:
- Minimize/Maximize something under constraints
- “Find smallest/largest X that satisfies condition”
- Binary Search on time, capacity, speed, etc.

### 🧠 Problems:
- Find Square Root of a Number in O(log n)  
- Find Nth Root of a Number using Binary Search  
- Koko Eating Bananas  
- Minimum Days to Make M Bouquets  
- Find the Smallest Divisor  
- Capacity to Ship Packages Within D Days  
- Aggressive Cows  
- Book Allocation Problem  
- Split Array - Largest Sum  
- Painter’s Partition Problem  

---

## 🧮 PATTERN 4: Binary Search in 2D or Combined Sorted Arrays

### 🔹 Concept:
Binary search applied on **two sorted arrays or matrices** — either by merging logic or directly calculating the position.

### ⚙️ Key Idea:
- Treat the 2D array or two arrays as a single sorted space.
- Compute `mid` index and map it to row/column or array index.

### 💡 Typical Use Cases:
- Median or Kth element from two sorted arrays
- Search element in sorted matrix

### 🧠 Problems:
- Median of Two Sorted Arrays  
- Kth Element of Two Sorted Arrays  

---

## ⚙️ PATTERN 5: Binary Search on Real Numbers / Continuous Range

### 🔹 Concept:
When the answer isn’t an integer but a **real number (float/double)**.  
We use binary search until the required precision is achieved.

### ⚙️ Key Idea:
- Define precision `eps` (like 1e-6)
- Keep shrinking range while `high - low > eps`
- Check if mid satisfies the condition

### 💡 Typical Use Cases:
- Minimize or maximize distance/time with floating-point answers

### 🧠 Problems:
- Minimize Max Distance to Gas Station  

---

## 🧭 Summary Table

| # | Pattern | Concept | Example Problems |
|---|----------|----------|------------------|
| 1 | **Basic Binary Search** | Find target/position in sorted array | Search X, Lower/Upper Bound, Floor/Ceil |
| 2 | **Rotated / Modified Array** | Binary search with special structure | Rotated Array, Peak Element, Single Element |
| 3 | **Binary Search on Answer** | Search on condition/constraints | Koko, Book Allocation, Split Array |
| 4 | **2D / Combined Arrays** | Apply BS on multiple sorted arrays | Median of Two Arrays, Kth Element |
| 5 | **Real Number Search** | Apply BS on floating-point space | Minimize Gas Station Distance |

---

## 🧠 Tips to Identify Which Pattern to Use

| Problem Statement Mentions | Likely Pattern |
|-----------------------------|----------------|
| “Find index / position” | Basic Binary Search |
| “Array is rotated / mountain / unique element” | Rotated / Modified Array |
| “Minimize / Maximize something” | Binary Search on Answer |
| “Two sorted arrays or matrix” | Binary Search in 2D / Combined |
| “Precision / decimal output” | Binary Search on Real Numbers |

---

### 🏁 Final Notes
- Always identify if the **search space** is the array itself or the **answer range**.  
- Binary Search works whenever the problem can be phrased as:  
  **“If condition(mid) is True → answer lies on one side.”**  
- Combine with other patterns like **prefix sum**, **greedy**, or **two pointer** for advanced problems.

---

**🔥 Master Tip:**  
If a problem says:  
> “Find the minimum (or maximum) value such that a condition is satisfied”  
You’re looking at **Binary Search on Answer.**
