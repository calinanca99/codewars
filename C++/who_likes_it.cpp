#include <string>
#include <vector>
#include <iostream>

std::string likes(const std::vector<std::string> &names);

int main()
{
    std::vector<std::string> test_1 = {};
    std::string result_1 = likes(test_1);
    std::cout << result_1 << '\n';

    std::vector<std::string> test_2 = {"Jacob"};
    std::string result_2 = likes(test_2);
    std::cout << result_2 << '\n';

    std::vector<std::string> test_3 = {"Max", "John", "Mark"};
    std::string result_3 = likes(test_3);
    std::cout << result_3 << '\n';

    std::vector<std::string> test_4 = {"Max", "John", "Mark", "Jacob"};
    std::string result_4 = likes(test_4);
    std::cout << result_4 << '\n';
}

std::string likes(const std::vector<std::string> &names) 
{
    std::string result = "";
    int names_size = names.size();

    if (names_size == 0) 
    {
        result += "no one likes this";
    } 
    else 
    {
        if (names_size == 1)
        {
            result += names[0] + " likes this";
        }

        else if (names_size == 2)
        {
            result += names[0] + " and " + names[1] + " like this";
        }
        
        else if (names_size == 3)
        {
            result += names[0] + ", " + names[1] + " and " + names[2] + " like this";
        }

        else
        {
            int others = names_size - 2;
            result += names[0] + ", " + names[1] + " and " + std::to_string(others) + " others like this";
        }
    }

    return result;
}