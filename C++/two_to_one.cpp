#include <iostream>
#include <string>
#include <algorithm>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2);
};

std::string TwoToOne::longest(const std::string &s1, const std::string &s2)
{
    std::string result = "";

    // Append characters from both strings into one string
    for (int i = 0; i < s1.length(); i++) {
        result.push_back(s1[i]);
    }
    for (int j = 0; j < s2.length(); j++) {
        result.push_back(s2[j]);
    }

    // Sort the new string and remove duplicates
    std::sort(result.begin(), result.end());
    auto res = std::unique(result.begin(), result.end());

    return std::string(result.begin(), res);
}

int main()
{
    std::string result;

    std::string a = "xyaabbbccccdefww";
    std::string b = "xxxxyyyyabklmopq";

    result = TwoToOne::longest(a, b);

    for (int i = 0; i < result.length(); i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
    // expected result:
    // "abcdefklmopqwxy"; i.e.: unique characters from each string sorted in ascending order
}