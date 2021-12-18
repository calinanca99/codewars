#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  for(int i = 0; i < inputStr.length(); i++) {
    auto curr = inputStr[i];
    if (curr == 'a' || curr == 'e' || curr == 'i' || curr == 'o' || curr == 'u')
      num_vowels += 1;
  }
  return num_vowels;
}
