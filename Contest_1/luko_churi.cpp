// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int cnt_A = 0, cnt_C = 0, cnt_G = 0, cnt_T = 0;
    for (char i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cnt_A++;
        else if (s[i] == 'C')
            cnt_C++;
        else if (s[i] == 'G')
            cnt_G++;
        else
            cnt_T;
    }

    if (cnt_A > cnt_C && cnt_A > cnt_G && cnt_A > cnt_T)
        cout << cnt_A;
    else if (cnt_C > cnt_A && cnt_C > cnt_G && cnt_C > cnt_T)
        cout << cnt_C;
    else if (cnt_G > cnt_A && cnt_G > cnt_C  && cnt_G > cnt_T)
        cout << cnt_G;
    else
        cout << cnt_T;

    return 0;
}