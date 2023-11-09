#include<bits/stdc++.h>
using namespace std;
void computeLPS(const string& pattern, int lps[])
{
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < pattern.length())
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMP(const string& text, const string& pattern)
{
    int m = pattern.length();
    int n = text.length();
    int lps[m];
    computeLPS(pattern, lps);
    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (pattern[j] == text[i])
        {

            j++;
            i++;
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1];
        }

        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;

        }
    }
}
int main()
{
    string text;
    string pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    KMP(text, pattern);
    return 0;
}
