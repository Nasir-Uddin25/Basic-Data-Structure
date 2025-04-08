#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map<string, int> mp;
    // // syntax -> map_data_type[key,value] may_variable
    // map<int, int> mp;
    // map<string, string> mp;
    // map<queue<int>, int> q;
    // map<stack<int>, int> st;
    // map<pair<int, int>, int> p;
    // map<list<int>, int> l;
    // map<vector<int>, int > v;
    // map<char, int> ch;

    // char fre[100];
    // fre[5] = 20;
    // fre[20] = 40;
    // fre[21] = 41;
    // fre[22] = 65;
    // cout << fre[20] << " " << fre[21] << endl;
    // cout << fre[22];

    map<string, int> mp;
    mp["nasir"] = 10;  //map a value insert korar complexity -> 0(logN)
    mp["nurhossen"] = 20;
    mp["amirhossen"] = 30;
  
    cout << mp["nasir"] << " " << mp["nurhossen"] << endl;
    //cout << mp["nurjahan"] << endl;
    for (auto it = mp.begin(); it != mp.end(); it++) // N number value traverse complextiy 0(nlogn)
        cout << it->first << " " << it->second << endl; //value print korar complexity -> 0(logn)
    if (mp.count("nurjahan"))
        cout << "Ache";
    else
        cout << "Nai";

    return 0;
}