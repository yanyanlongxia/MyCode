//
// Created by admin on 2020/7/31.
//
#include <bits/stdc++.h>
using namespace std;
long long int solve()
{
    long long int n, k, l1, l2, r1, r2;
    cin >> n >> k >> l1 >> r1 >> l2 >> r2;
    if (r1 == l2 || r2 == l1)
    {
        long long int len = r1 - l2;
        if (r1 == l2)
            len = r2 - l1;
        long long int temp = n * len;
        if (k <= temp)
            return k;
        else
        {
            k -= temp;
            return temp + 2 * k;
        }
    }
    else if (l2 > r1 || l1 > r2)
    {
        if (l1 > r2)
        {
            swap(l1, l2);
            swap(r1, r2);
        }
        long long int ans = LONG_LONG_MAX, tk = k;
        for (long long int i = 1; i <= n; i++)
        {
            long long int tans = i * (l2 - r1);
            long long int temp = i * (r2 - l1);
            long long int k = tk;

            if (k <= temp)
                ans = min(ans, tans + k);
            else
            {
                tans += temp;
                k -= temp;
                ans = min(ans, tans + 2 * k);
            }
        }
        return ans;
    }
    else
    {
        if ((l2 >= l1 && r2 <= r1) || (l1 >= l2 && r1 <= r2))
        {
            if (l1 >= l2 && r1 <= r2)
            {
                swap(l1, l2);
                swap(r1, r2);
            }
            if (k <= n * (r2 - l2))
                return 0;
            else
            {
                k -= n * (r2 - l2);
                long long int temp = n * (r1 - r2 + l2 - l1);
                if (k <= temp)
                    return k;
                else
                {
                    k -= temp;
                    return temp + 2 * k;
                }
            }
        }
        else
        {
            if (r1 > l2 && r1 < r2)
            {
                swap(l1, l2);
                swap(r1, r2);
            }

            if (k <= n * (r2 - l1))
                return 0;
            else
            {
                k -= n * (r2 - l1);
                long long int temp = n * (r1 - r2 + l1 - l2);
                if (k <= temp)
                    return k;
                else
                {
                    k -= temp;
                    return temp + 2 * k;
                }
            }
        }
    }
}
int main()
{
    long long int t;
    cin >> t;
    for (long long int i = 1; i <= t; i++)
        cout << solve() << "\n";
    return 0;
}

