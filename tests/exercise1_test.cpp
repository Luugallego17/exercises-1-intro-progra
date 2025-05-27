#include <iostream>
#include <string>

void exercise_1(const std::string& a, const std::string& b, const std::string& c) {
    std::string min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    std::cout << min;
}