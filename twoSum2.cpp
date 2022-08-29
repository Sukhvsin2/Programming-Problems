/**
 * @file twoSum2.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order,
          find two numbers such that they add up to a specific target number. 
          Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
          Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
 * @problemRefrence https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * @version 1.0
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * 
 **/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res = {};
        int l = 0, r = numbers.size()-1;
        while(l < r){
            if(numbers[l] + numbers[r] == target){
                res.push_back(l+1);
                res.push_back(r+1);
                return res;
            }                
            else if(numbers[r] + numbers[l] > target)
                r--;
            else
                l++;
        }
        return res;
    }
};
