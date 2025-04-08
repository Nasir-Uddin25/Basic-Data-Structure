#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> freq;

        string s;
        getline(cin, s);

        int mx_count = -1;
        string ans;

        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            freq[word]++;

            if (mx_count < freq[word])
            {
                mx_count = freq[word];
                ans = word;
            }
        }

        cout << ans << " " << mx_count << endl;
    }

    return 0;
}
