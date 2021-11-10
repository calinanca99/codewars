#include <vector>
#include <iostream>

unsigned long long int sum_factorial(std::vector<int> vi);

int main()
{
    std::vector<int> test_1 = {4, 6};
    std::cout << sum_factorial(test_1);

    return 0;
}

unsigned long long int sum_factorial(std::vector<int> vi){
    int length = vi.size();
    unsigned long long int sum = 0;

    for (int i = 0; i < length; i++) {
        unsigned long long int temp_num;
        if(vi[i] == 0)
            temp_num = 1;
        else
            temp_num = vi[i];
        unsigned long long int temp_res = 1;
        for (unsigned long long int j = 1; j <= temp_num; j++) {
            temp_res *= j;
        }
        sum += temp_res;
    }

    return sum;
}