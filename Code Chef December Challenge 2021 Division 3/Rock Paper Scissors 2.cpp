Question Link- https://www.codechef.com/DEC21C/problems/ROPASCI

#include<bits/stdc++.h>
using namespace std;

string helper(string s)
{
    int len = s.size();
    vector<char> dp (len);
    dp[len - 1] = s[len - 1];
    int S = -1;
    int P = -1;
    int R = -1;
    if (s[len - 1 ] == 'P')
        P = len - 1;
    else if (s[len - 1] == 'R' )
        R = len - 1;
    else
        S = len - 1;
    for (int i = len - 2; i >= 0; i--)
    {
        if (s[i] == 'P')
        {
            P = i;
            if (S != -1)
                dp[i] = dp[S];
            else
                dp[i] = s[i];
        }
        else if (s[i] == 'S')
        {
            S = i;
            if (R != -1)
                dp[i] = dp[R];
            else
                dp[i] = s[i];
        }
        else if (s[i] == 'R')
        {
            R = i;
            if (P != -1)
                dp[i] = dp[P];
            else
                dp[i] = s[i];
        }
    }
    string ans = "";
    for (int i = 0; i < len; i++)
        ans += dp[i];

    return ans;
}
int main() {
    int T;
    cin >> T;
    cout << endl;
    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        cout << endl;
        string S;
        cin >> S;
        cout << endl;
        cout << helper(S);

    }
    return 0;
}
