/**
 * @file subset.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an array of multiple numbers and return the every possibility in that set.
 * @problemRefrence https://leetcode.com/problems/subsets/
 * @version 1.0
 * @date 2022-09-17
 * 
 * @copyright Copyright (c) 2022
 * 
 **/
class Solution {
public:
    void subset(vector<int> &nums, vector<vector<int>> &curr, vector<int> temp, int s = 0){
        if(s == nums.size()){
            curr.push_back(temp);
            return;
        }
        subset(nums, curr, temp, s+1);
        temp.push_back(nums[s]);
        subset(nums, curr, temp, s+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> curr{};
        subset(nums, curr, {});
        return curr;
    }
};
