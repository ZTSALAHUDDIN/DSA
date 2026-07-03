// Lowest common multiple (LCM) of two numbers

#include <iostream>
using namespace std;

int main(){
    int a,b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int n1 = a, n2 = b;
    while(b != 0){
        int temp = b;
        b= a%b;
        a = temp;
    }      
    cout << "LCM is " << (n1 * n2) / a << endl;
    return 0;
}