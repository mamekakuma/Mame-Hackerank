// Mame-kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len, val;
    cin >> len;
    vector<int> mem(100, 0);
    while (len--)
    {
        cin >> val;
        mem[val]++;
    }
    for (int i = 0; i < 100; i++)
        cout << mem[i] << " ";
}