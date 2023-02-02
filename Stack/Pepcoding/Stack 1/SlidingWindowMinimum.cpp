#include <bits/stdc++.h>
using namespace std;

int *nser(int arr[], int n)
{
    int *ans = new int[n];
    stack<int> st;
    ans[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            st.pop();
        }
        if (st.empty())
            ans[i] = n;
        else
            ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *nge = nser(arr, n);
    int k;
    cin >> k;
    int j = 0;
    for (int i = 0; i <= n - k; i++)
    {
        if (j < i)
            j = i;
        while (nge[j] < i + k)
        {
            j = nge[j];
        }
        cout << arr[j] << " ";
    }

    return 0;
}