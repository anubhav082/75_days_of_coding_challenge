// Move zeros

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j=0, l=nums.size();
        for(i=0; i<l; i++)
            if(nums[i] != 0) 
            {
                swap(nums[i], nums[j]);
                j++;
            }
    }
};
