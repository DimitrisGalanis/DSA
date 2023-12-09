#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> umap{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    uint32_t answer = 0;

    for(uint8_t i=0; i<s.size(); ++i){
        if( umap[s[i]] < umap[s[i+1]] )
            answer -= umap[s[i]];
        else
            answer += umap[s[i]];
    }

        return answer;
    }
};


int main(){

    Solution sol;
    const string s = "MCMXCIV";
    int answer = sol.romanToInt(s);
    cout << answer;
    return 0;
}