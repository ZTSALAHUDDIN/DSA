// Second largest element in an array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = -1;
    int secondlargest = -1;
    for (int i=0; i<n ; i++){
        if(arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    cout << "Second largest element is: " << secondlargest << endl;
    return 0;
}