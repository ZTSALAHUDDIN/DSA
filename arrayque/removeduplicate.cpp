// remove duplicates inplace from the sorted array
// solved using two pointer approach
#include <iostream>
using namespace std;
 int main(){
    int n;
    cout << "enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout << "Array after removing duplicates: ";
    for(int k=0; k<=i; k++){
        cout << arr[k] << " ";
    }
    cout << endl;
    cout << "Number of unique elements: " << i+1 << endl;
 }