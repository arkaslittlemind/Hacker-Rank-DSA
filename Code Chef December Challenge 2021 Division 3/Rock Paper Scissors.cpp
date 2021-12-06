Question Link- https://www.codechef.com/DEC21C/problems/ROPASCI


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

char match(char a, char b) {
    if (a == b) return a;

    else if (a == 'R' && b == 'P' || a == 'P' && b == 'R') {
        return 'P';
    }
    else if (a == 'R' && b == 'S' || a == 'S' && b == 'R') {
        return 'R';
    }
    else if (a == 'P' && b == 'S' || a == 'S' && b == 'P') {
        return 'S';
    }
    else {
        assert (false);
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    int T;
    cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<char> dp_r(n + 1);
        vector<char> dp_p(n + 1);
        vector<char> dp_s(n + 1);

        vector<char> ans(n + 1);

        ans[n] = s[n - 1];
        dp_r[n] = match('R', s[n - 1]);
        dp_p[n] = match('P', s[n - 1]);
        dp_s[n] = match('S', s[n - 1]);

        for (int i = n - 1; i >= 1; i--) {
            char r_res = match('R', s[i - 1]);
            if (r_res == 'R') {
                dp_r[i] = dp_r[i + 1];
            }
            else if (r_res == 'P') {
                dp_r[i] = dp_p[i + 1];
            }
            else if (r_res == 'S') {
                dp_r[i] = dp_s[i + 1];
            }
            char p_res = match('P', s[i - 1]);
            if (p_res == 'R') {
                dp_p[i] = dp_r[i + 1];
            }
            else if (p_res == 'P') {
                dp_p[i] = dp_p[i + 1];
            }
            else if (p_res == 'S') {
                dp_p[i] = dp_s[i + 1];
            }
            char s_res = match('S', s[i - 1]);
            if (s_res == 'R') {
                dp_s[i] = dp_r[i + 1];
            }
            else if (s_res == 'P') {
                dp_s[i] = dp_p[i + 1];
            }
            else if (s_res == 'S') {
                dp_s[i] = dp_s[i + 1];
            }
            if (s[i - 1] == 'R') {
                ans[i] = dp_r[i + 1];
            }
            else if (s[i - 1] == 'P') {
                ans[i] = dp_p[i + 1];
            }
            else if (s[i - 1] == 'S') {
                ans[i] = dp_s[i + 1];
            }

            for (int i = 1; i <= n; i++) {
                cout << ans[i];
            }
        }
        cout << endl;
    }
    return 0;
}


