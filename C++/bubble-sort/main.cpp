#include <vector>
#include <iostream>

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

std::vector<int> bubbleSort(const std::vector<int> &unsorted) {
    std::vector<int> sorted = unsorted;

    for (int j = 0; j < unsorted.size(); j++) {
        for (int i = 0; i < unsorted.size() - j - 1; i++) {
            if (sorted[i] > sorted[i + 1]) swapNumbers(sorted[i], sorted[i + 1]);
        }
    }

    return sorted;
}

int main() {
    std::vector<int> unsortedList = { 5, 8, 1, 5, 0, 0, 64 };
    std::vector<int> sorted = bubbleSort(unsortedList);

    for (int i : sorted) {
        printf("%d\n", i);
    }
}