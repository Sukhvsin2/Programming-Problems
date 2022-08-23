'''
  /**
   * @file romanToInterger.py
   * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
   * @brief Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
             Given a roman numeral, convert it to an integer.
   * @problemRefrence https://leetcode.com/problems/roman-to-integer/
   * @version 1.0
   * @date 2022-08-28
   * 
   * @copyright Copyright (c) 2022
   * 
   **/
'''
class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        
        res = 0
        for i in range(len(s)):
            if i+1 < len(s) and roman[s[i]] < roman[s[i+1]]:
                res -= roman.get(s[i])
            else:
                res += roman.get(s[i])
                
        return res
            
        
