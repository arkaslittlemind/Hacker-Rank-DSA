Question Link- https://www.codechef.com/DEC21C/problems/VANDH


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
        int n, m;
        string s;
        cin >> n >> m;
        if (n > m)
        {
            n = n - m;
            while (m != 0)
            {
                s += "01";
                m--;
            }
            while (n != 0)
            {
                s += "010";
                n--;
            }
        }
        else if (m > n)
        {
            m = m - n;
            while (n != 0)
            {
                s += "10";
                n--;
            }
            while (m != 0)
            {
                s += "101";
                m--;
            }
        }
        else
        {
            while (n + 1 != 0)
            {
                s += "01";
                n--;
            }

        }

        cout << s.size() << endl;
        cout << s << endl;

    }
    return 0;
}


