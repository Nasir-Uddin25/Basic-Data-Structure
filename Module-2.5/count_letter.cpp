// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     // int len = s.size();
//     // cout << len;
//     // cout << s;

//     for (int i = 0; i < s.size(); i++)
//     {
//         cin >> s[i];
//     }

//     // for (int i = 0; i < s.size(); i++)
//     // {
//     //     cout << s[i];
//     // }

//     int freq[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         int index = s[i] - 'a';
//         freq[index]++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > 0)
//         {
//             cout << char(i + 'a') << " " << ":" << " " << freq[i] << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    //vector<string> v;
    for (int i = 0; i < s.size(); i++)
    {
        cin >> s[i];
    }

    vector<int> freq(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        freq[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            cout << char(i + 'a') <<" " <<":" <<" " << freq[i] << endl;
    }
    return 0;
}