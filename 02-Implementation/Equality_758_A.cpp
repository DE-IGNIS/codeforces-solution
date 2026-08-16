#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minB(int n, vector<int> &a)
    {
        int max_val = *max_element(a.begin(), a.end());
        int total = 0;

        for (int i = 0; i < n; i++)
        {
            total += (max_val - a[i]);
        }

        return total;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Solution sol;
    cout << sol.minB(n, a) << endl;

    return 0;
}