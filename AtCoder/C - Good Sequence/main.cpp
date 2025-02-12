//      ﷽

//       وَأَنْ لَيْسَ لِلْإِنْسَانِ إِلَّا مَا سَعَى

//   https://atcoder.jp/contests/arc087/tasks/arc087_a

//#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

// 48-57 -> 0-9  65-90 -> A-Z 97-122 -> a-z
#define Wl3_ElNor       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define i64             long long
#define int             long long
#define all(a)          a.begin(),a.end()
#define all_r(a)        a.rbegin(),a.rend()
#define vi              vector<int>
#define ef              else if
#define retv(x)         return void(cout << (x) << '\n')
#define sp              " "
#define SetPre(n, x)    cout << fixed << setprecision(n) << x << '\n'
#define Mod             1'000'000'007
#define INF             2'000'000'000
#define sz(s)           (int)(s).size()
#define debug(x)        cout << #x << ": " << (x) << "\n";
#define EPS             1e-9
#define PI              acos(-1)

//const int dx[] = {0, 0, 1, -1};
//const int dy[] = {1, -1, 0, 0};
//const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
//const int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
//const int N = 1e3 + 5;

void Erz3() {
    int n;
    cin >> n;
    map<int,int> freq;
    for(int i = 0, x ; i < n ; ++i) {
        cin >> x;
        freq[x]++;
    }
    int cnt = 0;
    for(auto& i : freq) {
        if(i.second == i.first) continue;
        if(i.second < i.first) cnt += i.second;
        else cnt += (i.second - i.first);
    }

    cout << cnt;
}

// Another Approach using vector with simple observation
void Erz3() {
    int n, cnt = 0;
    cin >> n;
    vi freq(n + 1, 0);
    for(int i = 0, x ; i < n ; ++i) {
        cin >> x;
        if(x > n) { // If element is greater than 𝑛, it won't make a good sequence
            cnt++;
            continue;
        }
        freq[x]++;
    }
//    for(int i = 1 ; i <= n ; ++i) cout << freq[i] << " \n"[i == n];
    for(int i = 1 ; i <= n ; ++i) {
        if(freq[i] != i && freq[i]) {
            if(freq[i] < i) cnt += freq[i];
            else cnt += freq[i] - i;
        }
    }
    cout << cnt << '\n';
}

signed main() {
    Wl3_ElNor
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
//    cin >> t;
    while (t--)
        Erz3();

    return 0;
}
