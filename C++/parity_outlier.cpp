#include <vector>
#include <algorithm>

int FindOutlier(std::vector<int> arr)
{
  
    auto isEven = [] (const int &i) { return i % 2 == 0; };
    int even_nums = count_if(arr.begin(), arr.end(), isEven);
    
    if (even_nums == 1)
    {
      auto even_number = find_if(arr.begin(), arr.end(), isEven);
      return *even_number;
    }
  
    else
    {
      auto odd_number = find_if_not(arr.begin(), arr.end(), isEven);
      return *odd_number; 
    }
}