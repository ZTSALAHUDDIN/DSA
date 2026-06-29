// Count of odd numbers in an array
#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of the array: ";
    for (int i = 0; i<n;i++){
        cin >> arr[i];
        if (arr[i] % 2 != 0){
            count++;
        }
    }
    cout << "The count of odd numbers in the array is: " << count << endl;
    return 0;
}