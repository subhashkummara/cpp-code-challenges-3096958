#include<iostream>
#include<limits>
using namespace std;
string askUserAString()
{
    string str;
    cout << "please enter a string: " << flush;
    getline(cin, str);
    return str;
}
bool checkPalindrome(string str)
{
    bool status{true};
    for(int i = 0 ;i<str.size()/2;i++)
    {
        if(str[i] == str[str.size()-i-1])
        {

        }
        else
        {
            return false;
        }
    }

    return status;

}
int main()
{
    // Initialize streams
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Clear any error flags
    cin.clear();
    // Do NOT discard input at the beginning
    
    string str = askUserAString();
    
    if (!str.empty()) {
        bool isPalindrome = checkPalindrome(str);
        cout << "The status of string, whether it is a palindrome is: " << (isPalindrome ? "true" : "false") << endl;
    } else {
        cout << "No input was provided." << endl;
    }
    
    // Keep console window open until user presses a key
    cout << "Press Enter to exit..." << endl;
    cin.get();
    
    return 0;
}