#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;

        // finding length of x . For some reason leetcode doesn't accept ---> length = log10(x) from cmath
        int count = 0;
        int number = x;
        while ( number != 0 ) {
            number = number / 10;
            count++;
        }

        // x is dived so we store it on og_x
        int og_x = x;
        long int pali= 0 ;
        int temp;
        while ( x > 0 ) {
            temp = x % 10;
            x = x / 10;
            pali = pali + temp * pow(10,count-1);
            count-= 1;
        }
        return ( og_x == pali );
    }
};


int main(){
    Solution sol;
    cout << sol.isPalindrome(123) << endl; 
    cout << sol.isPalindrome(313) << endl;

    return 0;
}