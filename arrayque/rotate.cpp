// Rotate array by k elements : block swap algorithm
/*Input : N = 5, array[] = {1, 2, 3, 4, 5}, K = 2
Output (Left Rotation) : {3, 4, 5, 1, 2}
Explanation : After rotating left by 2, the first two elements move to the end.

Input : N = 5, array[] = {1, 2, 3, 4, 5}, K = 2
Output (Right Rotation) : {4, 5, 1, 2, 3}
Explanation : After rotating right by 2, the last two elements move to the start.*/

#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
int n;
cout<< "Enter the size of the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for(int i = 0; i<n; i++){
    cin >> arr[i];
}
int k;
cout << "Enter the number of rotations: ";
cin >> k;
k = k % n; // To handle cases where k > n~~ if k=12 and n=5, then k=12%5=2 ~~ 2 rotations are same as 12 rotations
// Left rotation
reverse(arr, 0, k-1);
reverse(arr, k, n-1);
reverse(arr, 0, n-1);
cout << "Array after " << k << " left rotations is: ";
for(int i=0; i<n ; i++){
    cout << arr[i] << " ";
}
}

/*right rotation
reverse(arr, n-k,n-1)
reverse(arr, 0, n-k-1)
reverse(arr, 0, n-1)*/
