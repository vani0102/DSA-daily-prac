//only alpabets will get reversed and special charcaters remains at same place.
//solved using 2 pointer approach >> left pointer at a[0] and right at a[n-1]

#include <iostream>
using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0, right = s.length() - 1;

        while(left < right) {
            if(!isalpha(s[left])) {
                left++;
            }
            else if(!isalpha(s[right])) {
                right--;
            }
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};
