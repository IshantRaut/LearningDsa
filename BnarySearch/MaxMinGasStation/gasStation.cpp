#include <bits/stdc++.h>
using namespace std;

// Problem: Minimize Maximum Distance Between Gas Stations
// We are given sorted station positions and a number of new stations 'k' to add.
// We need to find the minimum possible value of the maximum distance between adjacent stations.

// This is a classic "Binary Search on Answer" problem.
// 1. The answer (minimum possible maximum distance) can be any real number.
// 2. We can define a search space for this distance. The smallest possible max distance is 0,
//    and the largest is the maximum gap between existing stations.
// 3. We binary search within this range [low, high]. For a given `max_dist` (our `mid`),
//    we check if it's possible to achieve this by placing at most `k` stations.
// 4. The `isPossible` function (here, `numberOfGasStationsRequired`) helps check this feasibility.

/**
 * @brief Calculates how many new gas stations are required to ensure the distance
 * between any two adjacent stations is at most `max_dist`.
 * @param max_dist The maximum allowed distance between stations.
 * @param stations The vector of existing station positions.
 * @return The total number of new stations required.
 */
int numberOfGasStationsRequired(long double max_dist, vector<int> &stations) {
    int n = stations.size(); // size of the array
    int stations_to_add = 0;
    for (int i = 1; i < n; i++) {
        long double distance_between = stations[i] - stations[i-1];
        // Calculate how many stations can fit in the gap.
        // e.g., if gap is 10 and max_dist is 3, we need 10/3 = 3.33...
        // which means we need to place stations at 3, 6, 9. That's 3 stations.
        // So, it's ceil(distance_between / max_dist) - 1.
        // Or, floor((distance_between - epsilon) / max_dist).
        // The original code's logic is equivalent.
        int stations_in_between = floor(distance_between / max_dist);

        // If the distance is a perfect multiple of max_dist, we need one less station.
        // e.g., gap=6, max_dist=3. Stations at 3. 6/3=2. 2-1=1 station. Correct.
        if (fmod(distance_between, max_dist) == 0) {
            stations_in_between--;
        }
        stations_to_add += stations_in_between;
    }
    return stations_to_add;
}

long double minimiseMaxDistance(vector<int> &stations, int k) {
    int n = stations.size(); // size of the array
    long double low = 0;
    long double high = 0;

    // The search space for the answer is [0, max_gap_between_stations].
    // Find the maximum distance between adjacent stations to set the upper bound `high`.
    for (int i = 0; i < n - 1; i++) {
        high = max(high, (long double)(stations[i + 1] - stations[i]));
    }

    // Apply Binary search on the answer (the distance).
    // We use a small difference `diff` for precision with floating-point numbers.
    long double diff = 1e-7;
    while (high - low > diff) {
        long double mid = (low + high) / (2.0);
        int stations_needed = numberOfGasStationsRequired(mid, stations);
        
        // If we need more stations than we have, `mid` is too small.
        // We need to allow for a larger maximum distance.
        if (stations_needed > k) {
            low = mid;
        } else { // If we can do it with `k` or fewer stations, `mid` is a possible answer.
            // Try for an even smaller max distance.
            high = mid;
        }
    }
    // `high` will converge to the minimum possible maximum distance.
    return high;
}

int main()
{
    vector<int> stations = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(stations, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}
