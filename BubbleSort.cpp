// Mame-Kakuma
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> &lis, int len)
{
    int swapCntr = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (lis[j] > lis[j + 1])
            {
                swap(lis[j], lis[j + 1]);
                swapCntr++;
            }
        }
    }
    cout << "Array is sorted in " << swapCntr << " swaps.\n";
    cout << "First Element: " << lis.front() << "\n";
    cout << "Last Element: " << lis.back();
}
int main()
{
    int len, val;
    cin >> len;
    vector<int> lis;
    for (int i = 0; i < len; i++)
    {
        cin >> val;
        lis.emplace_back(val);
    }
    bubbleSort(lis, len);
}