// Check if array is sorted or not
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout <<"False." << endl;
            return 0;
        }
    }
    cout << "True." << endl;
    return 0;
}