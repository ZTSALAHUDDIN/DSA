#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int left = 0;
    int right = str.length() - 1;
    bool isPalindrome = true;
    while (left < right){
        if(tolower(str[left]) != tolower(str[right])){
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if(isPalindrome){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

}