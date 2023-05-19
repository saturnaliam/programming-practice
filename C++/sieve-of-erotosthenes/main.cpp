#include <iostream>
#include <vector>

void findPrimes(std::vector<int> &input) {
    // ensuring anything under 1 (inclusive) isnt included
    while (input[0] <= 1) input.erase(input.begin());

    for(int i : input) {
        std::vector<int> deleteIndices;

        for (int j = 0; j < input.size(); j++) if (input[j] != i && input[j] % i == 0) deleteIndices.push_back(j);

        for (int x = 0; x < deleteIndices.size(); x++) input.erase(input.begin() + deleteIndices[x] - x);
    }
}

int main() {
    std::vector<int> s;

    for (int i = 0; i <= 100; i++) {
        s.push_back(i);
    }

    findPrimes(s);
    for(int f : s) {
        printf("%d\n", f);
    }
}