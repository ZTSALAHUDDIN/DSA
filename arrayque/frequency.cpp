// Count frequency of each element in an array
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    vector<bool> visited(n, false);
    cout << "Enter the elements of the array: ";
    for(int i=0 ; i<n; i++){
        cin >> arr[i];
    }
    for (int i =0 ; i<n; i++){
        if (visited[i] == true){
            continue;
        }
        
        int count= 1;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = true;
            }
        }
        cout << "Frequency of " << arr[i] << " is: " << count << endl;
    } 
return 0;
}
