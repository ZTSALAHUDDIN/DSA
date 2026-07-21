#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string arr[100];
    cout << "Enter the strings: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
cout << "The longest common prefix is: ";
    for(int i = 0; i < arr[0].length(); i++) {

        for(int j = 1; j < n; j++) {

            if(i >= arr[j].length() || arr[j][i] != arr[0][i]) {
                return 0;
            }

        }

        cout <<  arr[0][i];

    }

}