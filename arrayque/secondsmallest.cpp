// Finding the second smallest element in an array
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout<< "Enter the element of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for (int i=0; i<n ; i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];}
        else if ( arr[i] < second_smallest && arr[i] != smallest){
            second_smallest = arr[i];
        }}
    cout << "The smallest element is: " << smallest << endl;
    if (second_smallest == INT_MAX){
        cout << "The second smallest element is: -1" << endl;
    }
    else{
        cout << "The second smallest element is: " << second_smallest << endl;
    }
    return 0;
    }
