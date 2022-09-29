// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> res, zero;
//         for(int i=0;i<nums.size();i++)
//             if(nums[i] == 0) zero.push_back(nums[i]);
        
//         for(int i=0;i<nums.size();i++)
//             if(nums[i] != 0)
//                 res.push_back(nums[i]);
        
//         for(int i=0;i<res.size();i++)
//             nums[i] = res[i];
        
        
//         for(int i=res.size(), j = 0;i<res.size()+zero.size();i++, j++)
//             nums[i] = zero[j];
//     }
// };
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                swap(nums[i], nums[index]);
                index++;
            }
        }
    }
};
