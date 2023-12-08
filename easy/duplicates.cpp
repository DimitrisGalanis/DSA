#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

/*  Solution with Set !
    Complexity O(n) + O(1) = O(n)
    145ms & 74MB    
*/ 
class Solution1 {
public:
    bool containsDuplicate(vector<int>& nums) {
         return nums.size() > set<int>(nums.begin(),nums.end()).size();
    }
};


/*  Solution with Sorting !
    Complexity O(n)
    94ms & 57.9MB ---> best overall solution timewise
*/ 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return flag;
    }
};


int main() {
    Solution sol;
    vector<int> test_1 = {1,1,2,3,4};
    vector<int> test_2 = {1,5,2,3,4};

    cout << sol.containsDuplicate(test_1) << endl;
    cout << sol.containsDuplicate(test_2) << endl;
}