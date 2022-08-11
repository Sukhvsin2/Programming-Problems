
/**
 * @file palindromNumber.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an integer x, return true if x is palindrome integer.
          An integer is a palindrome when it reads the same backward as forward.
          For example, 121 is a palindrome while 123 is not.
 * @problemRefrence https://leetcode.com/problems/palindrome-number/
 * @version 1.0
 * @date 2022-08-011
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        unsigned int temp = 0;
        int hold = x;
        while(hold){
            temp = (temp*10) + hold%10;
            hold /= 10;
        }
        if(temp == x) return true;
        return false;
    }
};
