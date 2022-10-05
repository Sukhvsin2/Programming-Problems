class Solution {
public:
    int binarySearch(vector<int> &nums, int t, int low, int high, int res = -1){
        if(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == t) return mid;
            else if(t < nums[mid]){
                res = low;
                return binarySearch(nums, t, low, mid-1, res);
            }
            else{
                res = high+1;
                return binarySearch(nums, t, mid+1, high, res);
            }
        }
        return res;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size()-1);
    }
};
