#include <stdio.h>


// VERY heavily influenced and guided by this:
// https://www.geeksforgeeks.org/c-program-for-bubble-sort/
void swapTerms(int* valueOne, int* valueTwo) {
    int temp = *valueOne;
    *valueOne = *valueTwo;
    *valueTwo = temp;
}

void sortArray(int arr[], int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - j - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swapTerms(&arr[i], &arr[i + 1]);
            }
        }
    }
}

int main() {
    int f[5] = {5, 7, 2, 8, 4};
    int n = sizeof(f) / sizeof(f[0]);
    sortArray(f, n);

    printf("%d %d %d %d %d\n", f[0], f[1], f[2], f[3], f[4]);
    return 0;
}