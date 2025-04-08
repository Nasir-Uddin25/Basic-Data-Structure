/* // https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // Extract the numbers from the input string
    string numbers = "";
    for (char c : s)
    {
        if (c != '+')
        {
            numbers += c;
        }
    }

    for (char c : s)
        cout << c;
    cout << endl;

    // Sort the numbers
    sort(numbers.begin(), numbers.end());
    for (char c : numbers)
        cout << c;
    cout << endl;

    // Construct the output string
    string result = "";
    for (int i = 0; i < numbers.size(); ++i)
    {
        result += numbers[i];
        if (i < numbers.size() - 1)
        {
            result += '+';
        }
    }

    // Print the result
    cout << result << endl;

    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i += 2)
    {
        for (int j = 0; j < s.size() - 1; j += 2)
        {
            if (s[j] > s[j + 2])
                swap(s[j], s[j + 2]);
        }
    }
    cout << s << endl;
    return 0;
}