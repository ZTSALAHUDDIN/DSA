// factorial of a number
#include <iostream>
using namespace std;

int main(){
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    while(n>0){
        fact = fact * n;
        n--;
    }
    cout << "Factorial is: " << fact << endl;
    return 0;
}