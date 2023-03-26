
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Helper function to check if it is possible to place M cows
// with a minimum distance of mid in the stalls.
bool canPlaceCows(int mid, const vector<int> &stalls, int M)
{
    int count = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= mid)
        {
            count++;          // Increase the count of cows placed
            last = stalls[i]; // Update the last placed cow's position
        }
        if (count >= M)
            return true; // If we have placed M cows, return true
    }
    return false; // Otherwise, return false
}

// Function to find the maximum distance between any two cows that can be
// accommodated in the stalls.
int maxDistance(int N, int M, const vector<int> &stalls)
{
    sort(stalls.begin(), stalls.end());              // Sort the stalls in ascending order
    int lo = 0, hi = stalls[N - 1] - stalls[0], mid; // Initialize the lower and upper bounds of the search space
    while (lo < hi)
    {
        mid = lo + (hi - lo + 1) / 2;     // Calculate the mid-point of the search space
        if (canPlaceCows(mid, stalls, M)) // Check if it is possible to place M cows with a minimum distance of mid
            lo = mid;                     // If yes, update the lower bound of the search space
        else
            hi = mid - 1; // Otherwise, update the upper bound of the search space
    }
    return lo; // Return the maximum distance
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> stalls(N);
    for (int i = 0; i < N; i++)
        cin >> stalls[i];
    cout << maxDistance(N, M, stalls) << endl; // Compute and print the maximum distance

    return 0;
}
