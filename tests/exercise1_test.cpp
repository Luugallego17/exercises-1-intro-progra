#include <iostream>
#include <string>

void exercise_1(const string& a, const string& b, const string& c) {
    string min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    cout << min;
}