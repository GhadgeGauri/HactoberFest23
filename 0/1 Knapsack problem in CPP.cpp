#include <iostream>
#include <vector>

using namespace std;

// Structure to represent an item
struct Item {
    int weight;
    int value;
};

// Function to solve the 0/1 Knapsack problem using dynamic programming
int knapsack(vector<Item>& items, int capacity) {
    int n = items.size();
    // Create a 2D DP table to store the maximum value for each subproblem
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Fill the DP table using bottom-up approach
    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            // If the current item's weight is greater than the current capacity,
            // we can't include it in the knapsack
            if (items[i - 1].weight > w) {
                dp[i][w] = dp[i - 1][w];
            } else {
                // Otherwise, we have two choices: include the item or exclude it
                // Take the maximum of these two choices
                dp[i][w] = max(dp[i - 1][w], items[i - 1].value + dp[i - 1][w - items[i - 1].weight]);
            }
        }
    }

    // The maximum value is stored in dp[n][capacity]
    return dp[n][capacity];
}

int main() {
    // Example usage
    int capacity = 10;
    vector<Item> items = {{2, 6}, {2, 10}, {3, 12}, {5, 15}, {7, 22}};

    int max_value = knapsack(items, capacity);

    cout << "Maximum value that can be obtained: " << max_value << endl;

    return 0;
}
