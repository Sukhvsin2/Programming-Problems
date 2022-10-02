class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int lMax[height.size()], rMax[height.size()];
        lMax[0] = height[0];
        for(int i=1;i<height.size();i++)
            lMax[i] = max(height[i], lMax[i-1]);
        rMax[height.size()-1] = height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--)
            rMax[i] = max(height[i], rMax[i+1]);
        
        for(auto i: lMax)
            cout<<i<<" ";
        
        
        for(int i=1;i<height.size()-1;i++){
            water += min(lMax[i], rMax[i]) - height[i];
        }
        return water;
    }
};
