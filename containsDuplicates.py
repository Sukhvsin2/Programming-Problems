'''
 * @file longestPalindromic.py
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
 * @problemRefrence https://leetcode.com/problems/contains-duplicate/
 * @version 1.0
 * @date 2022-08-12
 * 
 * @copyright Copyright (c) 2022
 * 
 '''
class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        hashset = set()
        
        for i in nums:
            if(i in hashset):
                return True
            hashset.add(i)
        
        return False
