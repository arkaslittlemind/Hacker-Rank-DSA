Question Link- https://www.codechef.com/DEC21C/problems/CHECKMATE


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
        int xk, yk, x1, y1, x2, y2;
        cin >> xk >> yk >> x1 >> y1 >> x2 >> y2;

        string ans = "NO";
        if (!(xk == 1 || xk == 8 || yk == 1 || yk == 8)) {
            ans = "NO";
        }
        else {
            if (xk == 1) {
                if ((x1 == 2 || x2 == 2) && y1 != y2) {
                    if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1) {
                        ans = "YES";
                    }
                }
            }
            else if (xk == 8) {
                if ((x1 == 7 || x2 == 7) && y1 != y2) {
                    if (abs(y1 - yk) > 1 && abs(y2 - yk) > 1) {
                        ans = "YES";
                    }
                }
            }
            if (yk == 1) {
                if ((y1 == 2 || y2 == 2) && x1 != x2) {
                    if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1) {
                        ans = "YES";
                    }
                }
            }
            else if (yk == 8) {
                if ((y1 == 7 || y2 == 7) && x1 != x2) {
                    if (abs(x1 - xk) > 1 && abs(x2 - xk) > 1) {
                        ans = "YES";
                    }
                }
            }

        }
        cout << ans << endl;
    }
    return 0;
}


