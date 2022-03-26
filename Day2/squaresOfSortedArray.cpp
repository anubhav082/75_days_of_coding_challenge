// squares of a sorted array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans(nums.size()) ;
        int start=0 , end=nums.size()-1 ;
        
        for (int i=nums.size()-1; i>=0; i--)
        {
            if (abs(nums[end])>abs(nums[start]))
                ans[i] = nums[end]*nums[end--];
            else
                ans[i] = nums[start]*nums[start++];
        }
        
        return ans ;
        
    }
};
