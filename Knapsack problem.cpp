#include <iostream>
#include <vector>
using namespace std;

int knapsack(int capacity, vector<int>& weights, vector<int>& values, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Fill the dp table
    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The maximum value is in dp[n][capacity]
    return dp[n][capacity];
}

int main() {
    int capacity, n;
    cout << "Enter the knapsack capacity: ";
    cin >> capacity;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<int> weights(n);
    vector<int> values(n);

    cout << "Enter the weights of items: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    cout << "Enter the values of items: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    int maxValue = knapsack(capacity, weights, values, n);
    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
