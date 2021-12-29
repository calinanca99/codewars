# include <string>

std::string disemvowel(const std::string& str) {
    std::string result;
  
    for (const auto &letter: str) {
      if (letter != 'a' && letter != 'A' && letter !='e' && letter !='E' && letter !='i' && letter !='I' && letter !='o' && letter !='O' && letter !='u' && letter !='U') {
        result += letter;
      }
    }
  
    return result;
}