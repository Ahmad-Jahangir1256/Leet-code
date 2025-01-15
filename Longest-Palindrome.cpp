#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
    int i;
    string str[i],str_rev[i],longest_palindrome;
    cout << "Enter no.of strings: ";
    cin >> i;
    for(int j=0;j<i;j++)
    {
        cout << "Enter the string: ";
        cin >> str[j];
    }
    for(int j=0;j<i;j++)
    {
        str_rev[j] = str[j];
        reverse(str_rev[j].begin(), str_rev[j].end());
    }
    for(int j=0;j<i;j++)
    {
    if (str[j] == str_rev[j]) 
    {
        cout << "The string is a palindrome." << endl;
        for(int j=0;j<i;j++)
        {
            if (str[j].length() > longest_palindrome.length()) 
            {
                longest_palindrome = str[j];
            }
        }
        cout << "The longest palindrome is: " << longest_palindrome << endl;
    }
    }
        for(int j=0;j<i;j++)
        {
            if (str[j].length() > longest_palindrome.length()) 
            {
                longest_palindrome = str[j];
            }
        }
        cout << "The longest palindrome is: " << longest_palindrome << endl;
    return 0;
}
