// Check true false for number if its armstrong number or not
#include <iostream>
#include <cmath>
using namespace std;
int count(int n){
    int count = 0;
    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}
int main() {
    int n, sum = 0, original;
    int countdigit;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    countdigit = count(n);
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, countdigit);
        n = n / 10;
    }
    if (sum == original) {
        cout << "True." << endl;
    } else {
        cout << "False." << endl;
    }
    return 0;
}