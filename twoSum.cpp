/**
 * @file twoSum.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.
 * @version 1.0
 * @date 2022-06-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ind;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                if(nums[i] + nums[j] == target){
                    ind.push_back(i);
                    ind.push_back(j);
                    return ind;
                }
            }
        }
        return ind;
    }
};