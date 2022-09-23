// Mame-kakuma
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &vec)
{
    for (auto x : vec)
        cout << x << " ";
    cout << "\n";
}
int main()
{
    int len, last, i;
    cin >> len;
    vector<int> lis(len);
    for (int i = 0; i < len; i++)
        cin >> lis[i];
    last = lis.back();
    for (i = len - 2; i >= 0; i--)
    {
        if (last < lis[i])
            lis[i + 1] = lis[i];
        else
        {
            lis[i + 1] = last;
            print(lis);
            break;
        }
        print(lis);
    }
    if (i < 0)
    {
        lis[0] = last;
        print(lis);
    }
}