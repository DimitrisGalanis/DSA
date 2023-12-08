#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


/*  Creating a set from vector and then loop + substruct target from vector(i)
    instead of two loop with O(n^2) Time Complexity
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    uint16_t n =  nums.size();

     // creating hash 
    for ( uint16_t i = 0; i<n; ++i) {
       map[nums[i]] = i;
    }

    // lookup for element
    for ( int i=0 ; i<n; ++i)
    {
        int element = target - nums[i];
        if (map.count(element) && map[element] != i)
        {
            return {i, map[element]};
        }
    } 

    return {};
    }
};



// unsinged integers only?
int main() {
    uint8_t target = 9; // target of two summs
    vector<int> vec = {1,2,2,2,3,4,5,6,7,8,9}; // initialize vec
    

    Solution sol;
    vector<int> test = sol.twoSum(vec,target);
    for (auto i : test)
        cout << i << endl;
    return 0;
}