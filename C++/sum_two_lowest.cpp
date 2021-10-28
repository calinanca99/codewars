#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int sum = 0;

    vector<int> unsorted = { 5, 8, 12, 19, 22 };

    sort(unsorted.begin(), unsorted.end());

    for (size_t i = 0; i < 2; i++)
    {
        int temp = unsorted[i];
        sum += temp;
    }

    cout << sum << "\n";
    return 0;
}