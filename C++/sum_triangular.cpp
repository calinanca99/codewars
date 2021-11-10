#include <iostream>

int sum_triangular_numbers(int n);

int main()
{
    int n = 4;
    std::cout << sum_triangular_numbers(n);

    return 0;
}

int sum_triangular_numbers(int n)
{
    if(n <= 0)
        return 0;
    else {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int temp = i*(i+1)/2;
            sum += temp;
        }
        return sum;
    }
}