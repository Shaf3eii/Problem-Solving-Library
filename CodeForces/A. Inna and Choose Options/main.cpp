//      ﷽

// Submission : https://codeforces.com/contest/400/submission/274540925

//       وَأَنْ لَيْسَ لِلْإِنْسَانِ إِلَّا مَا سَعَى

//   "From the river to the sea, Palestine is Free"

// Seek knowledge from the Cradle to the Grave.

// Never Give up -- Life is too short to make mistakes and learn from them -- Learn from other's mistakes

// Remember you were always a novice when you started so never be rude to some one

// Aim Big and strive hard to get it

// One has his own set of talents and anyone can do anything so never compare yourself to anybody

#include <bits/stdc++.h>

using namespace std;

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define Free_Palestine  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define i64             long long

//const int dx[] = {0,0,1,-1};
//const int dy[] = {1,-1,0,0};
//const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
//const int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

void solve() {
    string line;
    cin >> line;
    vector<pair<int, int>> shapes;
    int grid[] = {1, 2, 3, 4, 6, 12};
    bool flag = true;
    for (auto i: grid) {
        for (int j = 0; j < i; ++j) {
            if (line[j] == 'X') {
                flag = true;
                for (int k = j; k < 12; k += i) {
                    if (line[k] != 'X') {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    shapes.emplace_back(12 / i, i);
                    break;
                }
            }
        }
    }
    sort(shapes.begin(), shapes.end());
    cout << (int) shapes.size() << " ";
    for (auto &i: shapes)
        cout << i.first << "x" << i.second << " ";
    cout << '\n';
}

signed main() {
    Free_Palestine
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
