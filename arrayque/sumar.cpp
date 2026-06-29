// Sum of array elements
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of array elements is: " << sum << endl;
}