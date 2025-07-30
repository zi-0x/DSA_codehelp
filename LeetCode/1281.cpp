//1281. Subtract the product and sum of digits of an integer

#include <iostream>
using namespace std;

int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;

    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }

    return product - sum;
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int result = subtractProductAndSum(n);
    cout << "Result: " << result << endl;

    return 0;
}
