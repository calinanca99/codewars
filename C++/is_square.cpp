#include <cmath>
#include <iostream>

bool is_square(int n);

int main()
{
    int i, j, k;
    i = 64;
    j = 73;
    k = -1;
    std::cout << is_square(i) << "\n";
    std::cout << is_square(j) << "\n";

    return 0;
}

bool is_square(int n)
{
    if(n < 0)
        return false;
    else
        return (int(sqrt(n))*int(sqrt(n)) == n);
}