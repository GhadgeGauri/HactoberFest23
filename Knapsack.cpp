#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int value;
    int weight;
};

bool compare(Item a, Item b) {
    double ratio1 = (double)a.value / a.weight;
    double ratio2 = (double)b.value / b.weight;
    return ratio1 > ratio2;
}

double fractionalKnapsack(vector<Item>& items, int capacity) {
    sort(items.begin(), items.end(), compare);
    double finalValue = 0.0;

    for (const Item& item : items) {
        if (capacity >= item.weight) {
            finalValue += item.value;
            capacity -= item.weight;
        } else {
            finalValue += (item.value / (double)item.weight) * capacity;
            break;
        }
    }

    return finalValue;
}

int main() {
    vector<Item> items = {
        {60, 10},
        {100, 20},
        {120, 30}
    };
    int capacity = 50;

    double result = fractionalKnapsack(items, capacity);
    cout << "Maximum profit is: " << result << endl;

    return 0;
}
