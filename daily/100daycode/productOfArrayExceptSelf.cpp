class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1;
        vector<int> res(nums.size(), 1);
        // res[0] = nums[0];
        for(int i=0;i<nums.size();i++){
            res[i] = prefix;
            prefix *= nums[i];
        }

        int postfix = 1;
        for(int i=nums.size()-1;i>-1;i--){
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;
    }
};
