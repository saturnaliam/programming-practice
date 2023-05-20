#include <iostream>
#include <string>

bool canConstruct(std::string ransomNote, std::string magazine) {
    int matchingChars = 0;

    for (char charRansom : ransomNote) {
        for (int i = 0; i < magazine.size(); i++) {
            if (charRansom == magazine[i]) {
                magazine.erase(magazine.begin() + i);
                matchingChars++;
                break;
            }
        }
    }

    return (matchingChars == ransomNote.size());
}

int main() {
    std::cout << canConstruct("aa", "as");
}