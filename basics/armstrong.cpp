#include <iostream>
#include <cmath>
using namespace std;

// Safer way to count digits
int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int n) {
    int k = countDigits(n);
    int sum = 0;
    int original = n;

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, k);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;
    cout << (isArmstrong(n) ? "Yes" : "No") << endl;
    return 0;
}
