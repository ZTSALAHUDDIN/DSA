// Remove Duplicates From an Unsorted Array
#include <iostream>
#include <unordered_set> //a bag that remembers which elements you’ve already seen.
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    unordered_set<int> seen;   //Create an empty set.
    cout << "Array after removing duplicates: ";
    for(int i=0; i<n; i++){
        if(seen.find(arr[i]) == seen.end()){     //If the element is not in the set, print it and add it to the set.
            cout << arr[i] << " ";
            seen.insert(arr[i]);
        }
    }
    return 0;
}