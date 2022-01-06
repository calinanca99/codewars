#include <vector>
#include <iostream>
#include <algorithm>

std::vector<int> move_zeroes(const std::vector<int> &arr);

int main()
{
    std::vector<int> test_1 = {1, 0, 1, 2, 0, 1, 3};
    std::vector<int> result_1 = move_zeroes(test_1);

    for (const auto &i : result_1)
        std::cout << i << '\n';

    return 0;
}

std::vector<int> move_zeroes(const std::vector<int> &arr)
{
    std::vector<int> zeroes(arr.size());
    std::remove_copy_if(arr.begin(), arr.end(), zeroes.begin(),
                        [] (const int &i) {
                            return i == 0;
                        });
    return zeroes;
}