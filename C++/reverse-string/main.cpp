#include <iostream>
#include <string>
#include <stack>

std::string reverseString(std::string &str) {
    std::stack<char> stack;
    std::string output = "";

    for (int i = 0; i < str.length(); i++) {
        stack.push(str[i]);
    }

    for (int i = 0; i < str.length(); i++) {
        output += stack.top();
        stack.pop();
    }

    return output;
}

int main() {
    // printf and scanf wouldnt work i have to use the ugly form :(
    std::string x, s;

    std::cout << "Please give the text to reverse: ";
    std::cin >> x;
    s = reverseString(x).c_str();
    std::cout << s << std::endl;
}