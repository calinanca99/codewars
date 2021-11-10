#include <iostream>
#include <vector>

int count_sheep(std::vector<bool> arr);

int main()
{
    std::vector<bool> test_1 = { true, false, true, true, false, true, true, true, true}; // 7
    std::vector<bool> test_2 = {}; // empty vector to handle corner case
    std::vector<bool> test_3;

    std::cout << count_sheep(test_3);

    return 0;
}

int count_sheep(std::vector<bool> arr)
{
    int arr_size = arr.size();
    if(arr_size == 0)
        return 0;
    else {
        int sum = 0;
        for (int i = 0; i < arr_size; i++) {
            if(arr[i])
                sum += 1;
        }
        return sum;
    }
}