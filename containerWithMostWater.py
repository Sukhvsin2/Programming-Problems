'''
  /**
   * @file containerWithMostWater.py
   * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
   * @brief You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
            Find two lines that together with the x-axis form a container, such that the container contains the most water.
            Return the maximum amount of water a container can store.
            Notice that you may not slant the container.
   * @problemRefrence https://leetcode.com/problems/container-with-most-water/
   * @version 1.0
   * @date 2022-08-14
   * 
   * @copyright Copyright (c) 2022
   * 
   **/
'''
class Solution(object):
    def maxArea(self, height):
        temp = 0
        r = len(height)-1
        l = 0
        m = 0
        for i in range(len(height)):
            temp = (r-l) * min(height[l], height[r])
            m = max(m, temp)
            if height[r] > height[l]:
                l = l+1
            else:
                r = r-1
            
        return m
