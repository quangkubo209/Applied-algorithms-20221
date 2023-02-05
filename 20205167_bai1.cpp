#include <bits/stdc++.h>

using namespace std;

int arr[1000009];
int n, k, A, B, result;

void input()
{
    cin >> n >> k >> A >> B;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
bool solve(int arr[], int i, int k, int A, int B)
{
    int s = 0;

    for (int j = 0; j < k; j++)
        s += arr[i + j];
    if (s <= B && s >= A)
        return true;
    return false;
}

int main()
{
    input();
    result = 0;

    for (int i = 0; i <= n - k; i++)
        if (solve(arr, i, k, A, B))
            result++;

    cout << result;

    return 0;
}