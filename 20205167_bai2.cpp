#include <bits/stdc++.h>

using namespace std;

int arr[10000009];

int main()
{
    priority_queue<int> q; // Initialize a priority queue (max heap)

    // Perform operations
    int n, number;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
    }
    string op;
    while (true)
    {
        cin >> op;
        if (op == "insert")
        {
            cin >> number;
            q.push(number);
        }
        else if (op == "*")
            break;
        else if (op == "delete-max")
        {
            int max = q.top();
            q.pop();
            cout << max << endl;
        }
    }

    return 0;
}
