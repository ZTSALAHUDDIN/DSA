// #if a nuber is perfect true or false
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a nukber: ";
    cin >> n;
    for (int i=1; i<n; i++){
        if (n%i == 0){
            sum += i;
        }
    }
    if (sum == n){
        cout << "True." << endl;
    } else {
        cout << "False." << endl;
    }
}