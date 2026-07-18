#include <iostream>
using namespace std;

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    int octal = 0;
    int place = 1;

    while (decimal > 0) {
        int rem = decimal % 8;
        octal += rem * place;
        place *= 10;
        decimal /= 8;
    }

    cout << "Octal number: " << octal << endl;

    return 0;
}