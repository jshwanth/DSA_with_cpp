#include <iostream>
#include <string>
#include <climits>
using namespace std;

int myAtoi(string s) {
    int i = 0, n = s.length();
    long result = 0;
    int sign = 1;

    while (i < n && s[i] == ' ') i++;

    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    while (i < n && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');
        i++;

        if (result * sign > INT_MAX) return INT_MAX;
        if (result * sign < INT_MIN) return INT_MIN;
    }

    return result * sign;
}

int main() {
    string s = "                 -322222 ";
    cout << "Converted integer: " << myAtoi(s) << endl;
    return 0;
}
