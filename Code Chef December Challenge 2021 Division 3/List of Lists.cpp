Question Link- https://www.codechef.com/DEC21C/problems/LISTLIST


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        int n, sum = 0, high = 1;
        cin >> n;
        map<int, int> count;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            count[temp]++;
        }
        for (auto it : count) {
            if (high < it.second) high = it.second;
            sum += it.second;
        }
        if (high == n) cout << "0" << endl;
        else if (high <= 1 && n >= 2) cout << "-1" << endl;
        else cout << (sum - high + 1) << endl;

    }
    return 0;
}


