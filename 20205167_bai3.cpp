#include <bits/stdc++.h>

using namespace std;

int arr[10009];
int result = 0;

void Try(int i, int arr[], int sum_temp, int m, int n, int k, int cnt)
{
    if (cnt == k && sum_temp == m)
    {
        result += 1;
    }
    else if (cnt == k && sum_temp != m)
    {
        return;
    }
    else
    {
        for (int i1 = i + 1; i1 <= n - k + cnt; i1++)
        {
            Try(i1, arr, sum_temp + arr[i1], m, n, k, cnt + 1);
        }
    }
}

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    
    input(arr, n);

    Try(-1, arr, 0, m, n, k, 0);

    cout << result;
}