#include <iostream>

int solution(int number);

int main()
{
    int test = 10;
    int sol = solution(test);
    std::cout << "Result: " << sol << '\n';

    return 0;
}

int solution(int number) {
    if (number < 0)
        return 0;

    int sum = 0;
    for (int i = 3; i < number; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            std::cout << i << '\n';
            sum += i;
        }
    }

    return sum;
}