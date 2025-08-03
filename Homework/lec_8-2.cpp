//Total amount of money needs how many denomination of notes using switch case

#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the total amount of money: ";
    cin >> amount;

    int denominations[] = {100, 50, 20, 10, 5, 1};
    int index = 0;

    while (amount > 0 && index < 6) {
        switch (denominations[index]) {
            case 100:
            case 50:
            case 20:
            case 10:
            case 5:
            case 1: {
                int note = denominations[index];
                int count = amount / note;
                amount %= note;

                if (count > 0) {
                    cout << note << " denomination notes: " << count << endl;
                }
                index++;
                break;
            }
            default:
                index++;
        }
    }

    return 0;
}
