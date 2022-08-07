
/**
 * @file medianArrays.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me/)
 * @brief Given 2 sorted arrays and find median between them
 * @problemRefrence https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/
 * @version 1.0
 * @date 2022-08-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> tempNums;
        int i=0, i1 = 0, i2 = 0;
        while(i1 < nums1.size() && i2 < nums2.size()){
            if(nums1[i1] < nums2[i2]){
                tempNums.push_back(nums1[i1]);
                i1++;
            }else{
                tempNums.push_back(nums2[i2]);
                i2++;
            }
        }
        
        while(i1 < nums1.size()){
            tempNums.push_back(nums1[i1]);
            i1++;
        }
        
        while(i2 < nums2.size()){
            tempNums.push_back(nums2[i2]);
            i2++;
        }
        double median = 0;
        if(tempNums.size() % 2 == 0){
            median = tempNums[((tempNums.size()-1)/2)] + tempNums[(tempNums.size())/2];
            median /= 2;
        }else{
            median = tempNums[(tempNums.size()/2)];
        }
        return median;
    }
};
