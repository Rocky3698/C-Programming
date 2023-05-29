#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define endl "\n"
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int maxm = 200000;

int32_t main()
{
    IOS

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m, s, time = maxm;
        bool skill1 = false, skill2 = false;
        int t10, t01, t11, t00;
        t10 = t01 = t11 = maxm;
        t00 = 0;
        bool f10, f01, f11;
        f10 = f01 = f11 = false;

        for (int i = 0; i < n; i++)
        {
            cin >> m >> s;

            if (s == 1)
            {
                t01 = min(t01, m);
                f01 = true;
            }
            else if (s == 10)
            {
                t10 = min(t10, m);
                f10 = true;
            }
            else if (s == 11)
            {
                t11 = min(t11, m);
                f11 = true;
            }
            else
                t00++;
        }

        if (t00 < n)
        {
            if (f10 && f01)
                time = t10 + t01;
            if (f11)
                time = min(time, t11);
            if ((!f10 || !f01) && !f11)
                time = -1;

            cout << time << endl;
        }
        else
            cout << "-1\n";
    }

    return 0;
}