#include <iostream>
#include <vector>

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
    for (std::vector<int> row : matrix) {
        for (int item : row) {
            if (item > target) return false;
            if (item == target) return true;
        }
    }
    
    return false;
}

int main() {

}