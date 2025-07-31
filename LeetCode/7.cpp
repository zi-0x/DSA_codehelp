//7. Reverse Integer

#include <iostream>
#include <limits.h>  // for INT_MAX and INT_MIN
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int answer = 0;

        while (x != 0) {
            int digit = x % 10;

            // Check for overflow/underflow before multiplying
            if (answer > INT_MAX / 10 || answer < INT_MIN / 10) {
                return 0;
            }

            answer = answer * 10 + digit;
            x = x / 10;
        }

        return answer;
    }
};

int main() {
    Solution sol;
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int reversed = sol.reverse(x);
    cout << "Reversed integer: " << reversed << endl;

    return 0;
}

