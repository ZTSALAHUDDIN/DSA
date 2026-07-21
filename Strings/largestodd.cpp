#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cout << "Enter a number: ";
    cin >> str;

    for (int i = str.length() - 1; i >= 0; i--)
    {
        if ((str[i] - '0') % 2 != 0)
        {
            string ans = str.substr(0, i + 1);
            // Remove leading zeros
            int start = 0;
            while (start < ans.length() - 1 && ans[start] == '0')
            {
                start++;
            }
            cout << "the largest odd number is: " << ans.substr(start) << endl;
            return 0;
        }
    }
    cout << "No odd number found.";
    return 0;
}