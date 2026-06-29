// Check if a number is palindrome
#include <iostream>
using namespace std;

int main(){
    int n, reversed = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    int original = n; 
    while(n != 0){
        int digit = n%10;
        reversed = reversed * 10 + digit;
        n = n/10;
    }
    if(reversed == original){
        cout << "The number is palindrome." << endl;
    } else {
        cout << "The number is not palindrome." << endl;
    }
    cout << "Reversed number is: " << reversed << endl;
    return 0;
}