/**
 * @file longestString.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given a string s, find the length of the longest substring without repeating characters.
 * @problemRefrence https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * @version 1.0
 * @date 2022-08-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> sub;
        int leftCounter = 0, i = 0, max = 0;
        while(i < s.length()){
            if(sub.find(s[i]) != sub.end()){
                sub.erase(s[leftCounter]);
                leftCounter++;
            }else{
                sub.insert(s[i]);
                i++;
                max = sub.size() > max ? sub.size() : max;
            }
        }
        
        
        return max;
    }
};
