
#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int val) // 0(1)
    {
        v.push_back(val);
    }

    void pop() // 0(1)
    {
        v.pop_back();
    }

    int top() // 0(1)
    {
        return v.back();
    }

    int size() // 0(1)
    {
        return v.size();
    }

    bool empty() // 0(1)
    {
        return v.empty();
    }
};
int main()
{
    myStack st;
    myStack st2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
  

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

   if(st.size() == st2.size())
   {
    cout << "YES" << endl;
   }
   else{
    cout << "NO" << endl;
   }

    return 0;
}