#include <bits/stdc++.h>

using namespace std;

int arr[100009];
int n;

void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int Try()
{
    int dp[n];
    for (int i = 0; i < n; i++)
    {
        dp[i] = 0;
    }
    int sumMax = 0;

    if (n == 1)
        return arr[0];
    if (n == 2)
        return arr[1] + arr[0];
    if (n == 3)
        return max(arr[0] + arr[1], max(arr[1] + arr[2], arr[0] + arr[2]));
    dp[0] = arr[0];
    dp[1] = arr[1] + arr[0];
    dp[2] = max(arr[0] + arr[1], max(arr[1] + arr[2], arr[0] + arr[2]));
    int i = 3;
    while (i < n)
    {
        dp[i] = max(dp[i - 1], max(dp[i - 2] + arr[i], dp[i - 3] + arr[i] + arr[i - 1]));
        sumMax = max(sumMax, dp[i]);
        i++;
    }

    return sumMax;
}

int main()
{
    int max_sum = 0;
    input();
    cout << Try();

    return 0;
}