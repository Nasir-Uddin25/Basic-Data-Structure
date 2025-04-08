#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int>pq; //Maximum Priority Queue
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(100);
    cout << pq.top() << endl;
    pq.pop(); // 100
    pq.pop(); // 30
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    if (pq.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    return 0;
}