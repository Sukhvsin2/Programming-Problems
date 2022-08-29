/**
 * @file 3sum.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given an integer array nums, 
          return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
          Notice that the solution set must not contain duplicate triplets.
 * @problemRefrence https://leetcode.com/problems/3sum/
 * @version 1.0
 * @date 2022-08-28
 * 
 * @copyright Copyright (c) 2022
 * 
 **/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res = {};
        sort(nums.begin(), nums.end());
        for(auto a: nums) cout<<a<<" ";
        for(int i=0;i<nums.size();i++){
            if(i > 0 && nums[i-1] == nums[i])
                continue;
            int l = i+1, r = nums.size()-1;
            while(l < r){
                if(nums[i] + nums[l] + nums[r] < 0){
                    l++;
                }else if(nums[i] + nums[l] + nums[r] > 0)
                    r--;
                else{
                    cout<<"added"<<endl;
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    l++;
                    while(l < r && nums[l] == nums[l-1]) l++;
                }   
            }
        }
        return res;
    }
};
