/*
    Given an array of integers the program
    should count the positive integers
    and sum the negative ones.
*/

#include <iostream>
#include <vector>

std::vector<int> count_sum(std::vector<int> input);

int main()
{
    std::vector<int> output_test;

    std::vector<int> input_test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
    std::vector<int> expect = {10, -65};

    output_test = count_sum(input_test);

    std::cout << "RESULT: " << "\n";
    for(std::vector<int>::iterator it = output_test.begin(); it != output_test.end(); ++it)
        std::cout << *it << " ";

    std::cout << "\n";

    std::cout << "EXPECTED: " << "\n";
    for(std::vector<int>::iterator it = expect.begin(); it != expect.end(); ++it)
        std::cout << *it << " ";

    return 0;
}

std::vector<int> count_sum(std::vector<int> input) {
    int count = 0;
    int sum = 0;
    std::vector<int> result;
    std::vector<int> empty;
    for(std::vector<int>::iterator it = input.begin(); it != input.end(); ++it) {
        if(*it < 0)
            sum += *it;
        else if (*it > 0)
            count += 1;
    }

    result.push_back(count);
    result.push_back(sum);

    if(sum == 0 && count == 0)
        return empty;
    else
        return result;
};


