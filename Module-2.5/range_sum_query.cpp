// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     int a[100000];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     int l, r;
//     cin >> l >> r;

//     long long int sum = 0;
//     for (int i = 1; i <= q; i++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (l < r)
//             {
//                 for (int i = l; i <= r; i++)
//                 {
//                     sum += a[i];
//                 }
//                 cout << sum << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;

//     vector<int> v(n);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v[i];
//     }

//     int l, r;
//     cin >> l >> r;

//     long long int sum = 0;
//     for (int i = 1; i <= q; i++)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (l < r)
//             {

//                 for (int i = l; i <= r; i++)
//                 {

//                     sum += v[i];
//                 }

//                 cout << sum << endl;
//             }
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }

    return 0;
}
