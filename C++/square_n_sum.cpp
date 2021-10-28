#include <vector>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    vector<int> my_vec = {1, 2, 3};
    int sum = 0;

    for (size_t i = 0; i < my_vec.size(); i++)
    {
        int temp = my_vec[i];
        sum += pow(temp, 2);
    }

    cout << "Result is " << sum;
    return EXIT_SUCCESS;
}