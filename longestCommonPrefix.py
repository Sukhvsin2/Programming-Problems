'''
  /**
   * @file longestCommonPrefix.py
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
'''

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        
        zipped = zip(*strs)
        
        for i in zipped:
            if len(set(i)) == 1:
                res += i[0]
            else:
                break
                
        return res
        
  class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        
        for i in range(len(strs[0])):
            for s in strs:
                if i == len(s) or s[i] != strs[0][i]:
                    return res
            res += strs[0][i]
        return res
