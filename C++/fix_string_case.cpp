#include <string>
#include <cctype>

std::string solve(const std::string& str){
    std::string lowercase_result = "";
    std::string uppercase_result = "";
    int lowercase = 0;
    int uppercase = 0;
    
    for (const auto &letter: str) {
        lowercase_result += tolower(letter);
        uppercase_result += toupper(letter);
        
        if (islower(letter)) {
        lowercase += 1;
        } else {
        uppercase += 1;
        }
    }
    
    if (lowercase >= uppercase) {
        return lowercase_result;
    } else {
        return uppercase_result;
    }
}