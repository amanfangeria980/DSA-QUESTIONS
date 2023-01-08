#include <bits/stdc++.h>
using namespace std;

    bool Search(int n, vector<int> &arr, int key)
    {
        int s = 0;
        int e = arr.size() - 1;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (arr[mid] == key)
                return true;
            if (arr[mid] == arr[s] && arr[mid] == arr[e])
            {
                s++;
                e--;
            }
            // left part is sorted
            else if (arr[s] <= arr[mid])
            {
                if (key >= arr[s] && key < arr[mid])
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            // right part is sorted
            else
            {
                if (key > arr[mid] && key <= arr[e])
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }
        return false;
    }

int main()
{
    int n = 7;
    vector<int> a{2, 5, 6, 0, 0, 1, 2};
    int key = 3;
    cout << Search(n, a, key) << "\n";
    return 0;
}