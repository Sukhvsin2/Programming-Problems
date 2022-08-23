/**
 * @file longestCommonPrefix.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Write a function to find the longest common prefix string amongst an array of strings.
          If there is no common prefix, return an empty string "".
 * @problemRefrence https://leetcode.com/problems/longest-common-prefix/
 * @version 1.0
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * 
 **/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        
        for(int i=0;i<(strs[0].size());i++){
            for(int j=1;j<strs.size();j++){
                if(i == (strs[j].size()) || strs[0][i] != strs[j][i]) return res;
            }
            res += strs[0][i];
        }
        return res;
    }
};
