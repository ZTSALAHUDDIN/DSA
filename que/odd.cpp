// Count number of odd digits in a number
#include <iostream>
using namespace std;    

int main(){
    int n, count = 0;
    cout<< "Enter a number: ";
    cin>> n;
    while(n!=0){
        int digit = n % 10;
        if(digit % 2 != 0){
            count++;
        }
        n = n/10;
    }
    cout<< "Number of odd digits are:" << count << endl;
    return 0;     
}