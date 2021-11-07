#include <iostream>
#include <string>
using namespace std;

string even_or_odd(int number);

int main()
{
    int a, b;

    a = 10;
    b = 9;

    cout << even_or_odd(a) << endl;
    cout << even_or_odd(b) << endl;
}

string even_or_odd(int number)
{
    return number%2 == 0 ? string("Even") : string("Odd");
}