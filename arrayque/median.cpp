// Find Median of the given Array

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout << "enter size:";
    cin>>n;
    int arr[n];
    cout << "enter elements: ";
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    if(n%2!=0){
        cout << "Median is: "<< (arr[n/2]) << endl;
    }
    else{
        cout << "Median is: "<< (arr[n/2] + arr[n/2-1])/2.0 << endl;
    }

}