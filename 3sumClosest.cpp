/**
 * @file 3sumClosest.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an integer array nums of length n and an integer target, 
          find three integers in nums such that the sum is closest to target.
          Return the sum of the three integers.
          You may assume that each input would have exactly one solution.
 * @problemRefrence https://leetcode.com/problems/3sum-closest/
 * @version 1.0
 * @date 2022-08-29
 * 
 * @copyright Copyright (c) 2022
 * 
 **/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = nums[0] + nums[1] + nums[nums.size() - 1];
        vector<int> findRes;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            // if(i > 0 && nums[i] == nums[i-1]) continue;// taking extra time by this statement 
            int l = i+1, r = nums.size()-1;
            while(l < r){
                int current_sum = nums[i] + nums[l] + nums[r];
                if(current_sum < target)
                    l++;
                else
                    r--;
                if(abs(current_sum - target) < abs(res - target)){
                    res = current_sum;
                }
            }
        }
        return res;
    }
};
