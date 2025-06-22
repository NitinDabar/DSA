#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define int long long

 
void solve()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            sum1++;
        }
    }
    int it = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            it = i;
            break;
        }
    }
    int sum2 = 0;
    for (int i = it; i < it + x; i++)
    {
        sum2 += arr[i];
    }
    if (sum2 < sum1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return;
}
int32_t main()
{
    
 
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}