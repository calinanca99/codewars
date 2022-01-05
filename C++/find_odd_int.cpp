#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

/*
    In an array of integers find the one (there is only one)
    that occurs an odd number of times.

    Steps:
    1. Create a set with unique values
    2. Use count_if for each number in the set
    3. If count_if is odd, return the number
*/

int findOdd(const std::vector<int> &numbers);

int main()
{
    std::vector<int> test = {20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5};
    int res = findOdd(test);
    std::cout << "Result is: " << res << '\n';

    return 0;
}

int findOdd(const std::vector<int> &numbers) {
    std::set<int> unique (numbers.begin(), numbers.end());

    for (const auto &i : unique) {
        int count = std::count_if(numbers.begin(), numbers.end(), 
                            [i] (int num) {
                                return i == num; 
                            });
        
        if (count % 2 != 0)
            return i;
    }
}