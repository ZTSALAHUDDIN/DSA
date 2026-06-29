// Count of prime numbers till n
// A number is prime if no number from 2 to √n divides it.
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

   //     if (count == 2){
    //     return true;
    // } else {
    //     return false;
    // }this entire thing can be replaced by a single line of code
    
    // return count == 2;


int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i =2; i<=n;i++){
        if (isPrime(i)){
            count++;
        }
    }
    cout << "Count of prime numbers till " << n << " is: " << count << endl;
}