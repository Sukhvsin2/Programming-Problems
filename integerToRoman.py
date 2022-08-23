'''
  /**
   * @file integerToRoman.py
   * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
   * @brief Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
            Given an integer, convert it to a roman numeral.
   * @problemRefrence https://leetcode.com/problems/integer-to-roman/
   * @version 1.0
   * @date 2022-08-23
   * 
   * @copyright Copyright (c) 2022
   * 
   **/
'''

class Solution(object):
    def intToRoman(self, num):
        roman = [[1, "I"], [4, "IV"], [5, "V"], [9, "IX"], [10, "X"], 
        [40, "XL"], [50, "L"], [90, "XC"], [100, "C"], [400, "CD"], [500, "D"], [900, "CM"], [1000, "M"]]
        
        res = ""
        for n, sym in reversed(roman):
            if num // n:
                res += sym * (num//n)
                num = num % n
        return res
        

class Solution(object):
    def intToRoman(self, num):
        
        units = ["", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"]
        tens = ["", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"]
        hundred = ["", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"]
        thousand = ["", "M", "MM", "MMM"]
        
        return (thousand[num//1000] + hundred[(num % 1000)//100] + tens[(num % 100)//10] + units[num % 10])
        
        
